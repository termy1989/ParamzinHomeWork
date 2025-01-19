/****************************************************************************
** Meta object code from reading C++ file 'sqlhandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../sqlhandler.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqlhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSqlHandlerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSqlHandlerENDCLASS = QtMocHelpers::stringData(
    "SqlHandler",
    "signalConnectStatus",
    "",
    "signalErrorMsg",
    "sqlGroupsRefreshed",
    "QSqlTableModel*",
    "sqlCustomersRefreshed",
    "sqlCustomersUpdated",
    "sqlProductsRefreshed",
    "QSqlRelationalTableModel*",
    "sqlMainWindowRefreshed",
    "QList<Order*>",
    "sqlOrdersByCustomerRefreshed",
    "sqlConnect",
    "sqlDisconnect",
    "sqlRefreshGroups",
    "sqlAddGroup",
    "sqlUpdateGroups",
    "sqlDelGroups",
    "QModelIndexList",
    "sqlRefreshCustomers",
    "sqlAddCustomer",
    "sqlUpdateCustomers",
    "sqlDelCustomers",
    "sqlRefreshProducts",
    "sqlAddProduct",
    "sqlUpdateProducts",
    "sqlDelProducts",
    "sqlRefreshMainWindow",
    "sqlOrdersByCustomer",
    "sqlAddOrder",
    "sqlCloseOrder",
    "sqlIncrementProductsCount",
    "sqlDecrementProductsCount"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSqlHandlerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  182,    2, 0x06,    1 /* Public */,
       3,    1,  185,    2, 0x06,    3 /* Public */,
       4,    1,  188,    2, 0x06,    5 /* Public */,
       6,    1,  191,    2, 0x06,    7 /* Public */,
       7,    0,  194,    2, 0x06,    9 /* Public */,
       8,    2,  195,    2, 0x06,   10 /* Public */,
      10,    3,  200,    2, 0x06,   13 /* Public */,
      12,    1,  207,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,  210,    2, 0x08,   19 /* Private */,
      14,    0,  211,    2, 0x08,   20 /* Private */,
      15,    0,  212,    2, 0x08,   21 /* Private */,
      16,    0,  213,    2, 0x08,   22 /* Private */,
      17,    0,  214,    2, 0x08,   23 /* Private */,
      18,    1,  215,    2, 0x08,   24 /* Private */,
      20,    0,  218,    2, 0x08,   26 /* Private */,
      21,    1,  219,    2, 0x08,   27 /* Private */,
      22,    0,  222,    2, 0x08,   29 /* Private */,
      23,    2,  223,    2, 0x08,   30 /* Private */,
      24,    0,  228,    2, 0x08,   33 /* Private */,
      25,    1,  229,    2, 0x08,   34 /* Private */,
      26,    0,  232,    2, 0x08,   36 /* Private */,
      27,    1,  233,    2, 0x08,   37 /* Private */,
      28,    1,  236,    2, 0x08,   39 /* Private */,
      29,    1,  239,    2, 0x08,   41 /* Private */,
      30,    1,  242,    2, 0x08,   43 /* Private */,
      31,    1,  245,    2, 0x08,   45 /* Private */,
      32,    2,  248,    2, 0x08,   47 /* Private */,
      33,    2,  253,    2, 0x08,   50 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 5,    2,    2,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QStringList, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 11,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Bool,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject SqlHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSqlHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSqlHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSqlHandlerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SqlHandler, std::true_type>,
        // method 'signalConnectStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'signalErrorMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sqlGroupsRefreshed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSqlTableModel *, std::false_type>,
        // method 'sqlCustomersRefreshed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSqlTableModel *, std::false_type>,
        // method 'sqlCustomersUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sqlProductsRefreshed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSqlRelationalTableModel *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSqlTableModel *, std::false_type>,
        // method 'sqlMainWindowRefreshed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<Order*>, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QString>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sqlOrdersByCustomerRefreshed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<Order*>, std::false_type>,
        // method 'sqlConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sqlDisconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sqlRefreshGroups'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sqlAddGroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sqlUpdateGroups'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sqlDelGroups'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndexList, std::false_type>,
        // method 'sqlRefreshCustomers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sqlAddCustomer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sqlUpdateCustomers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sqlDelCustomers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndexList, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sqlRefreshProducts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sqlAddProduct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sqlUpdateProducts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sqlDelProducts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndexList, std::false_type>,
        // method 'sqlRefreshMainWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sqlOrdersByCustomer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sqlAddOrder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<Order*>, std::false_type>,
        // method 'sqlCloseOrder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndexList, std::false_type>,
        // method 'sqlIncrementProductsCount'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sqlDecrementProductsCount'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void SqlHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SqlHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalConnectStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->signalErrorMsg((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->sqlGroupsRefreshed((*reinterpret_cast< std::add_pointer_t<QSqlTableModel*>>(_a[1]))); break;
        case 3: _t->sqlCustomersRefreshed((*reinterpret_cast< std::add_pointer_t<QSqlTableModel*>>(_a[1]))); break;
        case 4: _t->sqlCustomersUpdated(); break;
        case 5: _t->sqlProductsRefreshed((*reinterpret_cast< std::add_pointer_t<QSqlRelationalTableModel*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSqlTableModel*>>(_a[2]))); break;
        case 6: _t->sqlMainWindowRefreshed((*reinterpret_cast< std::add_pointer_t<QList<Order*>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 7: _t->sqlOrdersByCustomerRefreshed((*reinterpret_cast< std::add_pointer_t<QList<Order*>>>(_a[1]))); break;
        case 8: _t->sqlConnect(); break;
        case 9: _t->sqlDisconnect(); break;
        case 10: _t->sqlRefreshGroups(); break;
        case 11: _t->sqlAddGroup(); break;
        case 12: _t->sqlUpdateGroups(); break;
        case 13: _t->sqlDelGroups((*reinterpret_cast< std::add_pointer_t<QModelIndexList>>(_a[1]))); break;
        case 14: _t->sqlRefreshCustomers(); break;
        case 15: _t->sqlAddCustomer((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->sqlUpdateCustomers(); break;
        case 17: _t->sqlDelCustomers((*reinterpret_cast< std::add_pointer_t<QModelIndexList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 18: _t->sqlRefreshProducts(); break;
        case 19: _t->sqlAddProduct((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->sqlUpdateProducts(); break;
        case 21: _t->sqlDelProducts((*reinterpret_cast< std::add_pointer_t<QModelIndexList>>(_a[1]))); break;
        case 22: _t->sqlRefreshMainWindow((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->sqlOrdersByCustomer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->sqlAddOrder((*reinterpret_cast< std::add_pointer_t<QList<Order*>>>(_a[1]))); break;
        case 25: _t->sqlCloseOrder((*reinterpret_cast< std::add_pointer_t<QModelIndexList>>(_a[1]))); break;
        case 26: { bool _r = _t->sqlIncrementProductsCount((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->sqlDecrementProductsCount((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSqlTableModel* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSqlTableModel* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSqlRelationalTableModel* >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSqlTableModel* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<Order*> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<Order*> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<Order*> >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QModelIndexList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SqlHandler::*)(bool );
            if (_t _q_method = &SqlHandler::signalConnectStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)(QString );
            if (_t _q_method = &SqlHandler::signalErrorMsg; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)(QSqlTableModel * );
            if (_t _q_method = &SqlHandler::sqlGroupsRefreshed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)(QSqlTableModel * );
            if (_t _q_method = &SqlHandler::sqlCustomersRefreshed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)();
            if (_t _q_method = &SqlHandler::sqlCustomersUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)(QSqlRelationalTableModel * , QSqlTableModel * );
            if (_t _q_method = &SqlHandler::sqlProductsRefreshed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)(QList<Order*> , QList<QString> , bool );
            if (_t _q_method = &SqlHandler::sqlMainWindowRefreshed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SqlHandler::*)(QList<Order*> );
            if (_t _q_method = &SqlHandler::sqlOrdersByCustomerRefreshed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *SqlHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SqlHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSqlHandlerENDCLASS.stringdata0))
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
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SqlHandler::signalErrorMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SqlHandler::sqlGroupsRefreshed(QSqlTableModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SqlHandler::sqlCustomersRefreshed(QSqlTableModel * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
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
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SqlHandler::sqlMainWindowRefreshed(QList<Order*> _t1, QList<QString> _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SqlHandler::sqlOrdersByCustomerRefreshed(QList<Order*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
