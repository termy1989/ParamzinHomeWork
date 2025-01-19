#ifndef GROUPSDIALOG_H
#define GROUPSDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class GroupsDialog;
}

// класс диалогового окна для работы с категориями товаров
class GroupsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GroupsDialog(QWidget *parent = nullptr);
    ~GroupsDialog();
    void openDialog();                                          // открытие диалогового окна

signals:
    void signalOpened();                                        // сигнал об открытии диалогового окна
    void signalAddGroup();                                      // сигнал о добавлении элемента
    void signalDelGroups(QModelIndexList);                      // сигнал об удалении выбранных элементов

private slots:
    void refresh(QSqlTableModel *model);                        // обновление таблицы
    void addGroup();                                            // добавление элемента
    void delGroups();                                           // удаление элементов

private:
    Ui::GroupsDialog *ui;
};

#endif // GROUPSDIALOG_H
