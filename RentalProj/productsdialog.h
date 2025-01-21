#ifndef PRODUCTSDIALOG_H
#define PRODUCTSDIALOG_H

#include <QDialog>
#include <QtSql>
#include "accessory/comboboxdelegate.h"

namespace Ui {
class ProductsDialog;
}

// класс диалогового окна для работы с товарами
class ProductsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProductsDialog(QWidget *parent = nullptr);
    ~ProductsDialog();
    void openDialog();                                              // открытие диалогового окна

signals:
    void signalOpened();                                            // сигнал об открытии диалогового окна
    void signalAddProduct(QString currentGroup);                    // сигнал о добавлении элемента
    void signalDelProducts(QModelIndexList);                        // сигнал об удалении выбранных элементов

private slots:
    void refresh(QSqlRelationalTableModel *tableModel,
                 QSqlTableModel *comboBoxModel);                    // обновление таблицы
    void addProduct();                                              // добавление элемента
    void delProducts();                                             // удаление элементов
    void currentGroupChanged(QString currentGroup);                 // изменение текущей группы товаров

private:
    Ui::ProductsDialog *ui;
    ComboBoxDelegate *comboBoxDelegate;                             // делегат comboBox для таблицы
    QString currentGroup = "";
};

#endif // PRODUCTSDIALOG_H
