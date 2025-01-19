/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionExit;
    QAction *actionProducts;
    QAction *actionGroups;
    QAction *actionCustomers;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *customerLabel;
    QComboBox *customerComboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *startDateLabel;
    QDateEdit *startDateEdit;
    QPushButton *buttonPrevDay;
    QPushButton *buttonNextDay;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonRental;
    QPushButton *buttonEndOrder;
    QTableWidget *ordersTableWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1243, 635);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionProducts = new QAction(MainWindow);
        actionProducts->setObjectName(QString::fromUtf8("actionProducts"));
        actionGroups = new QAction(MainWindow);
        actionGroups->setObjectName(QString::fromUtf8("actionGroups"));
        actionCustomers = new QAction(MainWindow);
        actionCustomers->setObjectName(QString::fromUtf8("actionCustomers"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QFont font1;
        font1.setPointSize(10);
        frame->setFont(font1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        customerLabel = new QLabel(frame);
        customerLabel->setObjectName(QString::fromUtf8("customerLabel"));

        horizontalLayout->addWidget(customerLabel);

        customerComboBox = new QComboBox(frame);
        customerComboBox->setObjectName(QString::fromUtf8("customerComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(customerComboBox->sizePolicy().hasHeightForWidth());
        customerComboBox->setSizePolicy(sizePolicy1);
        customerComboBox->setFont(font1);

        horizontalLayout->addWidget(customerComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        startDateLabel = new QLabel(frame);
        startDateLabel->setObjectName(QString::fromUtf8("startDateLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(startDateLabel->sizePolicy().hasHeightForWidth());
        startDateLabel->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(startDateLabel);

        startDateEdit = new QDateEdit(frame);
        startDateEdit->setObjectName(QString::fromUtf8("startDateEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(startDateEdit->sizePolicy().hasHeightForWidth());
        startDateEdit->setSizePolicy(sizePolicy3);
        startDateEdit->setCalendarPopup(true);

        horizontalLayout->addWidget(startDateEdit);

        buttonPrevDay = new QPushButton(frame);
        buttonPrevDay->setObjectName(QString::fromUtf8("buttonPrevDay"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        buttonPrevDay->setFont(font2);

        horizontalLayout->addWidget(buttonPrevDay);

        buttonNextDay = new QPushButton(frame);
        buttonNextDay->setObjectName(QString::fromUtf8("buttonNextDay"));
        buttonNextDay->setFont(font2);

        horizontalLayout->addWidget(buttonNextDay);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        buttonRental = new QPushButton(frame);
        buttonRental->setObjectName(QString::fromUtf8("buttonRental"));
        sizePolicy1.setHeightForWidth(buttonRental->sizePolicy().hasHeightForWidth());
        buttonRental->setSizePolicy(sizePolicy1);
        buttonRental->setFont(font2);

        horizontalLayout->addWidget(buttonRental);

        buttonEndOrder = new QPushButton(frame);
        buttonEndOrder->setObjectName(QString::fromUtf8("buttonEndOrder"));
        sizePolicy1.setHeightForWidth(buttonEndOrder->sizePolicy().hasHeightForWidth());
        buttonEndOrder->setSizePolicy(sizePolicy1);
        buttonEndOrder->setFont(font2);

        horizontalLayout->addWidget(buttonEndOrder);


        verticalLayout->addWidget(frame);

        ordersTableWidget = new QTableWidget(centralwidget);
        ordersTableWidget->setObjectName(QString::fromUtf8("ordersTableWidget"));
        ordersTableWidget->setFont(font1);
        ordersTableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        ordersTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ordersTableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        ordersTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        ordersTableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(ordersTableWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1243, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionConnect);
        menu->addAction(actionDisconnect);
        menu->addSeparator();
        menu->addAction(actionExit);
        menu_2->addAction(actionProducts);
        menu_2->addAction(actionGroups);
        menu_2->addAction(actionCustomers);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\272\320\260\321\202 \321\201\320\275\320\260\321\200\321\217\320\266\320\265\320\275\320\270\321\217", nullptr));
        actionConnect->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217 \320\272 \321\201\320\265\321\200\320\262\320\265\321\200\321\203", nullptr));
#ifndef QT_NO_SHORTCUT
        actionConnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionDisconnect->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217 \320\276\321\202 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDisconnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionProducts->setText(QApplication::translate("MainWindow", "\320\242\320\276\320\262\320\260\321\200\321\213", nullptr));
#ifndef QT_NO_SHORTCUT
        actionProducts->setShortcut(QApplication::translate("MainWindow", "Alt+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionGroups->setText(QApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\321\213 \321\202\320\276\320\262\320\260\321\200\320\276\320\262", nullptr));
#ifndef QT_NO_SHORTCUT
        actionGroups->setShortcut(QApplication::translate("MainWindow", "Alt+E", nullptr));
#endif // QT_NO_SHORTCUT
        actionCustomers->setText(QApplication::translate("MainWindow", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCustomers->setShortcut(QApplication::translate("MainWindow", "Alt+Q", nullptr));
#endif // QT_NO_SHORTCUT
        customerLabel->setText(QApplication::translate("MainWindow", "\320\232\320\273\320\270\320\265\320\275\321\202:", nullptr));
        startDateLabel->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\320\276:", nullptr));
        buttonPrevDay->setText(QApplication::translate("MainWindow", "<<", nullptr));
        buttonNextDay->setText(QApplication::translate("MainWindow", ">>", nullptr));
        buttonRental->setText(QApplication::translate("MainWindow", "\320\236\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\272\320\260\321\202\320\260", nullptr));
        buttonEndOrder->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\272\320\260\321\202\320\260", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
