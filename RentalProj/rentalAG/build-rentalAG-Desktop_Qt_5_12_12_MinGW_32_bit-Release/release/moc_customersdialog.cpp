/****************************************************************************
** Meta object code from reading C++ file 'customersdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rentalAG/customersdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customersdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CustomersDialog_t {
    QByteArrayData data[12];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomersDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomersDialog_t qt_meta_stringdata_CustomersDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CustomersDialog"
QT_MOC_LITERAL(1, 16, 12), // "signalOpened"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "signalAddCustomer"
QT_MOC_LITERAL(4, 48, 9), // "fromOrder"
QT_MOC_LITERAL(5, 58, 18), // "signalDelCustomers"
QT_MOC_LITERAL(6, 77, 15), // "QModelIndexList"
QT_MOC_LITERAL(7, 93, 7), // "refresh"
QT_MOC_LITERAL(8, 101, 15), // "QSqlTableModel*"
QT_MOC_LITERAL(9, 117, 5), // "model"
QT_MOC_LITERAL(10, 123, 11), // "addCustomer"
QT_MOC_LITERAL(11, 135, 12) // "delCustomers"

    },
    "CustomersDialog\0signalOpened\0\0"
    "signalAddCustomer\0fromOrder\0"
    "signalDelCustomers\0QModelIndexList\0"
    "refresh\0QSqlTableModel*\0model\0addCustomer\0"
    "delCustomers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomersDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    2,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   53,    2, 0x08 /* Private */,
      10,    0,   56,    2, 0x08 /* Private */,
      11,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,    2,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CustomersDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomersDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalOpened(); break;
        case 1: _t->signalAddCustomer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->signalDelCustomers((*reinterpret_cast< QModelIndexList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->refresh((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 4: _t->addCustomer(); break;
        case 5: _t->delCustomers(); break;
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
        case 3:
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
            using _t = void (CustomersDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomersDialog::signalOpened)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CustomersDialog::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomersDialog::signalAddCustomer)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CustomersDialog::*)(QModelIndexList , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomersDialog::signalDelCustomers)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CustomersDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_CustomersDialog.data,
    qt_meta_data_CustomersDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CustomersDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomersDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomersDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CustomersDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CustomersDialog::signalOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CustomersDialog::signalAddCustomer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CustomersDialog::signalDelCustomers(QModelIndexList _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
