#ifndef RENTALDIALOG_H
#define RENTALDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QTableWidget>
#include <QMessageBox>
#include <QPair>
#include "accessory/rentalitem.h"

namespace Ui {
class RentalDialog;
}

// класс диалогового окна выбора товаров для выдачи в аренду
class RentalDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RentalDialog(QWidget *parent = nullptr);
    ~RentalDialog();
    void openDialog();                                              // открытие диалогового окна

signals:
    void signalOpened();                                            // сигнал об открытии диалогового окна
    void signalOrder(QList<RentalItem*>);                           // сигнал к оформлению аренды
    void signalErrorMsg(QString msg);                               // сигнал об ошибке

private slots:
    void refresh(QSqlRelationalTableModel *tableModel,
                 QSqlTableModel *comboBoxModel);                    // обновление таблицы товаров на складе
    void addProducts();                                             // добавление товаров к аренде
    void delProducts();                                             // удаление товаров из аренды
    void addSelected(QTableWidget *srcTable,
                     QTableWidget *dstTable);                       // перемещение выбранных записей
    void delSelected(QTableWidget *table);                          // удаление выбранных записей
    void calculateCost();                                           // вычисление общей стоимости аренды
    void currentGroupChanged(QString currentGroup);                 // изменение текущей группы товаров
    void openOrder();                                               // оформление аренды

private:
    Ui::RentalDialog *ui;
    QSqlRelationalTableModel *storeTableModel;                      // модель таблицы товаров на складе
    QSqlTableModel *rentalTableModel;                               // модель категорий товаров
    QString currentGroup = "";                                      // выбранная группа товаров
    QList<QPair<QString, int>> productCount;                        // пара "товар-количество"
};

#endif // RENTALDIALOG_H
