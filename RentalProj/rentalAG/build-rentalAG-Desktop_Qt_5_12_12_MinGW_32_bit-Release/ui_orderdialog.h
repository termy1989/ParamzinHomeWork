/********************************************************************************
** Form generated from reading UI file 'orderdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERDIALOG_H
#define UI_ORDERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OrderDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QTableView *tableViewCustomers;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonAdd;
    QPushButton *buttonDel;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *tableWidgetProducts;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *lineEditName;
    QLabel *label_4;
    QLineEdit *lineEditPhone;
    QLabel *label_5;
    QLineEdit *lineEditEmail;
    QLabel *label_6;
    QTextEdit *textEditNote;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout;
    QDateEdit *dateEditStart;
    QDateEdit *dateEditEnd;
    QLabel *label;
    QLabel *label_2;
    QPushButton *buttonCreateOrder;

    void setupUi(QDialog *OrderDialog)
    {
        if (OrderDialog->objectName().isEmpty())
            OrderDialog->setObjectName(QString::fromUtf8("OrderDialog"));
        OrderDialog->resize(1093, 774);
        QFont font;
        font.setPointSize(10);
        OrderDialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        OrderDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(OrderDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_4 = new QGroupBox(OrderDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox_4->setFont(font1);
        groupBox_4->setAlignment(Qt::AlignCenter);
        groupBox_4->setFlat(false);
        groupBox_4->setCheckable(false);
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tableViewCustomers = new QTableView(groupBox_4);
        tableViewCustomers->setObjectName(QString::fromUtf8("tableViewCustomers"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        tableViewCustomers->setFont(font2);
        tableViewCustomers->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewCustomers->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableViewCustomers->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(tableViewCustomers);

        frame_5 = new QFrame(groupBox_4);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonAdd = new QPushButton(frame_5);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));

        horizontalLayout_2->addWidget(buttonAdd);

        buttonDel = new QPushButton(frame_5);
        buttonDel->setObjectName(QString::fromUtf8("buttonDel"));

        horizontalLayout_2->addWidget(buttonDel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(frame_5);


        verticalLayout->addWidget(groupBox_4);

        frame = new QFrame(OrderDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_2 = new QGroupBox(frame_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font1);
        groupBox_2->setAlignment(Qt::AlignCenter);
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tableWidgetProducts = new QTableWidget(groupBox_2);
        tableWidgetProducts->setObjectName(QString::fromUtf8("tableWidgetProducts"));
        tableWidgetProducts->setEnabled(true);
        tableWidgetProducts->setFont(font2);
        tableWidgetProducts->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidgetProducts->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetProducts->verticalHeader()->setVisible(false);

        verticalLayout_5->addWidget(tableWidgetProducts);


        verticalLayout_3->addWidget(groupBox_2);


        horizontalLayout->addWidget(frame_3);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setFont(font1);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEditName = new QLineEdit(groupBox);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setEnabled(false);
        lineEditName->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditName);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lineEditPhone = new QLineEdit(groupBox);
        lineEditPhone->setObjectName(QString::fromUtf8("lineEditPhone"));
        lineEditPhone->setEnabled(false);
        lineEditPhone->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPhone);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        lineEditEmail = new QLineEdit(groupBox);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));
        lineEditEmail->setEnabled(false);
        lineEditEmail->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditEmail);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        textEditNote = new QTextEdit(groupBox);
        textEditNote->setObjectName(QString::fromUtf8("textEditNote"));
        textEditNote->setEnabled(false);
        textEditNote->setFont(font2);
        textEditNote->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, textEditNote);


        verticalLayout_2->addWidget(groupBox);

        groupBox_6 = new QGroupBox(frame_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setFont(font1);
        groupBox_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout = new QGridLayout(groupBox_6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dateEditStart = new QDateEdit(groupBox_6);
        dateEditStart->setObjectName(QString::fromUtf8("dateEditStart"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dateEditStart->sizePolicy().hasHeightForWidth());
        dateEditStart->setSizePolicy(sizePolicy1);
        dateEditStart->setFont(font2);
        dateEditStart->setCurrentSection(QDateTimeEdit::DaySection);
        dateEditStart->setCalendarPopup(true);

        gridLayout->addWidget(dateEditStart, 1, 1, 1, 1);

        dateEditEnd = new QDateEdit(groupBox_6);
        dateEditEnd->setObjectName(QString::fromUtf8("dateEditEnd"));
        dateEditEnd->setFont(font2);
        dateEditEnd->setCalendarPopup(true);

        gridLayout->addWidget(dateEditEnd, 2, 1, 1, 1);

        label = new QLabel(groupBox_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        buttonCreateOrder = new QPushButton(groupBox_6);
        buttonCreateOrder->setObjectName(QString::fromUtf8("buttonCreateOrder"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonCreateOrder->sizePolicy().hasHeightForWidth());
        buttonCreateOrder->setSizePolicy(sizePolicy2);
        buttonCreateOrder->setFont(font1);

        gridLayout->addWidget(buttonCreateOrder, 1, 2, 2, 1);


        verticalLayout_2->addWidget(groupBox_6);


        horizontalLayout->addWidget(frame_2);


        verticalLayout->addWidget(frame);


        retranslateUi(OrderDialog);

        QMetaObject::connectSlotsByName(OrderDialog);
    } // setupUi

    void retranslateUi(QDialog *OrderDialog)
    {
        OrderDialog->setWindowTitle(QApplication::translate("OrderDialog", "\320\236\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\265 \320\260\321\200\320\265\320\275\320\264\321\213", nullptr));
        groupBox_4->setTitle(QApplication::translate("OrderDialog", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        buttonAdd->setText(QApplication::translate("OrderDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        buttonDel->setText(QApplication::translate("OrderDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QApplication::translate("OrderDialog", "\320\242\320\276\320\262\320\260\321\200\321\213 \320\272 \320\262\321\213\320\264\320\260\321\207\320\265", nullptr));
        groupBox->setTitle(QApplication::translate("OrderDialog", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\272\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        label_3->setText(QApplication::translate("OrderDialog", "\320\244.\320\230.\320\236.", nullptr));
        label_4->setText(QApplication::translate("OrderDialog", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        label_5->setText(QApplication::translate("OrderDialog", "Email", nullptr));
        label_6->setText(QApplication::translate("OrderDialog", "\320\237\321\200\320\270\320\274\320\265\321\207\320\260\320\275\320\270\320\265", nullptr));
        groupBox_6->setTitle(QApplication::translate("OrderDialog", "\320\241\321\200\320\276\320\272\320\270 \320\260\321\200\320\265\320\275\320\264\321\213", nullptr));
        label->setText(QApplication::translate("OrderDialog", "\320\235\320\260\321\207\320\260\320\273\320\276", nullptr));
        label_2->setText(QApplication::translate("OrderDialog", "\320\232\320\276\320\275\320\265\321\206", nullptr));
        buttonCreateOrder->setText(QApplication::translate("OrderDialog", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OrderDialog: public Ui_OrderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERDIALOG_H
