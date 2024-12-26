#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = new DatabaseConnection("database");
    connect(db, SIGNAL(dbStatus(QString)), this, SLOT(slotStatus(QString)));
    connect(db, SIGNAL(sqlRefreshed(QSqlTableModel*)), this, SLOT(slotRefresh(QSqlTableModel*)));
    connect(ui->pushButton_3, SIGNAL(clicked(bool)), db, SLOT(slotAddToDatabase()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete db;
}

void MainWindow::slotStatus(QString str)
{
    ui->lineEdit->setText(str);
}

// обновление таблицы
void MainWindow::slotRefresh(QSqlTableModel *tableModel)
{
    // сохранение настроек шрифта таблицы перед обновлением
    QFont font = ui->tableView->font();
    font.setPointSize(10);
    ui->tableView->setFont(font);

    // настройка заголовков
    tableModel->setHeaderData(0, Qt::Horizontal, tr("ID"));
    tableModel->setHeaderData(1, Qt::Horizontal, tr("Имя"));
    tableModel->setHeaderData(2, Qt::Horizontal, tr("Email"));
    tableModel->setHeaderData(3, Qt::Horizontal, tr("Рост"));

    // настройка таблицы
    ui->tableView->setModel(tableModel);
    ui->tableView->setStyleSheet("QHeaderView::section { background-color:lightGray }");
    ui->tableView->setVisible(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setVisible(true);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->tableView->horizontalHeader()->setFont(font);
}

void MainWindow::on_pushButton_clicked()
{
    db->openDB();
}


void MainWindow::on_pushButton_2_clicked()
{
    db->closeDB();
    ui->tableView->setModel(NULL);
}


void MainWindow::on_pushButton_4_clicked()
{
    if (ui->tableView->selectionModel()->selectedRows(0).isEmpty())
    {
        QMessageBox::critical(0, "Error", "Please select row for delete!");
    }
    else
    {
        db->slotDelFromDatabase(ui->tableView->selectionModel()->selectedRows(0).at(0).data().toString());
    }
}

