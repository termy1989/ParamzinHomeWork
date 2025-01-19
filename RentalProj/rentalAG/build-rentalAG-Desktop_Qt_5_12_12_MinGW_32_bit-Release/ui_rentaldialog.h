/********************************************************************************
** Form generated from reading UI file 'rentaldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENTALDIALOG_H
#define UI_RENTALDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RentalDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *storeTableWidget;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QComboBox *comboBoxGroup;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonAdd;
    QPushButton *buttonDel;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *rentalTableWidget;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *spinBoxDays;
    QLabel *labelCost;
    QPushButton *buttonOrder;

    void setupUi(QDialog *RentalDialog)
    {
        if (RentalDialog->objectName().isEmpty())
            RentalDialog->setObjectName(QString::fromUtf8("RentalDialog"));
        RentalDialog->resize(1435, 657);
        QFont font;
        font.setPointSize(10);
        RentalDialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        RentalDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(RentalDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(RentalDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        storeTableWidget = new QTableWidget(groupBox);
        storeTableWidget->setObjectName(QString::fromUtf8("storeTableWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(storeTableWidget->sizePolicy().hasHeightForWidth());
        storeTableWidget->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        storeTableWidget->setFont(font2);
        storeTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        storeTableWidget->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(storeTableWidget);

        frame_4 = new QFrame(groupBox);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        frame_4->setFont(font3);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        comboBoxGroup = new QComboBox(frame_4);
        comboBoxGroup->setObjectName(QString::fromUtf8("comboBoxGroup"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxGroup->sizePolicy().hasHeightForWidth());
        comboBoxGroup->setSizePolicy(sizePolicy2);
        comboBoxGroup->setFont(font2);

        verticalLayout_3->addWidget(comboBoxGroup);


        verticalLayout_2->addWidget(frame_4);


        horizontalLayout->addWidget(groupBox);

        frame_2 = new QFrame(RentalDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        buttonAdd = new QPushButton(frame_2);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));
        buttonAdd->setFont(font1);

        verticalLayout->addWidget(buttonAdd);

        buttonDel = new QPushButton(frame_2);
        buttonDel->setObjectName(QString::fromUtf8("buttonDel"));
        buttonDel->setFont(font1);

        verticalLayout->addWidget(buttonDel);


        horizontalLayout->addWidget(frame_2);

        groupBox_3 = new QGroupBox(RentalDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy3);
        groupBox_3->setFont(font1);
        groupBox_3->setAlignment(Qt::AlignCenter);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        rentalTableWidget = new QTableWidget(groupBox_3);
        rentalTableWidget->setObjectName(QString::fromUtf8("rentalTableWidget"));
        rentalTableWidget->setFont(font2);
        rentalTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        rentalTableWidget->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(rentalTableWidget);

        groupBox_5 = new QGroupBox(groupBox_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFont(font1);
        groupBox_5->setAlignment(Qt::AlignCenter);
        horizontalLayout_3 = new QHBoxLayout(groupBox_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        frame_5 = new QFrame(groupBox_5);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        sizePolicy.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy);
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        spinBoxDays = new QSpinBox(frame_5);
        spinBoxDays->setObjectName(QString::fromUtf8("spinBoxDays"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(spinBoxDays->sizePolicy().hasHeightForWidth());
        spinBoxDays->setSizePolicy(sizePolicy4);
        spinBoxDays->setFont(font2);
        spinBoxDays->setMinimum(3);
        spinBoxDays->setMaximum(365);

        horizontalLayout_4->addWidget(spinBoxDays);


        horizontalLayout_3->addWidget(frame_5);

        labelCost = new QLabel(groupBox_5);
        labelCost->setObjectName(QString::fromUtf8("labelCost"));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setUnderline(true);
        font4.setWeight(75);
        labelCost->setFont(font4);
        labelCost->setAutoFillBackground(false);
        labelCost->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelCost);

        buttonOrder = new QPushButton(groupBox_5);
        buttonOrder->setObjectName(QString::fromUtf8("buttonOrder"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(buttonOrder->sizePolicy().hasHeightForWidth());
        buttonOrder->setSizePolicy(sizePolicy5);

        horizontalLayout_3->addWidget(buttonOrder);


        verticalLayout_4->addWidget(groupBox_5);


        horizontalLayout->addWidget(groupBox_3);


        retranslateUi(RentalDialog);

        QMetaObject::connectSlotsByName(RentalDialog);
    } // setupUi

    void retranslateUi(QDialog *RentalDialog)
    {
        RentalDialog->setWindowTitle(QApplication::translate("RentalDialog", "\320\220\321\200\320\265\320\275\320\264\320\260", nullptr));
        groupBox->setTitle(QApplication::translate("RentalDialog", "\320\242\320\276\320\262\320\260\321\200\321\213 \320\275\320\260 \321\201\320\272\320\273\320\260\320\264\320\265", nullptr));
        label->setText(QApplication::translate("RentalDialog", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217 \321\202\320\276\320\262\320\260\321\200\320\276\320\262", nullptr));
        buttonAdd->setText(QApplication::translate("RentalDialog", ">>", nullptr));
        buttonDel->setText(QApplication::translate("RentalDialog", "<<", nullptr));
        groupBox_3->setTitle(QApplication::translate("RentalDialog", "\320\222\321\213\320\264\320\260\321\207\320\260 \321\202\320\276\320\262\320\260\321\200\320\276\320\262 \320\262 \320\260\321\200\320\265\320\275\320\264\321\203", nullptr));
        groupBox_5->setTitle(QString());
        label_4->setText(QApplication::translate("RentalDialog", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\260\321\200\320\265\320\275\320\264\321\213 (\320\264\320\275\320\270)", nullptr));
        labelCost->setText(QApplication::translate("RentalDialog", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214: 0.00 \321\200\321\203\320\261", nullptr));
        buttonOrder->setText(QApplication::translate("RentalDialog", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\260\321\200\320\265\320\275\320\264\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RentalDialog: public Ui_RentalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENTALDIALOG_H
