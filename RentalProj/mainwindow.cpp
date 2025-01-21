#include "mainwindow.h"
#include "ui_mainwindow.h"

//  конструктор
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // окно на весь экран
    showMaximized();
    setFixedSize(this->size());

    // инициализация календаря
    initDatesOfYear();

    // инициализация обработчика базы данных
    mSqlHandler = new SqlHandler(this);
    connect(mSqlHandler, SIGNAL(signalConnectStatus(bool)), this, SLOT(sqlConnectingStatus(bool)));
    connect(mSqlHandler, SIGNAL(signalErrorMsg(QString)), this, SLOT(sqlMessageError(QString)));

    // инициализация вспомогательных диалоговых окон
    mGroupsDialog = new GroupsDialog(this);
    mCustomersDialog = new CustomersDialog(this);
    mProductsDialog = new ProductsDialog(this);
    mRentalDialog = new RentalDialog(this);
    mOrderDialog = new OrderDialog(this);

    // инициализация таймера
    mCurrentDayTimer = new QTimer(this);
    connect(this, SIGNAL(signalTimerStart(int)), mCurrentDayTimer, SLOT(start(int)));
    connect(this, SIGNAL(signalTimerStop()), mCurrentDayTimer, SLOT(stop()));
    connect(mCurrentDayTimer, SIGNAL(timeout()), this, SLOT(checkCurrentDay()));

    // инициализация меню
    connect(ui->actionConnect, SIGNAL(triggered()), mSqlHandler, SLOT(sqlConnect()));
    connect(ui->actionDisconnect, SIGNAL(triggered()), mSqlHandler, SLOT(sqlDisconnect()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(applicationClose()));
    connect(ui->actionCustomers, SIGNAL(triggered()), this, SLOT(openCustomersDialog()));
    connect(ui->actionProducts, SIGNAL(triggered()), this, SLOT(openProductsDailog()));
    connect(ui->actionGroups, SIGNAL(triggered()), this, SLOT(openGroupsDialog()));

    // инициализация кнопок
    connect(ui->buttonPrevDay, SIGNAL(clicked()), this, SLOT(selectPrevDay()));
    connect(ui->buttonNextDay, SIGNAL(clicked()), this, SLOT(selectNextDay()));
    connect(ui->buttonRental, SIGNAL(clicked()), this, SLOT(openRentalDialog()));
    connect(ui->buttonEndOrder, SIGNAL(clicked()), this, SLOT(getOrdersByCustomer()));

    // контекстное меню для таблицы
    connect(ui->ordersTableWidget, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(slotCustomMenuRequested(QPoint)));

    // инициализация ComboBox пользователей
    connect(ui->customerComboBox, SIGNAL(currentTextChanged(QString)), this, SLOT(currentCustomerChanged(QString)));

    // инициализация редактора стартовой даты
    connect(ui->startDateEdit, SIGNAL(dateChanged(QDate)), this, SLOT(currentDateChanged(QDate)));

    // обновление основного окна приложения
    connect(this, SIGNAL(signalRefreshMainWindow(bool)), mSqlHandler, SLOT(sqlRefreshMainWindow(bool)));
    connect(mSqlHandler, SIGNAL(sqlMainWindowRefreshed(QList<Order*>,QList<QString>,bool)), this, SLOT(refreshMainWindow(QList<Order*>,QList<QString>,bool)));

    // инициализация инструментов для работы с группами товаров
    connect(mGroupsDialog, SIGNAL(signalOpened()), mSqlHandler, SLOT(sqlRefreshGroups()));
    connect(mSqlHandler, SIGNAL(sqlGroupsRefreshed(QSqlTableModel*)), mGroupsDialog, SLOT(refresh(QSqlTableModel*)));
    connect(mGroupsDialog, SIGNAL(signalAddGroup()), mSqlHandler, SLOT(sqlAddGroup()));
    connect(mGroupsDialog, SIGNAL(signalDelGroups(QModelIndexList)), mSqlHandler, SLOT(sqlDelGroups(QModelIndexList)));

    // инициализация инструментов для работы с клиентами
    connect(mCustomersDialog, SIGNAL(signalOpened()), mSqlHandler, SLOT(sqlRefreshCustomers()));
    connect(mSqlHandler, SIGNAL(sqlCustomersRefreshed(QSqlTableModel*)), mCustomersDialog, SLOT(refresh(QSqlTableModel*)));
    connect(mCustomersDialog, SIGNAL(signalAddCustomer(bool)), mSqlHandler, SLOT(sqlAddCustomer(bool)));
    connect(mCustomersDialog, SIGNAL(signalDelCustomers(QModelIndexList, bool)), mSqlHandler, SLOT(sqlDelCustomers(QModelIndexList, bool)));

    //инициализация инструментов для работы с товарами
    connect(mProductsDialog, SIGNAL(signalOpened()), mSqlHandler, SLOT(sqlRefreshProducts()));
    connect(mSqlHandler, SIGNAL(sqlProductsRefreshed(QSqlRelationalTableModel*,QSqlTableModel*)), mProductsDialog, SLOT(refresh(QSqlRelationalTableModel*,QSqlTableModel*)));
    connect(mProductsDialog, SIGNAL(signalAddProduct(QString)), mSqlHandler, SLOT(sqlAddProduct(QString)));
    connect(mProductsDialog, SIGNAL(signalDelProducts(QModelIndexList)), mSqlHandler, SLOT(sqlDelProducts(QModelIndexList)));

    // инициализация инструментов для оформления аренды
    connect(mRentalDialog, SIGNAL(signalOrder(QList<RentalItem*>)), this, SLOT(openOrderDialog(QList<RentalItem*>)));
    connect(mOrderDialog, SIGNAL(signalOpened()), mSqlHandler, SLOT(sqlRefreshCustomers()));
    connect(mSqlHandler, SIGNAL(sqlCustomersRefreshed(QSqlTableModel*)), mOrderDialog, SLOT(refresh(QSqlTableModel*)));
    connect(mSqlHandler, SIGNAL(sqlCustomersUpdated()), mOrderDialog, SLOT(selectCustomer()));
    connect(mOrderDialog, SIGNAL(signalAddCustomer(bool)), mSqlHandler, SLOT(sqlAddCustomer(bool)));
    connect(mOrderDialog, SIGNAL(signalDelCustomers(QModelIndexList, bool)), mSqlHandler, SLOT(sqlDelCustomers(QModelIndexList, bool)));
    connect(mOrderDialog, SIGNAL(signalErrorMsg(QString)), this, SLOT(sqlMessageError(QString)));
    connect(mOrderDialog, SIGNAL(signalAddOrder(QList<Order*>)), mSqlHandler, SLOT(sqlAddOrder(QList<Order*>)));

    // инициализация инструментов для работы с арендным списком
    connect(mRentalDialog, SIGNAL(signalOpened()), mSqlHandler, SLOT(sqlRefreshProducts()));
    connect(mSqlHandler, SIGNAL(sqlProductsRefreshed(QSqlRelationalTableModel*,QSqlTableModel*)), mRentalDialog, SLOT(refresh(QSqlRelationalTableModel*,QSqlTableModel*)));
    connect(mRentalDialog, SIGNAL(signalErrorMsg(QString)), this, SLOT(sqlMessageError(QString)));
    connect(this, SIGNAL(signalGetOrdersByCustomer(QString)), mSqlHandler, SLOT(sqlOrdersByCustomer(QString)));
    connect(mSqlHandler, SIGNAL(sqlOrdersByCustomerRefreshed(QList<Order*>)), this, SLOT(endOrder(QList<Order*>)));
    connect(this, SIGNAL(signalRemoveOrder(QModelIndexList)), mSqlHandler, SLOT(sqlCloseOrder(QModelIndexList)));

    // режим отсутствия подключения
    interfaceDisconnected();
}

