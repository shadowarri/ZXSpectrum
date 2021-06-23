/****************************************************************************
** Meta object code from reading C++ file 'port1f.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../port1f.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'port1f.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PORT1F_t {
    QByteArrayData data[1];
    char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PORT1F_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PORT1F_t qt_meta_stringdata_PORT1F = {
    {
QT_MOC_LITERAL(0, 0, 6) // "PORT1F"

    },
    "PORT1F"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PORT1F[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PORT1F::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PORT1F::staticMetaObject = { {
    QMetaObject::SuperData::link<BusDevice::staticMetaObject>(),
    qt_meta_stringdata_PORT1F.data,
    qt_meta_data_PORT1F,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PORT1F::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PORT1F::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PORT1F.stringdata0))
        return static_cast<void*>(this);
    return BusDevice::qt_metacast(_clname);
}

int PORT1F::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BusDevice::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
