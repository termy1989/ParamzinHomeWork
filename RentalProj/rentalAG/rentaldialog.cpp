#include "rentaldialog.h"
#include "ui_rentaldialog.h"

// конструктор
RentalDialog::RentalDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RentalDialog)
{
    ui->setupUi(this);

    storeTableModel = new QSqlRelationalTableModel(nullptr);
    rentalTableModel = new QSqlTableModel(nullptr);

    connect(ui->buttonAdd, SIGNAL(clicked()), this, SLOT(addProducts()));
    connect(ui->buttonDel, SIGNAL(clicked()), this, SLOT(delProducts()));
    connect(ui->comboBoxGroup, SIGNAL(currentTextChanged(QString)),
            this, SLOT(currentGroupChanged(QString)));
    connect(ui->spinBoxDays, SIGNAL(valueChanged(int)), this, SLOT(calculateCost()));
    connect(ui->buttonOrder, SIGNAL(clicked()), this, SLOT(openOrder()));
}

// деструктор
RentalDialog::~RentalDialog()
{
    delete ui;
}

// открытие диалогового окна
void RentalDialog::openDialog()
{
    // открытие окна
    show();
    productCount.clear();

    // сохранение настроек шрифта таблиц перед обновлением
    QFont font1 = ui->storeTableWidget->font();
    font1.setPointSize(10);
    ui->storeTableWidget->setFont(font1);
    QFont font2 = ui->rentalTableWidget->font();
    font2.setPointSize(10);
    ui->rentalTableWidget->setFont(font2);

    // предварительная настройка таблиц
    QStringList header;
    header << "Категория" << "Наименование" << "Количество (шт.)" << "Цена в первые 3 дня аренды (руб.)" << "Цена за день аренды (руб.)";
    ui->storeTableWidget->clear();
    ui->storeTableWidget->setColumnCount(5);
    ui->storeTableWidget->setRowCount(0);
    ui->storeTableWidget->setStyleSheet("QHeaderView::section { background-color:lightGray }");
    ui->storeTableWidget->setHorizontalHeaderLabels(header);
    ui->storeTableWidget->hideColumn(0);
    ui->storeTableWidget->hideColumn(2);
    ui->storeTableWidget->hideColumn(3);
    ui->storeTableWidget->hideColumn(4);
    ui->storeTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->storeTableWidget->horizontalHeader()->setFont(font1);
    ui->storeTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->rentalTableWidget->clear();
    ui->rentalTableWidget->setColumnCount(5);
    ui->rentalTableWidget->setRowCount(0);
    ui->rentalTableWidget->setStyleSheet("QHeaderView::section { background-color:lightGray }");
    ui->rentalTableWidget->setHorizontalHeaderLabels(header);
    ui->rentalTableWidget->hideColumn(0);
    ui->rentalTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::Stretch);
    ui->rentalTableWidget->horizontalHeader()->setFont(font2);
    ui->rentalTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    // поле общей суммы
    ui->spinBoxDays->setValue(3);
    ui->labelCost->setText("Общая стоимость: 0 руб");

    emit signalOpened();
}

// обновление таблицы товаров на складе
void RentalDialog::refresh(QSqlRelationalTableModel *tableModel, QSqlTableModel *comboBoxModel)
{
    // настройка comboBox
    ui->comboBoxGroup->setModel(comboBoxModel);
    ui->comboBoxGroup->setCurrentText(tr("- ВСЕ ТОВАРЫ -"));

    // установка размеров таблицы товаров на складе
    ui->storeTableWidget->setRowCount(tableModel->rowCount());

    // заполнение таблицы товаров на складе
    for (int i = 0; i < tableModel->rowCount(); i++) {

        QSqlRecord record = tableModel->record(i);

        QTableWidgetItem *item = new QTableWidgetItem();
        item->setData(Qt::EditRole, record.value(0));
        ui->storeTableWidget->setItem(i, 0, item);

        QTableWidgetItem *item2 = new QTableWidgetItem();
        item2->setData(Qt::EditRole, record.value(1));
        ui->storeTableWidget->setItem(i, 1, item2);

        QTableWidgetItem *item3 = new QTableWidgetItem();
        item3->setData(Qt::EditRole, record.value(2));
        ui->storeTableWidget->setItem(i, 2, item3);

        QTableWidgetItem *item4 = new QTableWidgetItem();
        item4->setData(Qt::EditRole, record.value(3));
        ui->storeTableWidget->setItem(i, 3, item4);

        QTableWidgetItem *item5 = new QTableWidgetItem();
        item5->setData(Qt::EditRole, record.value(4));
        ui->storeTableWidget->setItem(i, 4, item5);
    }
    ui->storeTableWidget->sortItems(1);
}

// добавление товаров со склада к выдаче
void RentalDialog::addProducts()
{
    if (ui->storeTableWidget->selectionModel()->selection().count() != 0) {
        addSelected(ui->storeTableWidget, ui->rentalTableWidget);       
        delSelected(ui->storeTableWidget);
        calculateCost();
    }
    else emit signalErrorMsg(tr("Не выбраны товары для добавления к аренде"));
}

// отмена выдачи товаров
void RentalDialog::delProducts()
{
    if (ui->rentalTableWidget->selectionModel()->selection().count() != 0) {
        addSelected(ui->rentalTableWidget, ui->storeTableWidget);
        delSelected(ui->rentalTableWidget);
        calculateCost();
    }
    else emit signalErrorMsg(tr("Не выбраны товары для удаления из аренды"));
}

