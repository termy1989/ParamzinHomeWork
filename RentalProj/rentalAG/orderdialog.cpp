#include "orderdialog.h"
#include "ui_orderdialog.h"

// конструктор
OrderDialog::OrderDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderDialog)
{
    ui->setupUi(this);

    connect(ui->buttonAdd, SIGNAL(clicked()), this, SLOT(addCustomer()));
    connect(ui->buttonDel, SIGNAL(clicked()), this, SLOT(delCustomers()));
    connect(ui->tableViewCustomers, SIGNAL(clicked(QModelIndex)), this, SLOT(selectCustomer()));
    connect(ui->buttonCreateOrder, SIGNAL(clicked()), this, SLOT(createOrder()));
}

// деструктор
OrderDialog::~OrderDialog()
{
    delete ui;
}

// открытие диалогового окна
void OrderDialog::openDialog(QList<RentalItem*> list)
{
    // открытие
    show();

    // сохранение настроек шрифта таблицы перед обновлением
    QFont font = ui->tableWidgetProducts->font();
    font.setPointSize(10);
    ui->tableWidgetProducts->setFont(font);

    // очистка таблиц
    ui->tableWidgetProducts->clear();
    ui->tableWidgetProducts->setColumnCount(0);
    ui->tableWidgetProducts->setRowCount(0);

    // установка размеров таблицы товаров на складе
    ui->tableWidgetProducts->setRowCount(list.count());
    ui->tableWidgetProducts->setColumnCount(2);
    QStringList header;
    header << "Наименование" << "Количество";
    ui->tableWidgetProducts->setHorizontalHeaderLabels(header);
    ui->tableWidgetProducts->setStyleSheet("QHeaderView::section { background-color:lightGray }");

    // заполнение таблицы товаров на складе
    for (int i = 0; i < list.count(); i++) {

        QTableWidgetItem *item = new QTableWidgetItem();
        item->setData(Qt::EditRole, list.at(i)->getName());
        ui->tableWidgetProducts->setItem(i, 0, item);

        QTableWidgetItem *item1 = new QTableWidgetItem();
        item1->setData(Qt::EditRole, list.at(i)->getCount());
        ui->tableWidgetProducts->setItem(i, 1, item1);
    }

    // установка списка товаров для аренды
    rentalItemList = list;

    // настройка размеров таблицы товаров на складе
    ui->tableWidgetProducts->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidgetProducts->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->tableWidgetProducts->setFont(font);

    // настройка редакторов дат
    QDate currentDate = QDate::currentDate();
    ui->dateEditStart->setMinimumDate(currentDate);
    ui->dateEditStart->setDate(currentDate);
    ui->dateEditEnd->setMinimumDate(currentDate);
    ui->dateEditEnd->setDate(currentDate);

    // очистка данных клиента
    ui->lineEditName->clear();
    ui->lineEditPhone->clear();
    ui->lineEditEmail->clear();
    ui->textEditNote->clear();

    // отправка сигнала об открытии для обновления таблицы
    emit signalOpened();
}

// вывод списка клиентов
void OrderDialog::refresh(QSqlTableModel *model)
{
    // настройка заголовков таблицы
    model->setHeaderData(0, Qt::Horizontal, tr("Ф.И.О."));
    model->setHeaderData(1, Qt::Horizontal, tr("Номер телефона"));
    model->setHeaderData(2, Qt::Horizontal, tr("Электронная почта"));
    model->setHeaderData(3, Qt::Horizontal, tr("Примечание"));

    // сохранение настроек шрифта таблицы перед обновлением
    QFont font = ui->tableViewCustomers->font();
    font.setPointSize(10);
    ui->tableViewCustomers->setFont(font);

    // настройка модели
    ui->tableViewCustomers->setModel(model);
    ui->tableViewCustomers->setStyleSheet("QHeaderView::section { background-color:lightGray }");
    ui->tableViewCustomers->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->tableViewCustomers->horizontalHeader()->setFont(font);

    // строка "ВСЕ КЛИЕНТЫ" недоступна для редактирования
    for (int i = 0; i < model->rowCount(); i++)
    {
        QSqlRecord record = ((QSqlTableModel*)ui->tableViewCustomers->model())->record(i);
        if (record.value(0).toString() == "- ВСЕ КЛИЕНТЫ -")
            ui->tableViewCustomers->hideRow(i);
    }
}

// добавление нового клиента
void OrderDialog::addCustomer()
{
    emit signalAddCustomer(true);
}

// удаление выбранного клиента
void OrderDialog::delCustomers()
{
    ui->lineEditName->clear();
    ui->lineEditPhone->clear();
    ui->lineEditEmail->clear();
    ui->textEditNote->clear();
    emit signalDelCustomers(ui->tableViewCustomers->selectionModel()->selectedRows(0), true);
}

// выбор клиента в таблице - заполнение полей
void OrderDialog::selectCustomer()
{
    QModelIndexList list = ui->tableViewCustomers->selectionModel()->selectedIndexes();

    if (!list.isEmpty()) {
        ui->lineEditName->setText(ui->tableViewCustomers->model()->index(list.at(0).row(), 0)
                              .data(Qt::EditRole).toString());
        ui->lineEditPhone->setText(ui->tableViewCustomers->model()->index(list.at(0).row(), 1)
                               .data(Qt::EditRole).toString());
        ui->lineEditEmail->setText(ui->tableViewCustomers->model()->index(list.at(0).row(), 2)
                               .data(Qt::EditRole).toString());
        ui->textEditNote->setText(ui->tableViewCustomers->model()->index(list.at(0).row(), 3)
                              .data(Qt::EditRole).toString());
    }
}

// оформление аренды
void OrderDialog::createOrder()
{
    if (ui->lineEditName->text().isEmpty() || ui->lineEditPhone->text().isEmpty())
        emit signalErrorMsg(tr("Не выбран клиент для оформления аренды"));
    else if (ui->dateEditStart->date().daysTo(ui->dateEditEnd->date()) > 365)
        emit signalErrorMsg(tr("Максимальный срок аренды - 1 год"));
    else if (ui->dateEditStart->date().daysTo(ui->dateEditEnd->date()) < 2)
        emit signalErrorMsg(tr("Минимальный срок аренды - 3 дня"));
    else {
        QList<Order*> list;
        foreach (RentalItem *item, rentalItemList) {
            Order *order = new Order();
            order->setProductName(item->getName());
            order->setCount(item->getCount());
            order->setCustomerName(ui->lineEditName->text());
            order->setStartDate(ui->dateEditStart->date());
            order->setEndDate(ui->dateEditEnd->date());
            list.append(order);
        }
        emit signalAddOrder(list);
        close();
    }
}