// деструктор
MainWindow::~MainWindow()
{
    delete ui;
    delete mSqlHandler;
    delete mGroupsDialog;
    delete mCustomersDialog;
    delete mProductsDialog;
    delete mRentalDialog;
    delete mOrderDialog;
    delete mCurrentDayTimer;
}

// обработка сообщения об изменении статуса соединения
void MainWindow::sqlConnectingStatus(bool status)
{
    if (status)
    {
        isConnected = true;
        interfaceConnected();
        emit signalRefreshMainWindow(false);
    }
    else if (isConnected)
    {
        isConnected = false;
        interfaceDisconnected();
    }
}

// обработка сообщения об ошибке
void MainWindow::sqlMessageError(QString msg)
{
    QMessageBox::critical(this, tr("Ошибка"), msg);
    if (mSqlHandler->isConnected())
    {
        isConnected = true;
        interfaceConnected();
    }
    else if (isConnected)
    {
        isConnected = false;
        interfaceDisconnected();
    }
}

// перенастройка интерфейса после соединения с сервером
void MainWindow::interfaceConnected()
{
    ui->statusbar->showMessage("Подключено");
    ui->actionConnect->setEnabled(false);
    ui->actionDisconnect->setEnabled(true);
    ui->actionGroups->setEnabled(true);
    ui->actionProducts->setEnabled(true);
    ui->actionCustomers->setEnabled(true);
    ui->buttonRental->setEnabled(true);
    ui->buttonEndOrder->setEnabled(true);
    ui->buttonPrevDay->setEnabled(true);
    ui->buttonNextDay->setEnabled(true);
    ui->customerComboBox->setEnabled(true);
    ui->startDateEdit->setEnabled(true);
    ui->startDateEdit->setDate(QDate::currentDate());
    ui->startDateEdit->setMinimumDate(mRentalCalendar.at(0));
    ui->startDateEdit->setMaximumDate(mRentalCalendar.at(mRentalCalendar.count() - 30));
    emit signalTimerStart(1 * 60 * 1000);
}

