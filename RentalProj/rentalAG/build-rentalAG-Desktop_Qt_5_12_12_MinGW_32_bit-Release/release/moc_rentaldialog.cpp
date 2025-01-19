/****************************************************************************
** Meta object code from reading C++ file 'rentaldialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rentalAG/rentaldialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rentaldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RentalDialog_t {
    QByteArrayData data[24];
    char stringdata0[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RentalDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RentalDialog_t qt_meta_stringdata_RentalDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RentalDialog"
QT_MOC_LITERAL(1, 13, 12), // "signalOpened"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "signalOrder"
QT_MOC_LITERAL(4, 39, 18), // "QList<RentalItem*>"
QT_MOC_LITERAL(5, 58, 14), // "signalErrorMsg"
QT_MOC_LITERAL(6, 73, 3), // "msg"
QT_MOC_LITERAL(7, 77, 7), // "refresh"
QT_MOC_LITERAL(8, 85, 25), // "QSqlRelationalTableModel*"
QT_MOC_LITERAL(9, 111, 10), // "tableModel"
QT_MOC_LITERAL(10, 122, 15), // "QSqlTableModel*"
QT_MOC_LITERAL(11, 138, 13), // "comboBoxModel"
QT_MOC_LITERAL(12, 152, 11), // "addProducts"
QT_MOC_LITERAL(13, 164, 11), // "delProducts"
QT_MOC_LITERAL(14, 176, 11), // "addSelected"
QT_MOC_LITERAL(15, 188, 13), // "QTableWidget*"
QT_MOC_LITERAL(16, 202, 8), // "srcTable"
QT_MOC_LITERAL(17, 211, 8), // "dstTable"
QT_MOC_LITERAL(18, 220, 11), // "delSelected"
QT_MOC_LITERAL(19, 232, 5), // "table"
QT_MOC_LITERAL(20, 238, 13), // "calculateCost"
QT_MOC_LITERAL(21, 252, 19), // "currentGroupChanged"
QT_MOC_LITERAL(22, 272, 12), // "currentGroup"
QT_MOC_LITERAL(23, 285, 9) // "openOrder"

    },
    "RentalDialog\0signalOpened\0\0signalOrder\0"
    "QList<RentalItem*>\0signalErrorMsg\0msg\0"
    "refresh\0QSqlRelationalTableModel*\0"
    "tableModel\0QSqlTableModel*\0comboBoxModel\0"
    "addProducts\0delProducts\0addSelected\0"
    "QTableWidget*\0srcTable\0dstTable\0"
    "delSelected\0table\0calculateCost\0"
    "currentGroupChanged\0currentGroup\0"
    "openOrder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RentalDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,
       5,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   76,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    2,   83,    2, 0x08 /* Private */,
      18,    1,   88,    2, 0x08 /* Private */,
      20,    0,   91,    2, 0x08 /* Private */,
      21,    1,   92,    2, 0x08 /* Private */,
      23,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   16,   17,
    QMetaType::Void, 0x80000000 | 15,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,

       0        // eod
};

void RentalDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RentalDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalOpened(); break;
        case 1: _t->signalOrder((*reinterpret_cast< QList<RentalItem*>(*)>(_a[1]))); break;
        case 2: _t->signalErrorMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->refresh((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< QSqlTableModel*(*)>(_a[2]))); break;
        case 4: _t->addProducts(); break;
        case 5: _t->delProducts(); break;
        case 6: _t->addSelected((*reinterpret_cast< QTableWidget*(*)>(_a[1])),(*reinterpret_cast< QTableWidget*(*)>(_a[2]))); break;
        case 7: _t->delSelected((*reinterpret_cast< QTableWidget*(*)>(_a[1]))); break;
        case 8: _t->calculateCost(); break;
        case 9: _t->currentGroupChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->openOrder(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<RentalItem*> >(); break;
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
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTableWidget* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTableWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RentalDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RentalDialog::signalOpened)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RentalDialog::*)(QList<RentalItem*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RentalDialog::signalOrder)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RentalDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RentalDialog::signalErrorMsg)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RentalDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_RentalDialog.data,
    qt_meta_data_RentalDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RentalDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RentalDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RentalDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RentalDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void RentalDialog::signalOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RentalDialog::signalOrder(QList<RentalItem*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RentalDialog::signalErrorMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
