#ifndef CUSTOMERSDIALOG_H
#define CUSTOMERSDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class CustomersDialog;
}

// класс диалогового окна для работы с клиентами
class CustomersDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CustomersDialog(QWidget *parent = nullptr);
    ~CustomersDialog();
    void openDialog();                                          // открытие диалогового окна

signals:
    void signalOpened();                                        // сигнал об открытии диалогового окна
    void signalAddCustomer(bool fromOrder);                     // сигнал о добавлении элемента
    void signalDelCustomers(QModelIndexList, bool fromOrder);   // сигнал об удалении выбранных элементов

private slots:
    void refresh(QSqlTableModel *model);                        // обновление таблицы
    void addCustomer();                                         // добавление элемента
    void delCustomers();                                        // удаление элементов

private:
    Ui::CustomersDialog *ui;
};

#endif // CUSTOMERSDIALOG_H
