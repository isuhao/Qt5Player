/****************************************************************************
** Meta object code from reading C++ file 'mediacenter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mediacenter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediacenter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MediaCenter_t {
    QByteArrayData data[11];
    char stringdata[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MediaCenter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MediaCenter_t qt_meta_stringdata_MediaCenter = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 12),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 6),
QT_MOC_LITERAL(4, 33, 21),
QT_MOC_LITERAL(5, 55, 26),
QT_MOC_LITERAL(6, 82, 9),
QT_MOC_LITERAL(7, 92, 9),
QT_MOC_LITERAL(8, 102, 7),
QT_MOC_LITERAL(9, 110, 9),
QT_MOC_LITERAL(10, 120, 7)
    },
    "MediaCenter\0sendtoplayer\0\0Search\0"
    "RightClickedOperation\0customContextMenuRequested\0"
    "addTolist\0delfromdb\0initial\0setUnable\0"
    "getlist\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MediaCenter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a,
       4,    0,   61,    2, 0x0a,
       5,    1,   62,    2, 0x0a,
       6,    0,   65,    2, 0x0a,
       7,    0,   66,    2, 0x0a,
       8,    0,   67,    2, 0x0a,
       9,    0,   68,    2, 0x0a,
      10,    0,   69,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QStringList,

       0        // eod
};

void MediaCenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MediaCenter *_t = static_cast<MediaCenter *>(_o);
        switch (_id) {
        case 0: _t->sendtoplayer(); break;
        case 1: _t->Search(); break;
        case 2: _t->RightClickedOperation(); break;
        case 3: _t->customContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->addTolist(); break;
        case 5: _t->delfromdb(); break;
        case 6: _t->initial(); break;
        case 7: _t->setUnable(); break;
        case 8: { QStringList _r = _t->getlist();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MediaCenter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MediaCenter::sendtoplayer)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MediaCenter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MediaCenter.data,
      qt_meta_data_MediaCenter,  qt_static_metacall, 0, 0}
};


const QMetaObject *MediaCenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaCenter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MediaCenter.stringdata))
        return static_cast<void*>(const_cast< MediaCenter*>(this));
    return QWidget::qt_metacast(_clname);
}

int MediaCenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MediaCenter::sendtoplayer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
