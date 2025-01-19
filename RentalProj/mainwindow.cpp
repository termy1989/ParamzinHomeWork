#include "mainwindow.h"
#include "./ui_mainwindow.h"

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
    /*groupsDialog = new GroupsDialog(this);
    customersDialog = new CustomersDialog(this);
    productsDialog = new ProductsDialog(this);
    rentalDialog = new RentalDialog(this);
    orderDialog = new OrderDialog(this);

    // инициализация таймера
    currentDayTimer = new QTimer(this);
    connect(this, SIGNAL(signalTimerStart(int)), currentDayTimer, SLOT(start(int)));
    connect(this, SIGNAL(signalTimerStop()), currentDayTimer, SLOT(stop()));
    connect(currentDayTimer, SIGNAL(timeout()), this, SLOT(checkCurrentDay()));

    // инициализация меню
    connect(ui->actionConnect, SIGNAL(triggered()), sqlHandler, SLOT(sqlConnect()));
    connect(ui->actionDisconnect, SIGNAL(triggered()), sqlHandler, SLOT(sqlDisconnect()));
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
    connect(this, SIGNAL(signalRefreshMainWindow(bool)), sqlHandler, SLOT(sqlRefreshMainWindow(bool)));
    connect(sqlHandler, SIGNAL(sqlMainWindowRefreshed(QList<Order*>,QList<QString>,bool)), this, SLOT(refreshMainWindow(QList<Order*>,QList<QString>,bool)));

    // инициализация инструментов для работы с группами товаров
    connect(groupsDialog, SIGNAL(signalOpened()), sqlHandler, SLOT(sqlRefreshGroups()));
    connect(sqlHandler, SIGNAL(sqlGroupsRefreshed(QSqlTableModel*)), groupsDialog, SLOT(refresh(QSqlTableModel*)));
    connect(groupsDialog, SIGNAL(signalAddGroup()), sqlHandler, SLOT(sqlAddGroup()));
    connect(groupsDialog, SIGNAL(signalDelGroups(QModelIndexList)), sqlHandler, SLOT(sqlDelGroups(QModelIndexList)));

    // инициализация инструментов для работы с клиентами
    connect(customersDialog, SIGNAL(signalOpened()), sqlHandler, SLOT(sqlRefreshCustomers()));
    connect(sqlHandler, SIGNAL(sqlCustomersRefreshed(QSqlTableModel*)), customersDialog, SLOT(refresh(QSqlTableModel*)));
    connect(customersDialog, SIGNAL(signalAddCustomer(bool)), sqlHandler, SLOT(sqlAddCustomer(bool)));
    connect(customersDialog, SIGNAL(signalDelCustomers(QModelIndexList, bool)), sqlHandler, SLOT(sqlDelCustomers(QModelIndexList, bool)));

    //инициализация инструментов для работы с товарами
    connect(productsDialog, SIGNAL(signalOpened()), sqlHandler, SLOT(sqlRefreshProducts()));
    connect(sqlHandler, SIGNAL(sqlProductsRefreshed(QSqlRelationalTableModel*,QSqlTableModel*)), productsDialog, SLOT(refresh(QSqlRelationalTableModel*,QSqlTableModel*)));
    connect(productsDialog, SIGNAL(signalAddProduct(QString)), sqlHandler, SLOT(sqlAddProduct(QString)));
    connect(productsDialog, SIGNAL(signalDelProducts(QModelIndexList)), sqlHandler, SLOT(sqlDelProducts(QModelIndexList)));

    // инициализация инструментов для оформления аренды
    connect(rentalDialog, SIGNAL(signalOrder(QList<RentalItem*>)), this, SLOT(openOrderDialog(QList<RentalItem*>)));
    connect(orderDialog, SIGNAL(signalOpened()), sqlHandler, SLOT(sqlRefreshCustomers()));
    connect(sqlHandler, SIGNAL(sqlCustomersRefreshed(QSqlTableModel*)), orderDialog, SLOT(refresh(QSqlTableModel*)));
    connect(sqlHandler, SIGNAL(sqlCustomersUpdated()), orderDialog, SLOT(selectCustomer()));
    connect(orderDialog, SIGNAL(signalAddCustomer(bool)), sqlHandler, SLOT(sqlAddCustomer(bool)));
    connect(orderDialog, SIGNAL(signalDelCustomers(QModelIndexList, bool)), sqlHandler, SLOT(sqlDelCustomers(QModelIndexList, bool)));
    connect(orderDialog, SIGNAL(signalErrorMsg(QString)), this, SLOT(sqlMessageError(QString)));
    connect(orderDialog, SIGNAL(signalAddOrder(QList<Order*>)), sqlHandler, SLOT(sqlAddOrder(QList<Order*>)));

    // инициализация инструментов для работы с арендным списком
    connect(rentalDialog, SIGNAL(signalOpened()), sqlHandler, SLOT(sqlRefreshProducts()));
    connect(sqlHandler, SIGNAL(sqlProductsRefreshed(QSqlRelationalTableModel*,QSqlTableModel*)), rentalDialog, SLOT(refresh(QSqlRelationalTableModel*,QSqlTableModel*)));
    connect(rentalDialog, SIGNAL(signalErrorMsg(QString)), this, SLOT(sqlMessageError(QString)));
    connect(this, SIGNAL(signalGetOrdersByCustomer(QString)), sqlHandler, SLOT(sqlOrdersByCustomer(QString)));
    connect(sqlHandler, SIGNAL(sqlOrdersByCustomerRefreshed(QList<Order*>)), this, SLOT(endOrder(QList<Order*>)));
    connect(this, SIGNAL(signalRemoveOrder(QModelIndexList)), sqlHandler, SLOT(sqlCloseOrder(QModelIndexList)));

    // режим отсутствия подключения
    interfaceDisconnected();*/
}

// деструктор
MainWindow::~MainWindow()
{
    delete ui;
    delete mSqlHandler;
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
