#include "groupsdialog.h"
#include "ui_groupsdialog.h"

GroupsDialog::GroupsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GroupsDialog)
{
    ui->setupUi(this);
}

GroupsDialog::~GroupsDialog()
{
    delete ui;
}
