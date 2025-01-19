/****************************************************************************
** Meta object code from reading C++ file 'groupsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rentalAG/groupsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groupsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GroupsDialog_t {
    QByteArrayData data[11];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroupsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroupsDialog_t qt_meta_stringdata_GroupsDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GroupsDialog"
QT_MOC_LITERAL(1, 13, 12), // "signalOpened"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "signalAddGroup"
QT_MOC_LITERAL(4, 42, 15), // "signalDelGroups"
QT_MOC_LITERAL(5, 58, 15), // "QModelIndexList"
QT_MOC_LITERAL(6, 74, 7), // "refresh"
QT_MOC_LITERAL(7, 82, 15), // "QSqlTableModel*"
QT_MOC_LITERAL(8, 98, 5), // "model"
QT_MOC_LITERAL(9, 104, 8), // "addGroup"
QT_MOC_LITERAL(10, 113, 9) // "delGroups"

    },
    "GroupsDialog\0signalOpened\0\0signalAddGroup\0"
    "signalDelGroups\0QModelIndexList\0refresh\0"
    "QSqlTableModel*\0model\0addGroup\0delGroups"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupsDialog[] = {

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
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   49,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GroupsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GroupsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalOpened(); break;
        case 1: _t->signalAddGroup(); break;
        case 2: _t->signalDelGroups((*reinterpret_cast< QModelIndexList(*)>(_a[1]))); break;
        case 3: _t->refresh((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 4: _t->addGroup(); break;
        case 5: _t->delGroups(); break;
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
            using _t = void (GroupsDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupsDialog::signalOpened)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GroupsDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupsDialog::signalAddGroup)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GroupsDialog::*)(QModelIndexList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GroupsDialog::signalDelGroups)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GroupsDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_GroupsDialog.data,
    qt_meta_data_GroupsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GroupsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GroupsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GroupsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GroupsDialog::signalOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GroupsDialog::signalAddGroup()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GroupsDialog::signalDelGroups(QModelIndexList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
