#include "customersdialog.h"
#include "ui_customersdialog.h"

// конструктор
CustomersDialog::CustomersDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomersDialog)
{
    ui->setupUi(this);

    connect(ui->buttonAdd, SIGNAL(clicked()), this, SLOT(addCustomer()));
    connect(ui->buttonDel, SIGNAL(clicked()), this, SLOT(delCustomers()));
}

// деструктор
CustomersDialog::~CustomersDialog()
{
    delete ui;
}

// открытие диалогового окна
void CustomersDialog::openDialog()
{
    // открытие диалогового окна
    show();

    // отправка сигнала об открытии для обновления таблицы
    emit signalOpened();
}

// обновление таблицы
void CustomersDialog::refresh(QSqlTableModel *model)
{
    // настройка заголовков модели
    model->setHeaderData(0, Qt::Horizontal, tr("Ф.И.О."));
    model->setHeaderData(1, Qt::Horizontal, tr("Номер телефона"));
    model->setHeaderData(2, Qt::Horizontal, tr("Электронная почта"));
    model->setHeaderData(3, Qt::Horizontal, tr("Примечание"));

    // сохранение настроек шрифта таблицы перед обновлением
    QFont font = ui->tableView->font();
    font.setPointSize(10);
    ui->tableView->setFont(font);

    // настройка модели
    ui->tableView->setModel(model);
    ui->tableView->setStyleSheet("QHeaderView::section { background-color:lightGray }");
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->tableView->horizontalHeader()->setFont(font);

    // строка "ВСЕ КЛИЕНТЫ" недоступна для редактирования
    for (int i = 0; i < model->rowCount(); i++)
    {
        QSqlRecord record = ((QSqlTableModel*)ui->tableView->model())->record(i);
        if (record.value(0).toString() == "- ВСЕ КЛИЕНТЫ -")
            ui->tableView->hideRow(i);
    }
}

// добавление элемента
void CustomersDialog::addCustomer()
{
    emit signalAddCustomer(false);
}

// удаление элементов
void CustomersDialog::delCustomers()
{
    emit signalDelCustomers(ui->tableView->selectionModel()->selectedRows(0), false);
}
