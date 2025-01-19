/****************************************************************************
** Meta object code from reading C++ file 'productsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rentalAG/productsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'productsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProductsDialog_t {
    QByteArrayData data[15];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProductsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProductsDialog_t qt_meta_stringdata_ProductsDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ProductsDialog"
QT_MOC_LITERAL(1, 15, 12), // "signalOpened"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "signalAddProduct"
QT_MOC_LITERAL(4, 46, 12), // "currentGroup"
QT_MOC_LITERAL(5, 59, 17), // "signalDelProducts"
QT_MOC_LITERAL(6, 77, 15), // "QModelIndexList"
QT_MOC_LITERAL(7, 93, 7), // "refresh"
QT_MOC_LITERAL(8, 101, 25), // "QSqlRelationalTableModel*"
QT_MOC_LITERAL(9, 127, 10), // "tableModel"
QT_MOC_LITERAL(10, 138, 15), // "QSqlTableModel*"
QT_MOC_LITERAL(11, 154, 13), // "comboBoxModel"
QT_MOC_LITERAL(12, 168, 10), // "addProduct"
QT_MOC_LITERAL(13, 179, 11), // "delProducts"
QT_MOC_LITERAL(14, 191, 19) // "currentGroupChanged"

    },
    "ProductsDialog\0signalOpened\0\0"
    "signalAddProduct\0currentGroup\0"
    "signalDelProducts\0QModelIndexList\0"
    "refresh\0QSqlRelationalTableModel*\0"
    "tableModel\0QSqlTableModel*\0comboBoxModel\0"
    "addProduct\0delProducts\0currentGroupChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProductsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   56,    2, 0x08 /* Private */,
      12,    0,   61,    2, 0x08 /* Private */,
      13,    0,   62,    2, 0x08 /* Private */,
      14,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void ProductsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProductsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalOpened(); break;
        case 1: _t->signalAddProduct((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->signalDelProducts((*reinterpret_cast< QModelIndexList(*)>(_a[1]))); break;
        case 3: _t->refresh((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< QSqlTableModel*(*)>(_a[2]))); break;
        case 4: _t->addProduct(); break;
        case 5: _t->delProducts(); break;
        case 6: _t->currentGroupChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProductsDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProductsDialog::signalOpened)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProductsDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProductsDialog::signalAddProduct)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ProductsDialog::*)(QModelIndexList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProductsDialog::signalDelProducts)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProductsDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ProductsDialog.data,
    qt_meta_data_ProductsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProductsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProductsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProductsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ProductsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ProductsDialog::signalOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ProductsDialog::signalAddProduct(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProductsDialog::signalDelProducts(QModelIndexList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