// перенастройка интерфейса после отключения от сервера
void MainWindow::interfaceDisconnected()
{
    ui->statusbar->showMessage("Нет подключения");

    ui->startDateEdit->setEnabled(false);

    mGroupsDialog->close();
    mCustomersDialog->close();
    mProductsDialog->close();
    mRentalDialog->close();
    mOrderDialog->close();

    ui->actionConnect->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
    ui->actionGroups->setEnabled(false);
    ui->actionProducts->setEnabled(false);
    ui->actionCustomers->setEnabled(false);
    ui->buttonRental->setEnabled(false);
    ui->buttonEndOrder->setEnabled(false);
    ui->buttonPrevDay->setEnabled(false);
    ui->buttonNextDay->setEnabled(false);

    mCurrentCustomer = "";
    ui->customerComboBox->clear();
    ui->customerComboBox->setEnabled(false);

    ui->ordersTableWidget->clear();
    ui->ordersTableWidget->setRowCount(0);
    ui->ordersTableWidget->setColumnCount(0);
    ui->ordersTableWidget->horizontalHeader()->hide();
    ui->ordersTableWidget->verticalHeader()->hide();

    emit signalTimerStop();
}

// открытие диалогового окна категорий товаров
void MainWindow::openGroupsDialog()
{
    mProductsDialog->close();
    mRentalDialog->close();
    mGroupsDialog->openDialog();
}

// открытие диалогового окна клиентов
void MainWindow::openCustomersDialog()
{
    mOrderDialog->close();
    mCustomersDialog->openDialog();
}

// открытие диалогового окна товаров
void MainWindow::openProductsDailog()
{
    mGroupsDialog->close();
    mRentalDialog->close();
    mProductsDialog->openDialog();
}

// открытие диалогового окна выбора товаров для аренды
void MainWindow::openRentalDialog()
{
    mGroupsDialog->close();
    mProductsDialog->close();
    mRentalDialog->openDialog();
}

// открытие диалогового окна оформления аренды
void MainWindow::openOrderDialog(QList<RentalItem*> list)
{
    mCustomersDialog->close();
    mOrderDialog->openDialog(list);
}

