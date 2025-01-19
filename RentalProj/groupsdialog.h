#ifndef GROUPSDIALOG_H
#define GROUPSDIALOG_H

#include <QDialog>

namespace Ui {
class GroupsDialog;
}

class GroupsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GroupsDialog(QWidget *parent = nullptr);
    ~GroupsDialog();

private:
    Ui::GroupsDialog *ui;
};

#endif // GROUPSDIALOG_H
