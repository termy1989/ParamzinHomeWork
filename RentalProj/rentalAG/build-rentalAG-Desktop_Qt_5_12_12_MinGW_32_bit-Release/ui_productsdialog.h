/********************************************************************************
** Form generated from reading UI file 'productsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTSDIALOG_H
#define UI_PRODUCTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProductsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonAdd;
    QPushButton *buttonDel;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *labelGroup;
    QComboBox *comboBoxGroup;

    void setupUi(QDialog *ProductsDialog)
    {
        if (ProductsDialog->objectName().isEmpty())
            ProductsDialog->setObjectName(QString::fromUtf8("ProductsDialog"));
        ProductsDialog->resize(1195, 539);
        QFont font;
        font.setPointSize(10);
        ProductsDialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ProductsDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ProductsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(ProductsDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setFont(font);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame_2 = new QFrame(ProductsDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        buttonAdd = new QPushButton(frame_2);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonAdd->sizePolicy().hasHeightForWidth());
        buttonAdd->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        buttonAdd->setFont(font1);

        horizontalLayout_3->addWidget(buttonAdd);

        buttonDel = new QPushButton(frame_2);
        buttonDel->setObjectName(QString::fromUtf8("buttonDel"));
        sizePolicy.setHeightForWidth(buttonDel->sizePolicy().hasHeightForWidth());
        buttonDel->setSizePolicy(sizePolicy);
        buttonDel->setFont(font1);

        horizontalLayout_3->addWidget(buttonDel);


        horizontalLayout_2->addWidget(frame_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        frame = new QFrame(ProductsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelGroup = new QLabel(frame);
        labelGroup->setObjectName(QString::fromUtf8("labelGroup"));

        horizontalLayout->addWidget(labelGroup);

        comboBoxGroup = new QComboBox(frame);
        comboBoxGroup->setObjectName(QString::fromUtf8("comboBoxGroup"));
        sizePolicy.setHeightForWidth(comboBoxGroup->sizePolicy().hasHeightForWidth());
        comboBoxGroup->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboBoxGroup);


        horizontalLayout_2->addWidget(frame);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ProductsDialog);

        QMetaObject::connectSlotsByName(ProductsDialog);
    } // setupUi

    void retranslateUi(QDialog *ProductsDialog)
    {
        ProductsDialog->setWindowTitle(QApplication::translate("ProductsDialog", "\320\242\320\276\320\262\320\260\321\200\321\213 \320\262 \320\260\321\200\320\265\320\275\320\264\321\203", nullptr));
        buttonAdd->setText(QApplication::translate("ProductsDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        buttonDel->setText(QApplication::translate("ProductsDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        labelGroup->setText(QApplication::translate("ProductsDialog", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductsDialog: public Ui_ProductsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTSDIALOG_H
