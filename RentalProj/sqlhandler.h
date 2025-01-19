#ifndef SQLHANDLER_H
#define SQLHANDLER_H

#include <QObject>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QSettings>
#include <QMessageBox>
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
    void signalConnectStatus(bool);                                 // сигнал об изменении статуса соединения
    void signalErrorMsg(QString);                                   // сигнал об ошибке

    void sqlGroupsRefreshed(QSqlTableModel*);                       // сигнал - отправка модели категорий товара
    void sqlCustomersRefreshed(QSqlTableModel*);                    // сигнал - отправка модели клиентов
    void sqlCustomersUpdated();                                     // сигнал - список клиентов изменился
    void sqlProductsRefreshed(QSqlRelationalTableModel*,
                                        QSqlTableModel*);           // сигнал - отправка моделей товаров и их категорий
    void sqlMainWindowRefreshed(QList<Order*>,
                                QList<QString>,
                                bool);                              // сигнал - отправка арендных позиций и общего списка клиентов
    void sqlOrdersByCustomerRefreshed(QList<Order*>);               // сигнал - отправка арендных позиций указанного клиента

private slots:
    void sqlConnect();                                              // соединение с сервером
    void sqlDisconnect();                                           // отключение от сервера

    void sqlRefreshGroups();                                        // обновление таблицы с категориями товаров
    void sqlAddGroup();                                             // добавление новой категории товаров
    void sqlUpdateGroups();                                         // применение изменений к таблице категорий товаров
    void sqlDelGroups(QModelIndexList);                             // удаление указанных категорий товаров

    void sqlRefreshCustomers();                                     // обновление таблицы клиентов
    void sqlAddCustomer(bool);                                      // добавление нового клиента
    void sqlUpdateCustomers();                                      // применение изменений к таблице клиентов
    void sqlDelCustomers(QModelIndexList,
                         bool);                                     // удаление указанных клиентов

    void sqlRefreshProducts();                                      // обновление таблицы товаров
    void sqlAddProduct(QString);                                    // добавление товара
    void sqlUpdateProducts();                                       // применение изменений к таблице товаров
    void sqlDelProducts(QModelIndexList);                           // удаление указанных товаров

    void sqlRefreshMainWindow(bool);                                // обновление таблицы и ComboBox главного окна
    void sqlOrdersByCustomer(QString);                              // обновление арендных позиций указанного клиента
    void sqlAddOrder(QList<Order*>);                                // добавление арендной позиции
    void sqlCloseOrder(QModelIndexList);                            // завершение выбранных арендных позиций
    bool sqlIncrementProductsCount(QString, int);                   // увеличение количества товара
    bool sqlDecrementProductsCount(QString, int);                   // уменьшение количества товара

private:
    QSqlDatabase mDB;                                               // база данных
    QSqlTableModel *mSqlModelGroups = nullptr;                      // модель категорий товаров
    QSqlTableModel *mSqlModelCustomers = nullptr;                   // модель клиентов
    QSqlRelationalTableModel *mSqlModelProducts = nullptr;          // модель товаров
};

#endif // SQLHANDLER_H
