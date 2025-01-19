/****************************************************************************
** Meta object code from reading C++ file 'sqlhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rentalAG/sqlhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqlhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SqlHandler_t {
    QByteArrayData data[46];
    char stringdata0[691];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SqlHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SqlHandler_t qt_meta_stringdata_SqlHandler = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SqlHandler"
QT_MOC_LITERAL(1, 11, 19), // "signalConnectStatus"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "status"
QT_MOC_LITERAL(4, 39, 14), // "signalErrorMsg"
QT_MOC_LITERAL(5, 54, 7), // "message"
QT_MOC_LITERAL(6, 62, 18), // "sqlGroupsRefreshed"
QT_MOC_LITERAL(7, 81, 15), // "QSqlTableModel*"
QT_MOC_LITERAL(8, 97, 5), // "model"
QT_MOC_LITERAL(9, 103, 21), // "sqlCustomersRefreshed"
QT_MOC_LITERAL(10, 125, 19), // "sqlCustomersUpdated"
QT_MOC_LITERAL(11, 145, 20), // "sqlProductsRefreshed"
QT_MOC_LITERAL(12, 166, 25), // "QSqlRelationalTableModel*"
QT_MOC_LITERAL(13, 192, 6), // "model2"
QT_MOC_LITERAL(14, 199, 22), // "sqlMainWindowRefreshed"
QT_MOC_LITERAL(15, 222, 13), // "QList<Order*>"
QT_MOC_LITERAL(16, 236, 14), // "QList<QString>"
QT_MOC_LITERAL(17, 251, 28), // "sqlOrdersByCustomerRefreshed"
QT_MOC_LITERAL(18, 280, 10), // "sqlConnect"
QT_MOC_LITERAL(19, 291, 13), // "sqlDisconnect"
QT_MOC_LITERAL(20, 305, 16), // "sqlRefreshGroups"
QT_MOC_LITERAL(21, 322, 11), // "sqlAddGroup"
QT_MOC_LITERAL(22, 334, 15), // "sqlUpdateGroups"
QT_MOC_LITERAL(23, 350, 12), // "sqlDelGroups"
QT_MOC_LITERAL(24, 363, 15), // "QModelIndexList"
QT_MOC_LITERAL(25, 379, 10), // "removeRows"
QT_MOC_LITERAL(26, 390, 19), // "sqlRefreshCustomers"
QT_MOC_LITERAL(27, 410, 14), // "sqlAddCustomer"
QT_MOC_LITERAL(28, 425, 9), // "fromOrder"
QT_MOC_LITERAL(29, 435, 18), // "sqlUpdateCustomers"
QT_MOC_LITERAL(30, 454, 15), // "sqlDelCustomers"
QT_MOC_LITERAL(31, 470, 18), // "sqlRefreshProducts"
QT_MOC_LITERAL(32, 489, 13), // "sqlAddProduct"
QT_MOC_LITERAL(33, 503, 5), // "group"
QT_MOC_LITERAL(34, 509, 17), // "sqlUpdateProducts"
QT_MOC_LITERAL(35, 527, 14), // "sqlDelProducts"
QT_MOC_LITERAL(36, 542, 20), // "sqlRefreshMainWindow"
QT_MOC_LITERAL(37, 563, 19), // "sqlOrdersByCustomer"
QT_MOC_LITERAL(38, 583, 8), // "customer"
QT_MOC_LITERAL(39, 592, 11), // "sqlAddOrder"
QT_MOC_LITERAL(40, 604, 9), // "orderList"
QT_MOC_LITERAL(41, 614, 13), // "sqlCloseOrder"
QT_MOC_LITERAL(42, 628, 25), // "sqlIncrementProductsCount"
QT_MOC_LITERAL(43, 654, 4), // "name"
QT_MOC_LITERAL(44, 659, 5), // "count"
QT_MOC_LITERAL(45, 665, 25) // "sqlDecrementProductsCount"

    },
    "SqlHandler\0signalConnectStatus\0\0status\0"
    "signalErrorMsg\0message\0sqlGroupsRefreshed\0"
    "QSqlTableModel*\0model\0sqlCustomersRefreshed\0"
    "sqlCustomersUpdated\0sqlProductsRefreshed\0"
    "QSqlRelationalTableModel*\0model2\0"
    "sqlMainWindowRefreshed\0QList<Order*>\0"
    "QList<QString>\0sqlOrdersByCustomerRefreshed\0"
    "sqlConnect\0sqlDisconnect\0sqlRefreshGroups\0"
    "sqlAddGroup\0sqlUpdateGroups\0sqlDelGroups\0"
    "QModelIndexList\0removeRows\0"
    "sqlRefreshCustomers\0sqlAddCustomer\0"
    "fromOrder\0sqlUpdateCustomers\0"
    "sqlDelCustomers\0sqlRefreshProducts\0"
    "sqlAddProduct\0group\0sqlUpdateProducts\0"
    "sqlDelProducts\0sqlRefreshMainWindow\0"
    "sqlOrdersByCustomer\0customer\0sqlAddOrder\0"
    "orderList\0sqlCloseOrder\0"
    "sqlIncrementProductsCount\0name\0count\0"
    "sqlDecrementProductsCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SqlHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  154,    2, 0x06 /* Public */,
       4,    1,  157,    2, 0x06 /* Public */,
       6,    1,  160,    2, 0x06 /* Public */,
       9,    1,  163,    2, 0x06 /* Public */,
      10,    0,  166,    2, 0x06 /* Public */,
      11,    2,  167,    2, 0x06 /* Public */,
      14,    3,  172,    2, 0x06 /* Public */,
      17,    1,  179,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  182,    2, 0x08 /* Private */,
      19,    0,  183,    2, 0x08 /* Private */,
      20,    0,  184,    2, 0x08 /* Private */,
      21,    0,  185,    2, 0x08 /* Private */,
      22,    0,  186,    2, 0x08 /* Private */,
      23,    1,  187,    2, 0x08 /* Private */,
      26,    0,  190,    2, 0x08 /* Private */,
      27,    1,  191,    2, 0x08 /* Private */,
      29,    0,  194,    2, 0x08 /* Private */,
      30,    2,  195,    2, 0x08 /* Private */,
      31,    0,  200,    2, 0x08 /* Private */,
      32,    1,  201,    2, 0x08 /* Private */,
      34,    0,  204,    2, 0x08 /* Private */,
      35,    1,  205,    2, 0x08 /* Private */,
      36,    1,  208,    2, 0x08 /* Private */,
      37,    1,  211,    2, 0x08 /* Private */,
      39,    1,  214,    2, 0x08 /* Private */,
      41,    1,  217,    2, 0x08 /* Private */,
      42,    2,  220,    2, 0x08 /* Private */,
      45,    2,  225,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 7,    8,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 16, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 15,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24, QMetaType::Bool,   25,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, 0x80000000 | 15,   40,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,   43,   44,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,   43,   44,

       0        // eod
};

void SqlHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SqlHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalConnectStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->signalErrorMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sqlGroupsRefreshed((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 3: _t->sqlCustomersRefreshed((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 4: _t->sqlCustomersUpdated(); break;
        case 5: _t->sqlProductsRefreshed((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< QSqlTableModel*(*)>(_a[2]))); break;
        case 6: _t->sqlMainWindowRefreshed((*reinterpret_cast< QList<Order*>(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->sqlOrdersByCustomerRefreshed((*reinterpret_cast< QList<Order*>(*)>(_a[1]))); break;
        case 8: _t->sqlConnect(); break;
        case 9: _t->sqlDisconnect(); break;
        case 10: _t->sqlRefreshGroups(); break;
        case 11: _t->sqlAddGroup(); break;
        case 12: _t->sqlUpdateGroups(); break;
        case 13: _t->sqlDelGroups((*reinterpret_cast< QModelIndexList(*)>(_a[1]))); break;
        case 14: _t->sqlRefreshCustomers(); break;
        case 15: _t->sqlAddCustomer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->sqlUpdateCustomers(); break;
        case 17: _t->sqlDelCustomers((*reinterpret_cast< QModelIndexList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->sqlRefreshProducts(); break;
        case 19: _t->sqlAddProduct((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->sqlUpdateProducts(); break;
        case 21: _t->sqlDelProducts((*reinterpret_cast< QModelIndexList(*)>(_a[1]))); break;
        case 22: _t->sqlRefreshMainWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->sqlOrdersByCustomer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->sqlAddOrder((*reinterpret_cast< QList<Order*>(*)>(_a[1]))); break;
        case 25: _t->sqlCloseOrder((*reinterpret_cast< QModelIndexList(*)>(_a[1]))); break;
        case 26: { bool _r = _t->sqlIncrementProductsCount((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->sqlDecrementProductsCount((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 5:
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
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Order*> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Order*> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Order*> >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SqlHandler::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqlHandler::signalConnectStatus)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqlHandler::signalErrorMsg)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)(QSqlTableModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqlHandler::sqlGroupsRefreshed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)(QSqlTableModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqlHandler::sqlCustomersRefreshed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqlHandler::sqlCustomersUpdated)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)(QSqlRelationalTableModel * , QSqlTableModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqlHandler::sqlProductsRefreshed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)(QList<Order*> , QList<QString> , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqlHandler::sqlMainWindowRefreshed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)(QList<Order*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SqlHandler::sqlOrdersByCustomerRefreshed)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SqlHandler::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SqlHandler.data,
    qt_meta_data_SqlHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SqlHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SqlHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SqlHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SqlHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void SqlHandler::signalConnectStatus(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SqlHandler::signalErrorMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SqlHandler::sqlGroupsRefreshed(QSqlTableModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SqlHandler::sqlCustomersRefreshed(QSqlTableModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SqlHandler::sqlCustomersUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SqlHandler::sqlProductsRefreshed(QSqlRelationalTableModel * _t1, QSqlTableModel * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SqlHandler::sqlMainWindowRefreshed(QList<Order*> _t1, QList<QString> _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SqlHandler::sqlOrdersByCustomerRefreshed(QList<Order*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
