/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rentalAG/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[43];
    char stringdata0[624];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "signalRefreshMainWindow"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 25), // "signalGetOrdersByCustomer"
QT_MOC_LITERAL(4, 62, 4), // "name"
QT_MOC_LITERAL(5, 67, 17), // "signalRemoveOrder"
QT_MOC_LITERAL(6, 85, 15), // "QModelIndexList"
QT_MOC_LITERAL(7, 101, 16), // "signalTimerStart"
QT_MOC_LITERAL(8, 118, 15), // "signalTimerStop"
QT_MOC_LITERAL(9, 134, 19), // "sqlConnectingStatus"
QT_MOC_LITERAL(10, 154, 6), // "status"
QT_MOC_LITERAL(11, 161, 15), // "sqlMessageError"
QT_MOC_LITERAL(12, 177, 3), // "msg"
QT_MOC_LITERAL(13, 181, 18), // "interfaceConnected"
QT_MOC_LITERAL(14, 200, 21), // "interfaceDisconnected"
QT_MOC_LITERAL(15, 222, 16), // "openGroupsDialog"
QT_MOC_LITERAL(16, 239, 19), // "openCustomersDialog"
QT_MOC_LITERAL(17, 259, 18), // "openProductsDailog"
QT_MOC_LITERAL(18, 278, 16), // "openRentalDialog"
QT_MOC_LITERAL(19, 295, 15), // "openOrderDialog"
QT_MOC_LITERAL(20, 311, 18), // "QList<RentalItem*>"
QT_MOC_LITERAL(21, 330, 4), // "list"
QT_MOC_LITERAL(22, 335, 17), // "refreshMainWindow"
QT_MOC_LITERAL(23, 353, 13), // "QList<Order*>"
QT_MOC_LITERAL(24, 367, 10), // "ordersList"
QT_MOC_LITERAL(25, 378, 14), // "QList<QString>"
QT_MOC_LITERAL(26, 393, 13), // "customersList"
QT_MOC_LITERAL(27, 407, 9), // "fromOrder"
QT_MOC_LITERAL(28, 417, 23), // "slotCustomMenuRequested"
QT_MOC_LITERAL(29, 441, 3), // "pos"
QT_MOC_LITERAL(30, 445, 13), // "selectPrevDay"
QT_MOC_LITERAL(31, 459, 13), // "selectNextDay"
QT_MOC_LITERAL(32, 473, 19), // "getOrdersByCustomer"
QT_MOC_LITERAL(33, 493, 8), // "endOrder"
QT_MOC_LITERAL(34, 502, 9), // "removeRow"
QT_MOC_LITERAL(35, 512, 15), // "initDatesOfYear"
QT_MOC_LITERAL(36, 528, 11), // "monthString"
QT_MOC_LITERAL(37, 540, 5), // "month"
QT_MOC_LITERAL(38, 546, 22), // "currentCustomerChanged"
QT_MOC_LITERAL(39, 569, 18), // "currentDateChanged"
QT_MOC_LITERAL(40, 588, 2), // "dt"
QT_MOC_LITERAL(41, 591, 15), // "checkCurrentDay"
QT_MOC_LITERAL(42, 607, 16) // "applicationClose"

    },
    "MainWindow\0signalRefreshMainWindow\0\0"
    "signalGetOrdersByCustomer\0name\0"
    "signalRemoveOrder\0QModelIndexList\0"
    "signalTimerStart\0signalTimerStop\0"
    "sqlConnectingStatus\0status\0sqlMessageError\0"
    "msg\0interfaceConnected\0interfaceDisconnected\0"
    "openGroupsDialog\0openCustomersDialog\0"
    "openProductsDailog\0openRentalDialog\0"
    "openOrderDialog\0QList<RentalItem*>\0"
    "list\0refreshMainWindow\0QList<Order*>\0"
    "ordersList\0QList<QString>\0customersList\0"
    "fromOrder\0slotCustomMenuRequested\0pos\0"
    "selectPrevDay\0selectNextDay\0"
    "getOrdersByCustomer\0endOrder\0removeRow\0"
    "initDatesOfYear\0monthString\0month\0"
    "currentCustomerChanged\0currentDateChanged\0"
    "dt\0checkCurrentDay\0applicationClose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       3,    1,  152,    2, 0x06 /* Public */,
       5,    1,  155,    2, 0x06 /* Public */,
       7,    1,  158,    2, 0x06 /* Public */,
       8,    0,  161,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  162,    2, 0x08 /* Private */,
      11,    1,  165,    2, 0x08 /* Private */,
      13,    0,  168,    2, 0x08 /* Private */,
      14,    0,  169,    2, 0x08 /* Private */,
      15,    0,  170,    2, 0x08 /* Private */,
      16,    0,  171,    2, 0x08 /* Private */,
      17,    0,  172,    2, 0x08 /* Private */,
      18,    0,  173,    2, 0x08 /* Private */,
      19,    1,  174,    2, 0x08 /* Private */,
      22,    3,  177,    2, 0x08 /* Private */,
      28,    1,  184,    2, 0x08 /* Private */,
      30,    0,  187,    2, 0x08 /* Private */,
      31,    0,  188,    2, 0x08 /* Private */,
      32,    0,  189,    2, 0x08 /* Private */,
      33,    1,  190,    2, 0x08 /* Private */,
      34,    0,  193,    2, 0x08 /* Private */,
      35,    0,  194,    2, 0x08 /* Private */,
      36,    1,  195,    2, 0x08 /* Private */,
      38,    1,  198,    2, 0x08 /* Private */,
      39,    1,  201,    2, 0x08 /* Private */,
      41,    0,  204,    2, 0x08 /* Private */,
      42,    0,  205,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 25, QMetaType::Bool,   24,   26,   27,
    QMetaType::Void, QMetaType::QPoint,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QDate,   40,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalRefreshMainWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->signalGetOrdersByCustomer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->signalRemoveOrder((*reinterpret_cast< QModelIndexList(*)>(_a[1]))); break;
        case 3: _t->signalTimerStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->signalTimerStop(); break;
        case 5: _t->sqlConnectingStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->sqlMessageError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->interfaceConnected(); break;
        case 8: _t->interfaceDisconnected(); break;
        case 9: _t->openGroupsDialog(); break;
        case 10: _t->openCustomersDialog(); break;
        case 11: _t->openProductsDailog(); break;
        case 12: _t->openRentalDialog(); break;
        case 13: _t->openOrderDialog((*reinterpret_cast< QList<RentalItem*>(*)>(_a[1]))); break;
        case 14: _t->refreshMainWindow((*reinterpret_cast< QList<Order*>(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 15: _t->slotCustomMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 16: _t->selectPrevDay(); break;
        case 17: _t->selectNextDay(); break;
        case 18: _t->getOrdersByCustomer(); break;
        case 19: _t->endOrder((*reinterpret_cast< QList<Order*>(*)>(_a[1]))); break;
        case 20: _t->removeRow(); break;
        case 21: _t->initDatesOfYear(); break;
        case 22: { QString _r = _t->monthString((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->currentCustomerChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->currentDateChanged((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 25: _t->checkCurrentDay(); break;
        case 26: _t->applicationClose(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<RentalItem*> >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Order*> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Order*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalRefreshMainWindow)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalGetOrdersByCustomer)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QModelIndexList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalRemoveOrder)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalTimerStart)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalTimerStop)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signalRefreshMainWindow(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::signalGetOrdersByCustomer(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::signalRemoveOrder(QModelIndexList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::signalTimerStart(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::signalTimerStop()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
