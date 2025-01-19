#include "productsdialog.h"
#include "ui_productsdialog.h"

// конструктор
ProductsDialog::ProductsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductsDialog)
{
    ui->setupUi(this);
    comboBoxDelegate = new ComboBoxDelegate(this, "name", "groups_table");
    connect(ui->buttonAdd, SIGNAL(clicked()), this, SLOT(addProduct()));
    connect(ui->buttonDel, SIGNAL(clicked()), this, SLOT(delProducts()));
    connect(ui->comboBoxGroup, SIGNAL(currentTextChanged(QString)),
            this, SLOT(currentGroupChanged(QString)));
}

// деструктор
ProductsDialog::~ProductsDialog()
{
    delete ui;
    delete comboBoxDelegate;
}

// открытие диалогового окна
void ProductsDialog::openDialog()
{
    // открытие диалогового окна
    show();

    // установка параметра сортировки "ВСЕ ТОВАРЫ"
    currentGroup = tr("- ВСЕ ТОВАРЫ -");

    // отправка сигнала об открытии для обновления таблицы
    emit signalOpened();
}

// обновление таблицы
void ProductsDialog::refresh(QSqlRelationalTableModel *tableModel, QSqlTableModel *comboBoxModel)
{
    // настройка comboBox
    ui->comboBoxGroup->setModel(comboBoxModel);
    if (currentGroup != "")
        ui->comboBoxGroup->setCurrentText(currentGroup);
    else
        ui->comboBoxGroup->setCurrentText(tr("- ВСЕ ТОВАРЫ -"));

    // сохранение настроек шрифта таблицы перед обновлением
    QFont font = ui->tableView->font();
    font.setPointSize(10);
    ui->tableView->setFont(font);

    // настройка заголовков
    tableModel->setHeaderData(0, Qt::Horizontal, tr("Категория"));
    tableModel->setHeaderData(1, Qt::Horizontal, tr("Наименование"));
    tableModel->setHeaderData(2, Qt::Horizontal, tr("Количество (шт.)"));
    tableModel->setHeaderData(3, Qt::Horizontal, tr("Цена в первые 3 дня аренды (руб.)"));
    tableModel->setHeaderData(4, Qt::Horizontal, tr("Цена за день аренды (руб.)"));

    // настройка таблицы
    ui->tableView->setModel(tableModel);
    ui->tableView->setStyleSheet("QHeaderView::section { background-color:lightGray }");
    ui->tableView->setVisible(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setVisible(true);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->tableView->horizontalHeader()->setFont(font);
    ui->tableView->setItemDelegateForColumn(0, comboBoxDelegate);
}

// добавление элемента
void ProductsDialog::addProduct()
{
    QString str = "";
    if (ui->comboBoxGroup->currentText() != tr("- ВСЕ ТОВАРЫ -"))
        str = ui->comboBoxGroup->currentText();
    currentGroup = str;
    emit signalAddProduct(str);
}

// удаление элемента
void ProductsDialog::delProducts()
{
    QString str = "";
    if (ui->comboBoxGroup->currentText() != tr("- ВСЕ ТОВАРЫ -"))
        str = ui->comboBoxGroup->currentText();
    currentGroup = str;
    emit signalDelProducts(ui->tableView->selectionModel()->selectedRows(1));
}

// смена категории товаров для сортировки
void ProductsDialog::currentGroupChanged(QString)
{
    if (ui->tableView->model() != nullptr) {
        for (int i = 0; i < ui->tableView->model()->rowCount(); i++)
        {
            QSqlRecord record = ((QSqlTableModel*)ui->tableView->model())->record(i);
            if (record.value(0).toString() != ui->comboBoxGroup->currentText()
                    && ui->comboBoxGroup->currentText() != tr("- ВСЕ ТОВАРЫ -"))
                ui->tableView->hideRow(i);
            else
                ui->tableView->showRow(i);
        }
    }
}