// обновление компонентов основного окна приложения
void MainWindow::refreshMainWindow(QList<Order*> ordersList, QList<QString> customersList, bool fromOrder)
{

    // сохранение текущего клиента перед обновлением
    mCurrentCustomer = ui->customerComboBox->currentText();

    // сохранение текущей даты
    mCurrentDay = QDate::currentDate();

    // сохранение настроек шрифта таблицы перед обновлением
    QFont font = ui->ordersTableWidget->font();
    font.setPointSize(10);
    ui->ordersTableWidget->setFont(font);

    // заполнение таблицы
    ui->ordersTableWidget->clear();
    ui->ordersTableWidget->setRowCount(ordersList.count());
    QStringList header;
    header << "Номер аренды" << "Наименование товара" << "Количество (шт.)" << "Клиент";
    ui->ordersTableWidget->setColumnCount(35);

    for (int i = mStartDate; i <= mEndDate; i++)
    {
        header.append(monthString(mRentalCalendar.at(i).month()) + " "
                      + QString::number(mRentalCalendar.at(i).year()));
    }
    ui->ordersTableWidget->setHorizontalHeaderLabels(header);

    // цикл по всем арендным позициям
    for (int row = 0; row < ordersList.count(); row++)
    {
        QTableWidgetItem *item1 = new QTableWidgetItem();
        item1->setText(QString::number(ordersList.at(row)->getPk()));
        ui->ordersTableWidget->setItem(row, 0, item1);
        QTableWidgetItem *item2 = new QTableWidgetItem();
        item2->setText(ordersList.at(row)->getProductName());
        ui->ordersTableWidget->setItem(row, 1, item2);
        QTableWidgetItem *item3 = new QTableWidgetItem();
        item3->setText(QString::number(ordersList.at(row)->getCount()));
        ui->ordersTableWidget->setItem(row, 2, item3);
        QTableWidgetItem *item4 = new QTableWidgetItem();
        item4->setText(ordersList.at(row)->getCustomerName());
        ui->ordersTableWidget->setItem(row, 3, item4);

        // цикл по дням календаря
        for (int i = mStartDate, j = 4; j < 35; i++, j++)
        {
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setText(QString::number(mRentalCalendar.at(i).day()));

            // день возврата
            QDate ret(
                ordersList.at(row)->getEndDate().year(),
                ordersList.at(row)->getEndDate().month(),
                ordersList.at(row)->getEndDate().day() + 1
                );

            // закрашивание дней аренды зеленым
            if (mRentalCalendar.at(i) >= ordersList.at(row)->getStartDate()
                && mRentalCalendar.at(i) <= ordersList.at(row)->getEndDate())
            {
                item->setBackground(QBrush(Qt::darkGreen));
            }

            // закрашивание дней просрочки красным
            else if (mRentalCalendar.at(i) > ordersList.at(row)->getEndDate()
                     && mRentalCalendar.at(i) <= QDate::currentDate())
            {
                item->setBackground(QBrush(Qt::red));
            }

            // пометка текущего дня
            if (QDate::currentDate() == mRentalCalendar.at(i))
            {
                item->setText(QString::number(mRentalCalendar.at(i).day()) + "  *");
                if (QDate::currentDate() == ret)
                {
                    item->setBackground(QBrush(Qt::yellow));
                }
                else if (QDate::currentDate() > ordersList.at(row)->getEndDate())
                {
                    item->setBackground(QBrush(Qt::white));
                }
            }

            ui->ordersTableWidget->setItem(row, j, item);
        }
    }

    // настройка верхушки таблицы
    ui->ordersTableWidget->resizeColumnsToContents();
    ui->ordersTableWidget->setStyleSheet("QHeaderView::section { background-color:lightGray }");
    ui->ordersTableWidget->horizontalHeader()->show();
    ui->ordersTableWidget->horizontalHeader()->setFont(font);

    // перенастройка comboBox
    ui->customerComboBox->clear();
    if (!customersList.isEmpty())
    {
        ui->customerComboBox->addItems(customersList);
    }

    // восстановление селектора comboBox
    if (mCurrentCustomer == "" || !customersList.contains(mCurrentCustomer))
        ui->customerComboBox->setCurrentText(tr("- ВСЕ КЛИЕНТЫ -"));
    else
        ui->customerComboBox->setCurrentText(mCurrentCustomer);

    // сокрытие номеров арендных позиций
    ui->ordersTableWidget->hideColumn(0);

    // закрытие окон, связанных с товарами и аренедой
    if (!fromOrder)
    {
        mProductsDialog->close();
        mRentalDialog->close();
        mOrderDialog->close();
    }

}

// контекстное меню удаления строки
void MainWindow::slotCustomMenuRequested(QPoint pos)
{
    QMenu * menu = new QMenu(this);                                                                     // объект контекстного меню
    QAction * deleteDevice = new QAction(tr("Удалить"), this);                                          // действие для контекстного меню
    connect(deleteDevice, SIGNAL(triggered()), this, SLOT(removeRow()));                                // обработчик удаления записи
    menu->addAction(deleteDevice);                                                                      // установка действия
    menu->popup(ui->ordersTableWidget->viewport()->mapToGlobal(pos));                                   // вызов контекстного меню
}

// перелистывание календаря назад
void MainWindow::selectPrevDay()
{
    if (mStartDate != 0 && ui->ordersTableWidget->rowCount() != 0)
    {
        mStartDate--;
        mEndDate--;
        ui->startDateEdit->setDate(mRentalCalendar.at(mStartDate));
        emit signalRefreshMainWindow(true);
    }
}

