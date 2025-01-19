/********************************************************************************
** Form generated from reading UI file 'groupsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPSDIALOG_H
#define UI_GROUPSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GroupsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *buttonAdd;
    QPushButton *buttonDel;

    void setupUi(QDialog *GroupsDialog)
    {
        if (GroupsDialog->objectName().isEmpty())
            GroupsDialog->setObjectName(QString::fromUtf8("GroupsDialog"));
        GroupsDialog->resize(300, 588);
        GroupsDialog->setMinimumSize(QSize(300, 0));
        GroupsDialog->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(10);
        GroupsDialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        GroupsDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(GroupsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(GroupsDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setFont(font);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        frame = new QFrame(GroupsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        buttonAdd = new QPushButton(frame);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        buttonAdd->setFont(font1);

        verticalLayout_2->addWidget(buttonAdd);

        buttonDel = new QPushButton(frame);
        buttonDel->setObjectName(QString::fromUtf8("buttonDel"));
        buttonDel->setFont(font1);

        verticalLayout_2->addWidget(buttonDel);


        verticalLayout->addWidget(frame);


        retranslateUi(GroupsDialog);

        QMetaObject::connectSlotsByName(GroupsDialog);
    } // setupUi

    void retranslateUi(QDialog *GroupsDialog)
    {
        GroupsDialog->setWindowTitle(QApplication::translate("GroupsDialog", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\320\270 \321\202\320\276\320\262\320\260\321\200\320\276\320\262", nullptr));
        buttonAdd->setText(QApplication::translate("GroupsDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        buttonDel->setText(QApplication::translate("GroupsDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupsDialog: public Ui_GroupsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPSDIALOG_H
