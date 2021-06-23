/****************************************************************************
** Meta object code from reading C++ file 'zxpushbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../zxpushbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zxpushbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZXPushButton_t {
    QByteArrayData data[10];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZXPushButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZXPushButton_t qt_meta_stringdata_ZXPushButton = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ZXPushButton"
QT_MOC_LITERAL(1, 13, 7), // "pressed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "row"
QT_MOC_LITERAL(4, 26, 3), // "col"
QT_MOC_LITERAL(5, 30, 8), // "released"
QT_MOC_LITERAL(6, 39, 10), // "on_pressed"
QT_MOC_LITERAL(7, 50, 11), // "on_released"
QT_MOC_LITERAL(8, 62, 10), // "on_toggled"
QT_MOC_LITERAL(9, 73, 1) // "v"

    },
    "ZXPushButton\0pressed\0\0row\0col\0released\0"
    "on_pressed\0on_released\0on_toggled\0v"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZXPushButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void ZXPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZXPushButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->pressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->released((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->on_pressed(); break;
        case 3: _t->on_released(); break;
        case 4: _t->on_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = int (ZXPushButton::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZXPushButton::pressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = int (ZXPushButton::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZXPushButton::released)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ZXPushButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_ZXPushButton.data,
    qt_meta_data_ZXPushButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZXPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZXPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZXPushButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int ZXPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
int ZXPushButton::pressed(int _t1, int _t2)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int ZXPushButton::released(int _t1, int _t2)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