// перелистывание календаря вперед
void MainWindow::selectNextDay()
{
    if (mEndDate != (mRentalCalendar.count() - 1)
        && ui->ordersTableWidget->rowCount() != 0)
    {
        mStartDate++;
        mEndDate++;
        ui->startDateEdit->setDate(mRentalCalendar.at(mStartDate));
        emit signalRefreshMainWindow(true);
    }
}

// удаление арендных позиций
void MainWindow::removeRow()
{
    QModelIndexList selectedIndexes = ui->ordersTableWidget->selectionModel()->selectedRows(0);
    if (selectedIndexes.count() == 0)
    {
        sqlMessageError(tr("Не выбраны арендные позиции для удаления"));
    }
    else
    {
        if (QMessageBox::warning(nullptr, tr("Предупреждение"),
                                 tr("Вы уверены, что хотите удалить выбранные арендные позиции?"),
                                 QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
        {
            emit signalRemoveOrder(selectedIndexes);
        }
    }
}

// запрос арендных позиций указанного клиента
void MainWindow::getOrdersByCustomer()
{

    // проверка выбора клиента
    if (ui->customerComboBox->currentText() == tr("- ВСЕ КЛИЕНТЫ -"))
    {
        sqlMessageError(tr("Не выбран пользователь для завершения аренды"));
    }

    // запрос
    else
    {
        emit signalGetOrdersByCustomer(ui->customerComboBox->currentText());
    }
}

// завершение аренды указанного клиента
void MainWindow::endOrder(QList<Order*> ordersList)
{

    QString msg = "";
    QString customer;
    double delay = 0;
    double early = 0;

    // цикл по всем арендным позициям
    for (Order *order : ordersList)
    {

        // имя клиента
        customer = order->getCustomerName();

        // наименование и количество товара
        msg += order->getProductName();
        msg += " ";
        msg += QString::number(order->getCount());

        // просрочка
        if (order->getEndDate().daysTo(QDate::currentDate()) > 1)
        {

            // определение просрочки по дням
            QString end = "";
            int days = order->getEndDate().daysTo(QDate::currentDate()) - 1;

            // определение общей стоимости просрочки
            double cost = order->getCost() * days;
            delay += cost;

            // формирование сообщения
            if (days == 1)
            {
                end = tr(" день");
            }
            else if (days > 1 && days < 5)
            {
                end = tr(" дня");
            }
            else
            {
                end = tr(" дней");
            }
            msg += tr(" - просрочка ") +
                   QString::number(days) +
                   end + tr(" на сумму ") +
                   QString("%1").arg(cost, 2) +
                   tr(" р.");
        }

        // просрочки нет
        else
        {

            // в срок
            if (order->getEndDate().daysTo(QDate::currentDate()) == 1)
            {
                msg += tr(" - в срок");
            }

            // отмена
            else if (QDate::currentDate().daysTo(order->getStartDate()) >= 0)
            {
                double cost = 0;
                cost = order->getCost3() +
                       (order->getStartDate().daysTo(order->getEndDate()) - 2) *
                           order->getCost();
                msg += tr(" - отмена, требуется вернуть ") +
                       QString("%1").arg(cost, 2) + tr(" р.");
            }


            // досрочно
            else
            {

                // определение числа дней до конца срока аренды
                QString end = "";
                int days = QDate::currentDate().daysTo(order->getEndDate()) + 1;
                if (days == 1)
                {
                    end = tr(" день");
                }
                else if (days > 1 && days < 5)
                {
                    end = tr(" дня");
                }
                else
                {
                    end = tr(" дней");
                }

                // определение суммы для возврата
                double cost = 0;

                // возврат после истечения первых трех дней
                if (order->getStartDate().daysTo(QDate::currentDate()) > 2)
                {
                    cost = days * order->getCost();
                }

                // возврат до истечения первых трех дней
                else
                {
                    cost = (order->getStartDate().daysTo(order->getEndDate()) - 2) *
                           order->getCost();
                }

                // суммирование возврата
                early += cost;

                msg += tr(" - раньше срока на ") +
                       QString::number(days) +
                       end + tr(", требуется вернуть ") +
                       QString("%1").arg(cost, 2) + tr(" р.");
            }
        }
        msg += '\n';
    }
    msg += "\n";

    // просрочка превышает возврат
    if (delay > early)
    {
        msg += tr("Итоговая сумма просрочки составляет ");
        msg += QString("%1").arg(delay - early, 2);
        msg += tr(" р.");
        msg += '\n';
        msg += '\n';
    }

    // возврат превышает просрочку
    else if (early > delay)
    {
        msg += tr("Итоговая сумма возврата составляет ");
        msg += QString("%1").arg(early - delay, 2);
        msg += tr(" р.");
        msg += '\n';
        msg += '\n';
    }

    msg += tr("Завершить аренду?");

    // выбор требуемых арендных позиций и их завершение - через подтверждение
    if (QMessageBox::information(nullptr, tr("Завершение аренды"), msg,
                                 QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
    {

        // установка режима выбора нескольких строк
        ui->ordersTableWidget->setSelectionMode(QAbstractItemView::MultiSelection);

        // очистка всех выделений
        ui->ordersTableWidget->clearSelection();

        // выделение необходимых арендных позиций для закрытия (по клиенту)
        for (int i = 0; i < ui->ordersTableWidget->model()->rowCount(); i++)
        {
            if (ui->ordersTableWidget->item(i, 3)->data(Qt::EditRole).toString() == ui->customerComboBox->currentText())
            {
                ui->ordersTableWidget->selectRow(i);
            }
        }

        // удаление выделенных арендных позиций
        ui->ordersTableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        emit signalRemoveOrder(ui->ordersTableWidget->selectionModel()->selectedRows(0));
    }
}

// заполнение массива дат
void MainWindow::initDatesOfYear()
{
    int year;
    QDate currentDate = QDate::currentDate();

    // настройка календаря - текущий год
    year = currentDate.year();
    for (int i = 1; i <= 12; i++)
    {
        QDate month(year, i, 1);
        for (int j = 1; j <= month.daysInMonth(); ++j)
        {
            QDate dt(year, i, j);
            mRentalCalendar.append(dt);
        }
    }

    // настройка календаря - следующий год
    year = currentDate.year() + 1;
    for (int i = 1; i <= 12; i++)
    {
        QDate month(year, i, 1);
        for (int j = 1; j <= month.daysInMonth(); ++j)
        {
            QDate dt(year, i, j);
            mRentalCalendar.append(dt);
        }
    }
}

// получение названия месяца по его номеру
QString MainWindow::monthString(int month)
{
    switch (month) {
    case 1: return "Янв"; break;
    case 2: return "Фев"; break;
    case 3: return "Март"; break;
    case 4: return "Апр"; break;
    case 5: return "Май"; break;
    case 6: return "Июнь"; break;
    case 7: return "Июль"; break;
    case 8: return "Авг"; break;
    case 9: return "Сен"; break;
    case 10: return "Окт"; break;
    case 11: return "Нояб"; break;
    default: return "Дек";
    }
}

// выбор пользователя для сортировки арендных записей
void MainWindow::currentCustomerChanged(QString)
{
    if (ui->ordersTableWidget->model() != nullptr)
    {
        for (int i = 0; i < ui->ordersTableWidget->model()->rowCount(); i++)
        {
            if (ui->ordersTableWidget->item(i, 3)->data(Qt::EditRole).toString() != ui->customerComboBox->currentText()
                && ui->customerComboBox->currentText() != tr("- ВСЕ КЛИЕНТЫ -"))
            {
                ui->ordersTableWidget->hideRow(i);
            }
            else
            {
                ui->ordersTableWidget->showRow(i);
            }
        }
    }
}

// выбор стартовой даты для календаря
void MainWindow::currentDateChanged(QDate date)
{
    for (QDate& dt : mRentalCalendar)
    {
        if (dt.month() == date.month()
            && dt.year() == date.year()
            && dt.day() == date.day())
        {
            mStartDate = mRentalCalendar.indexOf(dt);
            if ((mStartDate + 30) <= (mRentalCalendar.size() - 1))
            {
                mEndDate = mStartDate + 30;
            }
            else
            {
                mEndDate = mRentalCalendar.size() - 1;
            }
        }
    }
    emit signalRefreshMainWindow(true);
}

// изменение даты текущего дня в основной таблице
void MainWindow::checkCurrentDay() {

    if (mCurrentDay != QDate::currentDate())
    {
        emit signalRefreshMainWindow(true);
    }
}

// завершение работы приложения
void MainWindow::applicationClose()
{
    if (QMessageBox::warning(this, tr("Выход"),
                             tr("Вы уверены, что хотите завершить работу приложения?"),
                             QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
    {
        qApp->quit();
    }
}