// перемещение указанных строк из одной таблицы в другую
void RentalDialog::addSelected(QTableWidget *srcTable, QTableWidget *dstTable)
{
    QModelIndexList list0 = srcTable->selectionModel()->selectedRows(0);
    QModelIndexList list1 = srcTable->selectionModel()->selectedRows(1);
    QModelIndexList list2 = srcTable->selectionModel()->selectedRows(2);
    QModelIndexList list3 = srcTable->selectionModel()->selectedRows(3);
    QModelIndexList list4 = srcTable->selectionModel()->selectedRows(4);

    int rowCount = dstTable->rowCount();
    dstTable->setRowCount(rowCount + list0.count());

    for (int i = 0; i < list1.count(); i++) {

        QTableWidgetItem *item0 = new QTableWidgetItem();
        item0->setData(Qt::EditRole, list0.at(i).data(Qt::EditRole));
        dstTable->setItem(i + rowCount, 0, item0);

        QTableWidgetItem *item1 = new QTableWidgetItem();
        item1->setData(Qt::EditRole, list1.at(i).data(Qt::EditRole));
        dstTable->setItem(i + rowCount, 1, item1);

        if (srcTable == ui->storeTableWidget) {
            QSpinBox *spinBox = new QSpinBox;
            connect(spinBox, SIGNAL(valueChanged(int)), this, SLOT(calculateCost()));
            spinBox->setMinimum(1);
            spinBox->setValue(1);
            spinBox->setMaximum(list2.at(i).data(Qt::EditRole).toInt());
            dstTable->setCellWidget(i + rowCount, 2, spinBox);
            productCount.append(qMakePair(list1.at(i).data(Qt::EditRole).toString(),
                                          list2.at(i).data(Qt::EditRole).toInt()));
        }
        else {
            int count = 1;
            for (int p = 0; p < productCount.count(); p++) {
                if (productCount.at(p).first == list1.at(i).data(Qt::EditRole).toString()) {
                    count = productCount.at(p).second;
                    productCount.removeAt(p);
                }
            }
            QTableWidgetItem *item2 = new QTableWidgetItem();
            item2->setData(Qt::EditRole, count);
            dstTable->setItem(i + rowCount, 2, item2);
        }

        QTableWidgetItem *item3 = new QTableWidgetItem();
        item3->setData(Qt::EditRole, list3.at(i).data(Qt::EditRole));
        dstTable->setItem(i + rowCount, 3, item3);

        QTableWidgetItem *item4 = new QTableWidgetItem();
        item4->setData(Qt::EditRole, list4.at(i).data(Qt::EditRole));
        dstTable->setItem(i + rowCount, 4, item4);
    }

    srcTable->sortItems(1);
    dstTable->sortItems(1);
}

// удаление выбранных строк из указанной таблицы
void RentalDialog::delSelected(QTableWidget *table)
{
    QItemSelection selection(table->selectionModel()->selection());

    QList<int> rows;
    foreach (const QModelIndex & index, selection.indexes()) {
       rows.append(index.row());
    }

    qSort(rows);

    int prev = -1;
    for (int i = rows.count() - 1; i >= 0; i -= 1 ) {
       int current = rows[i];
       if (current != prev) {
          table->model()->removeRows(current, 1);
          prev = current;
       }
    }
}

// вычисление общей стоимости аренды
void RentalDialog::calculateCost()
{
    double cost = 0;
    int count;
    for (int i = 0; i < ui->rentalTableWidget->rowCount(); i++) {
        QSpinBox *sp = (QSpinBox *)ui->rentalTableWidget->cellWidget(i, 2);
        if (sp != nullptr) count = sp->value();
        else count = 1;
        double price3 = ui->rentalTableWidget->model()->index(i, 3).data(Qt::EditRole).toDouble();
        double price = ui->rentalTableWidget->model()->index(i, 4).data(Qt::EditRole).toDouble();
        cost += (price3 + price * (ui->spinBoxDays->value() - 3)) * count;
    }
    ui->labelCost->setText("Общая стоимость: " + QString::number(cost) + " руб");
}

// смена категории товаров на складе
void RentalDialog::currentGroupChanged(QString)
{
    if (ui->storeTableWidget->model() != nullptr) {
        for (int i = 0; i < ui->storeTableWidget->model()->rowCount(); i++)
        {
            QString name = ui->storeTableWidget->model()->index(i, 0).data(Qt::EditRole).toString();
            if (name != ui->comboBoxGroup->currentText()
                    && ui->comboBoxGroup->currentText() != tr("- ВСЕ ТОВАРЫ -"))
                ui->storeTableWidget->hideRow(i);
            else
                ui->storeTableWidget->showRow(i);
        }
    }
}

// открытие диалогового окна оформления аренды
void RentalDialog::openOrder()
{
    QList<RentalItem*> listItems;
    for (int i = 0; i < ui->rentalTableWidget->model()->rowCount(); i++) {
        RentalItem *item = new RentalItem();
        item->setName(ui->rentalTableWidget->model()->index(i, 1).data(Qt::EditRole).toString());
        QSpinBox *sp = (QSpinBox *)ui->rentalTableWidget->cellWidget(i, 2);
        if (sp != nullptr) item->setCount(sp->value());
        else item->setCount(1);
        if (item->getCount() > 0)
            listItems.append(item);
    }
    if (listItems.isEmpty()) emit signalErrorMsg(tr("Не выбраны товары для аренды"));
    else emit signalOrder(listItems);
}
