#ifndef SQLHANDLER_H
#define SQLHANDLER_H

#include <QObject>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QSettings>
#include <QMessageBox>
#include "accessory/rentalitem.h"
#include "accessory/order.h"

// класс обработчика базы данных
class SqlHandler : public QObject
{
    Q_OBJECT

public:
    explicit SqlHandler(QObject *parent = nullptr);                 // конструктор
    ~SqlHandler();                                                  // деструктор
    bool isConnected();                                             // проверка соединения

signals:
    void signalConnectStatus(bool status);                          // сигнал об изменении статуса соединения
    void signalErrorMsg(QString message);                           // сигнал об ошибке

    void sqlGroupsRefreshed(QSqlTableModel *model);                 // сигнал - отправка модели категорий товара
    void sqlCustomersRefreshed(QSqlTableModel *model);              // сигнал - отправка модели клиентов
    void sqlCustomersUpdated();                                     // сигнал - список клиентов изменился
    void sqlProductsRefreshed(QSqlRelationalTableModel *model,
                              QSqlTableModel *model2);              // сигнал - отправка моделей товаров и их категорий
    void sqlMainWindowRefreshed(QList<Order*>, QList<QString>,
                                bool);                              // сигнал - отправка арендных позиций и общего списка клиентов
    void sqlOrdersByCustomerRefreshed(QList<Order*>);               // сигнал - отправка арендных позиций указанного клиента

private slots:
    void sqlConnect();                                              // соединение с сервером
    void sqlDisconnect();                                           // отключение от сервера

    void sqlRefreshGroups();                                        // обновление таблицы с категориями товаров
    void sqlAddGroup();                                             // добавление новой категории товаров
    void sqlUpdateGroups();                                         // применение изменений к таблице категорий товаров
    void sqlDelGroups(QModelIndexList removeRows);                  // удаление указанных категорий товаров

    void sqlRefreshCustomers();                                     // обновление таблицы клиентов
    void sqlAddCustomer(bool fromOrder);                            // добавление нового клиента
    void sqlUpdateCustomers();                                      // применение изменений к таблице клиентов
    void sqlDelCustomers(QModelIndexList removeRows,
                         bool fromOrder);                           // удаление указанных клиентов

    void sqlRefreshProducts();                                      // обновление таблицы товаров
    void sqlAddProduct(QString group);                              // добавление товара
    void sqlUpdateProducts();                                       // применение изменений к таблице товаров
    void sqlDelProducts(QModelIndexList removeRows);                // удаление указанных товаров

    void sqlRefreshMainWindow(bool);                                // обновление таблицы и ComboBox главного окна
    void sqlOrdersByCustomer(QString customer);                     // обновление арендных позиций указанного клиента
    void sqlAddOrder(QList<Order*> orderList);                      // добавление арендной позиции
    void sqlCloseOrder(QModelIndexList removeRows);                 // завершение выбранных арендных позиций
    bool sqlIncrementProductsCount(QString name, int count);        // увеличение количества товара
    bool sqlDecrementProductsCount(QString name, int count);        // уменьшение количества товара

private:
    QSqlDatabase db;                                                // база данных
    QSqlTableModel *sqlModelGroups = nullptr;                       // модель категорий товаров
    QSqlTableModel *sqlModelCustomers = nullptr;                    // модель клиентов
    QSqlRelationalTableModel *sqlModelProducts = nullptr;           // модель товаров
    QString db_username, db_password,                               // логин и пароль доступа
            db_driver, db_name,                                     // драйвер базы и имя базы
            db_table, db_host;                                      // имя таблицы и адрес сервера
};

#endif // SQLHANDLER_H
