/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VirtualShutterDedicatedServer/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "updateUserList"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "handleSwitch"
QT_MOC_LITERAL(4, 40, 17), // "showGeneralConfig"
QT_MOC_LITERAL(5, 58, 15), // "showUsersConfig"
QT_MOC_LITERAL(6, 74, 18), // "showChannelsConfig"
QT_MOC_LITERAL(7, 93, 16), // "showEventsConfig"
QT_MOC_LITERAL(8, 110, 20), // "showActivitiesConfig"
QT_MOC_LITERAL(9, 131, 7), // "hideAll"
QT_MOC_LITERAL(10, 139, 20), // "addChannelShowDialog"
QT_MOC_LITERAL(11, 160, 25), // "on_editChannelBtn_clicked"
QT_MOC_LITERAL(12, 186, 27), // "on_removeChannelBtn_clicked"
QT_MOC_LITERAL(13, 214, 21), // "on_kickButton_clicked"
QT_MOC_LITERAL(14, 236, 22), // "on_blockButton_clicked"
QT_MOC_LITERAL(15, 259, 22), // "on_unbanButton_clicked"
QT_MOC_LITERAL(16, 282, 21) // "on_moveButton_clicked"

    },
    "MainWindow\0updateUserList\0\0handleSwitch\0"
    "showGeneralConfig\0showUsersConfig\0"
    "showChannelsConfig\0showEventsConfig\0"
    "showActivitiesConfig\0hideAll\0"
    "addChannelShowDialog\0on_editChannelBtn_clicked\0"
    "on_removeChannelBtn_clicked\0"
    "on_kickButton_clicked\0on_blockButton_clicked\0"
    "on_unbanButton_clicked\0on_moveButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateUserList(); break;
        case 1: _t->handleSwitch(); break;
        case 2: _t->showGeneralConfig(); break;
        case 3: _t->showUsersConfig(); break;
        case 4: _t->showChannelsConfig(); break;
        case 5: _t->showEventsConfig(); break;
        case 6: _t->showActivitiesConfig(); break;
        case 7: _t->hideAll(); break;
        case 8: _t->addChannelShowDialog(); break;
        case 9: _t->on_editChannelBtn_clicked(); break;
        case 10: _t->on_removeChannelBtn_clicked(); break;
        case 11: _t->on_kickButton_clicked(); break;
        case 12: _t->on_blockButton_clicked(); break;
        case 13: _t->on_unbanButton_clicked(); break;
        case 14: _t->on_moveButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
