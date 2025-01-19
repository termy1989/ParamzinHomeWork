#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sqlhandler.h"
#include "groupsdialog.h"
#include "productsdialog.h"
#include "customersdialog.h"
#include "rentaldialog.h"
#include "orderdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// класс основного окна приложения
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void signalRefreshMainWindow(bool);                         // сигнал о заполнении таблицы с арендой
    void signalGetOrdersByCustomer(QString name);               // сигнал о запросе всех арендных позиций выбранного клиента
    void signalRemoveOrder(QModelIndexList);                    // сигнал об удалении арендной позиции
    void signalTimerStart(int);                                 // запуск таймера проверки текущего дня
    void signalTimerStop();                                     // остановка таймера проверки текущего дня

private slots:
    void sqlConnectingStatus(bool status);                      // сообщение об изменении статуса соединения с сервером
    void sqlMessageError(QString msg);                          // сообщение об ошибке

    void interfaceConnected();                                  // перенастройка интерфейса после соединения с сервером
    void interfaceDisconnected();                               // перенастройка интерфейса после отключения от сервера

    void openGroupsDialog();                                    // открытие диалогового окна категорий товаров
    void openCustomersDialog();                                 // открытие диалогового окна клиентов
    void openProductsDailog();                                  // открытие диалогового окна товаров
    void openRentalDialog();                                    // открытие диалогового окна выбора товаров для аренды
    void openOrderDialog(QList<RentalItem*> list);              // открытие диалогового окна оформления аренды
    void refreshMainWindow(QList<Order*> ordersList,
                           QList<QString> customersList,
                           bool fromOrder);                     // обновление таблицы арендных позиций
    void slotCustomMenuRequested(QPoint pos);                   // контекстное меню для таблицы
    void selectPrevDay();                                       // перелистывание календаря назад
    void selectNextDay();                                       // перелистывание календаря вперед
    void getOrdersByCustomer();                                 // запрос арендных позиций выбранного клиента
    void endOrder(QList<Order*> ordersList);                    // завершение аренды выбранного клиента
    void removeRow();                                           // удаление арендной позиции
    void initDatesOfYear();                                     // формирование массива дат для календаря
    QString monthString(int month);                             // название месяца по его номеру

    void currentCustomerChanged(QString name);                  // выбор пользователя для сортировки арендных записей
    void currentDateChanged(QDate dt);                          // выбор стартовой даты для календаря
    void checkCurrentDay();                                     // изменение даты текущего дня в основной таблице

    void applicationClose();                                    // завершение работы приложения

private:
    Ui::MainWindow *ui = nullptr;                               // интерфейс
    SqlHandler *sqlHandler = nullptr;                           // обработчик базы данных
    GroupsDialog *groupsDialog = nullptr;                       // диалоговое окно для работы с категориями товаров
    ProductsDialog *productsDialog = nullptr;                   // диалоговое окно для работы с товарами
    CustomersDialog *customersDialog = nullptr;                 // диалоговое окно для работы с клиентами
    RentalDialog *rentalDialog = nullptr;                       // диалоговое окно для выбора товаров
    OrderDialog *orderDialog = nullptr;                         // диалоговое окно для оформления аренды
    QTimer *currentDayTimer = nullptr;                          // таймер проверки текущего дня
    bool isConnected = false;                                   // статус подключения
    int startDate, endDate;                                     // начало и конец календаря
    QList<QDate> rentalCalendar;                                // календарь
    QDate currentDay;                                           // сегодняшнее число
    QString currentCustomer = "";                               // пользователь для сортировки арендных записей
};
#endif // MAINWINDOW_H
