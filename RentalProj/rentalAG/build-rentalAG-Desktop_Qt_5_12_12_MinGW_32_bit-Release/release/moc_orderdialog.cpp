/****************************************************************************
** Meta object code from reading C++ file 'orderdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rentalAG/orderdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'orderdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrderDialog_t {
    QByteArrayData data[19];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrderDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrderDialog_t qt_meta_stringdata_OrderDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OrderDialog"
QT_MOC_LITERAL(1, 12, 12), // "signalOpened"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 17), // "signalAddCustomer"
QT_MOC_LITERAL(4, 44, 9), // "fromOrder"
QT_MOC_LITERAL(5, 54, 18), // "signalDelCustomers"
QT_MOC_LITERAL(6, 73, 15), // "QModelIndexList"
QT_MOC_LITERAL(7, 89, 14), // "signalErrorMsg"
QT_MOC_LITERAL(8, 104, 3), // "msg"
QT_MOC_LITERAL(9, 108, 14), // "signalAddOrder"
QT_MOC_LITERAL(10, 123, 13), // "QList<Order*>"
QT_MOC_LITERAL(11, 137, 5), // "order"
QT_MOC_LITERAL(12, 143, 7), // "refresh"
QT_MOC_LITERAL(13, 151, 15), // "QSqlTableModel*"
QT_MOC_LITERAL(14, 167, 5), // "model"
QT_MOC_LITERAL(15, 173, 11), // "addCustomer"
QT_MOC_LITERAL(16, 185, 12), // "delCustomers"
QT_MOC_LITERAL(17, 198, 14), // "selectCustomer"
QT_MOC_LITERAL(18, 213, 11) // "createOrder"

    },
    "OrderDialog\0signalOpened\0\0signalAddCustomer\0"
    "fromOrder\0signalDelCustomers\0"
    "QModelIndexList\0signalErrorMsg\0msg\0"
    "signalAddOrder\0QList<Order*>\0order\0"
    "refresh\0QSqlTableModel*\0model\0addCustomer\0"
    "delCustomers\0selectCustomer\0createOrder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrderDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       5,    2,   68,    2, 0x06 /* Public */,
       7,    1,   73,    2, 0x06 /* Public */,
       9,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   79,    2, 0x08 /* Private */,
      15,    0,   82,    2, 0x08 /* Private */,
      16,    0,   83,    2, 0x08 /* Private */,
      17,    0,   84,    2, 0x08 /* Private */,
      18,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OrderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OrderDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalOpened(); break;
        case 1: _t->signalAddCustomer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->signalDelCustomers((*reinterpret_cast< QModelIndexList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->signalErrorMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->signalAddOrder((*reinterpret_cast< QList<Order*>(*)>(_a[1]))); break;
        case 5: _t->refresh((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 6: _t->addCustomer(); break;
        case 7: _t->delCustomers(); break;
        case 8: _t->selectCustomer(); break;
        case 9: _t->createOrder(); break;
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
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Order*> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OrderDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrderDialog::signalOpened)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OrderDialog::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrderDialog::signalAddCustomer)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OrderDialog::*)(QModelIndexList , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrderDialog::signalDelCustomers)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OrderDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrderDialog::signalErrorMsg)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OrderDialog::*)(QList<Order*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrderDialog::signalAddOrder)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OrderDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_OrderDialog.data,
    qt_meta_data_OrderDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OrderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrderDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OrderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void OrderDialog::signalOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OrderDialog::signalAddCustomer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OrderDialog::signalDelCustomers(QModelIndexList _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OrderDialog::signalErrorMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OrderDialog::signalAddOrder(QList<Order*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
