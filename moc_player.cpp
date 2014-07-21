/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Player_t {
    QByteArrayData data[25];
    char stringdata[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Player_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Player_t qt_meta_stringdata_Player = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 11),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 4),
QT_MOC_LITERAL(4, 25, 15),
QT_MOC_LITERAL(5, 41, 8),
QT_MOC_LITERAL(6, 50, 15),
QT_MOC_LITERAL(7, 66, 8),
QT_MOC_LITERAL(8, 75, 15),
QT_MOC_LITERAL(9, 91, 15),
QT_MOC_LITERAL(10, 107, 4),
QT_MOC_LITERAL(11, 112, 7),
QT_MOC_LITERAL(12, 120, 4),
QT_MOC_LITERAL(13, 125, 5),
QT_MOC_LITERAL(14, 131, 23),
QT_MOC_LITERAL(15, 155, 13),
QT_MOC_LITERAL(16, 169, 25),
QT_MOC_LITERAL(17, 195, 6),
QT_MOC_LITERAL(18, 202, 17),
QT_MOC_LITERAL(19, 220, 21),
QT_MOC_LITERAL(20, 242, 9),
QT_MOC_LITERAL(21, 252, 19),
QT_MOC_LITERAL(22, 272, 13),
QT_MOC_LITERAL(23, 286, 9),
QT_MOC_LITERAL(24, 296, 16)
    },
    "Player\0mediacenter\0\0open\0durationChanged\0"
    "duration\0positionChanged\0progress\0"
    "metaDataChanged\0previousClicked\0seek\0"
    "seconds\0jump\0index\0playlistPositionChanged\0"
    "statusChanged\0QMediaPlayer::MediaStatus\0"
    "status\0bufferingProgress\0videoAvailableChanged\0"
    "available\0displayErrorMessage\0"
    "addToPlaylist\0fileNames\0getInfFromCenter\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Player[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08,
       3,    0,   90,    2, 0x08,
       4,    1,   91,    2, 0x08,
       6,    1,   94,    2, 0x08,
       8,    0,   97,    2, 0x08,
       9,    0,   98,    2, 0x08,
      10,    1,   99,    2, 0x08,
      12,    1,  102,    2, 0x08,
      14,    1,  105,    2, 0x08,
      15,    1,  108,    2, 0x08,
      18,    1,  111,    2, 0x08,
      19,    1,  114,    2, 0x08,
      21,    0,  117,    2, 0x08,
      22,    1,  118,    2, 0x08,
      24,    0,  121,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   23,
    QMetaType::Void,

       0        // eod
};

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Player *_t = static_cast<Player *>(_o);
        switch (_id) {
        case 0: _t->mediacenter(); break;
        case 1: _t->open(); break;
        case 2: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->metaDataChanged(); break;
        case 5: _t->previousClicked(); break;
        case 6: _t->seek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->jump((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->playlistPositionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->statusChanged((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 10: _t->bufferingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->videoAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->displayErrorMessage(); break;
        case 13: _t->addToPlaylist((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 14: _t->getInfFromCenter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        }
    }
}

const QMetaObject Player::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Player.data,
      qt_meta_data_Player,  qt_static_metacall, 0, 0}
};


const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Player.stringdata))
        return static_cast<void*>(const_cast< Player*>(this));
    return QWidget::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
