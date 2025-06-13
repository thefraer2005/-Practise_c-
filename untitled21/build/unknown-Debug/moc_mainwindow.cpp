/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Рабочий стол/fuckoff/untitled21/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[50];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[9];
    char stringdata5[9];
    char stringdata6[9];
    char stringdata7[16];
    char stringdata8[17];
    char stringdata9[5];
    char stringdata10[15];
    char stringdata11[18];
    char stringdata12[10];
    char stringdata13[6];
    char stringdata14[19];
    char stringdata15[17];
    char stringdata16[5];
    char stringdata17[13];
    char stringdata18[15];
    char stringdata19[12];
    char stringdata20[7];
    char stringdata21[15];
    char stringdata22[19];
    char stringdata23[15];
    char stringdata24[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 13),  // "showTaskInput"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 7),  // "addTask"
        QT_MOC_LITERAL(34, 8),  // "taskText"
        QT_MOC_LITERAL(43, 8),  // "taskDate"
        QT_MOC_LITERAL(52, 8),  // "priority"
        QT_MOC_LITERAL(61, 15),  // "updateTaskLists"
        QT_MOC_LITERAL(77, 16),  // "loadTasksForDate"
        QT_MOC_LITERAL(94, 4),  // "date"
        QT_MOC_LITERAL(99, 14),  // "onDateSelected"
        QT_MOC_LITERAL(114, 17),  // "loadTasksForState"
        QT_MOC_LITERAL(132, 9),  // "TaskState"
        QT_MOC_LITERAL(142, 5),  // "state"
        QT_MOC_LITERAL(148, 18),  // "animateTaskRemoval"
        QT_MOC_LITERAL(167, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(184, 4),  // "item"
        QT_MOC_LITERAL(189, 12),  // "deleteFromDB"
        QT_MOC_LITERAL(202, 14),  // "updateCalendar"
        QT_MOC_LITERAL(217, 11),  // "getTaskText"
        QT_MOC_LITERAL(229, 6),  // "taskId"
        QT_MOC_LITERAL(236, 14),  // "checkReminders"
        QT_MOC_LITERAL(251, 18),  // "showReminderDialog"
        QT_MOC_LITERAL(270, 14),  // "saveTasksOrder"
        QT_MOC_LITERAL(285, 22)   // "showReminderTimeDialog"
    },
    "MainWindow",
    "showTaskInput",
    "",
    "addTask",
    "taskText",
    "taskDate",
    "priority",
    "updateTaskLists",
    "loadTasksForDate",
    "date",
    "onDateSelected",
    "loadTasksForState",
    "TaskState",
    "state",
    "animateTaskRemoval",
    "QListWidgetItem*",
    "item",
    "deleteFromDB",
    "updateCalendar",
    "getTaskText",
    "taskId",
    "checkReminders",
    "showReminderDialog",
    "saveTasksOrder",
    "showReminderTimeDialog"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    3,   93,    2, 0x08,    2 /* Private */,
       7,    0,  100,    2, 0x08,    6 /* Private */,
       8,    1,  101,    2, 0x08,    7 /* Private */,
      10,    1,  104,    2, 0x08,    9 /* Private */,
      11,    2,  107,    2, 0x08,   11 /* Private */,
      14,    2,  112,    2, 0x08,   14 /* Private */,
      18,    0,  117,    2, 0x08,   17 /* Private */,
      19,    1,  118,    2, 0x08,   18 /* Private */,
      21,    0,  121,    2, 0x08,   20 /* Private */,
      22,    2,  122,    2, 0x08,   21 /* Private */,
      23,    0,  127,    2, 0x08,   24 /* Private */,
      24,    2,  128,    2, 0x08,   25 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QDate, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    9,
    QMetaType::Void, QMetaType::QDate,    9,
    QMetaType::Void, QMetaType::QDate, 0x80000000 | 12,    9,   13,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Bool,   16,   17,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   20,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   20,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'showTaskInput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateTaskLists'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadTasksForDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'onDateSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'loadTasksForState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        QtPrivate::TypeAndForceComplete<TaskState, std::false_type>,
        // method 'animateTaskRemoval'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateCalendar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getTaskText'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'checkReminders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showReminderDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'saveTasksOrder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showReminderTimeDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showTaskInput(); break;
        case 1: _t->addTask((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->updateTaskLists(); break;
        case 3: _t->loadTasksForDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 4: _t->onDateSelected((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 5: _t->loadTasksForState((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TaskState>>(_a[2]))); break;
        case 6: _t->animateTaskRemoval((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 7: _t->updateCalendar(); break;
        case 8: { QString _r = _t->getTaskText((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->checkReminders(); break;
        case 10: _t->showReminderDialog((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->saveTasksOrder(); break;
        case 12: _t->showReminderTimeDialog((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
