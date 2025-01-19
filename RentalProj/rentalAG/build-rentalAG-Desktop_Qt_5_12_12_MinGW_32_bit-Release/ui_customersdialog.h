/********************************************************************************
** Form generated from reading UI file 'customersdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERSDIALOG_H
#define UI_CUSTOMERSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CustomersDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonAdd;
    QPushButton *buttonDel;

    void setupUi(QDialog *CustomersDialog)
    {
        if (CustomersDialog->objectName().isEmpty())
            CustomersDialog->setObjectName(QString::fromUtf8("CustomersDialog"));
        CustomersDialog->resize(1035, 475);
        QFont font;
        font.setPointSize(10);
        CustomersDialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        CustomersDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CustomersDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(CustomersDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setFont(font);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        frame = new QFrame(CustomersDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonAdd = new QPushButton(frame);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonAdd->sizePolicy().hasHeightForWidth());
        buttonAdd->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        buttonAdd->setFont(font1);

        horizontalLayout->addWidget(buttonAdd);

        buttonDel = new QPushButton(frame);
        buttonDel->setObjectName(QString::fromUtf8("buttonDel"));
        sizePolicy.setHeightForWidth(buttonDel->sizePolicy().hasHeightForWidth());
        buttonDel->setSizePolicy(sizePolicy);
        buttonDel->setFont(font1);

        horizontalLayout->addWidget(buttonDel);


        horizontalLayout_2->addWidget(frame);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(CustomersDialog);

        QMetaObject::connectSlotsByName(CustomersDialog);
    } // setupUi

    void retranslateUi(QDialog *CustomersDialog)
    {
        CustomersDialog->setWindowTitle(QApplication::translate("CustomersDialog", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        buttonAdd->setText(QApplication::translate("CustomersDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        buttonDel->setText(QApplication::translate("CustomersDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomersDialog: public Ui_CustomersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSDIALOG_H
