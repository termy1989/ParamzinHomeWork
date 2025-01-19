#ifndef ORDERDIALOG_H
#define ORDERDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QDateEdit>
#include "accessory/rentalitem.h"
#include "accessory/order.h"

namespace Ui {
class OrderDialog;
}

// класс диалогового окна оформления аренды
class OrderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OrderDialog(QWidget *parent = nullptr);
    ~OrderDialog();
    void openDialog(QList<RentalItem*> list);                   // открытие диалогового окна

signals:
    void signalOpened();                                        // сигнал об открытии диалогового окна
    void signalAddCustomer(bool fromOrder);                     // сигнал о добавлении элемента
    void signalDelCustomers(QModelIndexList, bool);             // сигнал об удалении выбранных элементов
    void signalErrorMsg(QString msg);                           // сигнал об ошибке
    void signalAddOrder(QList<Order*> order);                   // сигнал о создании арендной записи

private slots:
    void refresh(QSqlTableModel *model);                        // обновление списка клиентов
    void addCustomer();                                         // добавление клиента
    void delCustomers();                                        // удаление клиента
    void selectCustomer();                                      // выбор клиента
    void createOrder();                                         // создание арендной записи

private:
    Ui::OrderDialog *ui;
    QList<RentalItem*> rentalItemList;                          // список товаров для аренды
};

#endif // ORDERDIALOG_H
