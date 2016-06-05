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
    QByteArrayData data[20];
    char stringdata0[375];
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
QT_MOC_LITERAL(3, 27, 9), // "logToFile"
QT_MOC_LITERAL(4, 37, 12), // "handleSwitch"
QT_MOC_LITERAL(5, 50, 17), // "showGeneralConfig"
QT_MOC_LITERAL(6, 68, 15), // "showUsersConfig"
QT_MOC_LITERAL(7, 84, 18), // "showChannelsConfig"
QT_MOC_LITERAL(8, 103, 16), // "showEventsConfig"
QT_MOC_LITERAL(9, 120, 20), // "showActivitiesConfig"
QT_MOC_LITERAL(10, 141, 7), // "hideAll"
QT_MOC_LITERAL(11, 149, 20), // "addChannelShowDialog"
QT_MOC_LITERAL(12, 170, 25), // "on_editChannelBtn_clicked"
QT_MOC_LITERAL(13, 196, 27), // "on_removeChannelBtn_clicked"
QT_MOC_LITERAL(14, 224, 21), // "on_kickButton_clicked"
QT_MOC_LITERAL(15, 246, 22), // "on_blockButton_clicked"
QT_MOC_LITERAL(16, 269, 22), // "on_unbanButton_clicked"
QT_MOC_LITERAL(17, 292, 21), // "on_moveButton_clicked"
QT_MOC_LITERAL(18, 314, 32), // "on_clearActivitiesButton_clicked"
QT_MOC_LITERAL(19, 347, 27) // "on_clearEventButton_clicked"

    },
    "MainWindow\0updateUserList\0\0logToFile\0"
    "handleSwitch\0showGeneralConfig\0"
    "showUsersConfig\0showChannelsConfig\0"
    "showEventsConfig\0showActivitiesConfig\0"
    "hideAll\0addChannelShowDialog\0"
    "on_editChannelBtn_clicked\0"
    "on_removeChannelBtn_clicked\0"
    "on_kickButton_clicked\0on_blockButton_clicked\0"
    "on_unbanButton_clicked\0on_moveButton_clicked\0"
    "on_clearActivitiesButton_clicked\0"
    "on_clearEventButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x08 /* Private */,
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    0,  114,    2, 0x08 /* Private */,
      13,    0,  115,    2, 0x08 /* Private */,
      14,    0,  116,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,
      16,    0,  118,    2, 0x08 /* Private */,
      17,    0,  119,    2, 0x08 /* Private */,
      18,    0,  120,    2, 0x08 /* Private */,
      19,    0,  121,    2, 0x08 /* Private */,

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
        case 1: _t->logToFile(); break;
        case 2: _t->handleSwitch(); break;
        case 3: _t->showGeneralConfig(); break;
        case 4: _t->showUsersConfig(); break;
        case 5: _t->showChannelsConfig(); break;
        case 6: _t->showEventsConfig(); break;
        case 7: _t->showActivitiesConfig(); break;
        case 8: _t->hideAll(); break;
        case 9: _t->addChannelShowDialog(); break;
        case 10: _t->on_editChannelBtn_clicked(); break;
        case 11: _t->on_removeChannelBtn_clicked(); break;
        case 12: _t->on_kickButton_clicked(); break;
        case 13: _t->on_blockButton_clicked(); break;
        case 14: _t->on_unbanButton_clicked(); break;
        case 15: _t->on_moveButton_clicked(); break;
        case 16: _t->on_clearActivitiesButton_clicked(); break;
        case 17: _t->on_clearEventButton_clicked(); break;
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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
