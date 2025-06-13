/****************************************************************************
** Meta object code from reading C++ file 'ProjectWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Рабочий стол/fuckoff/untitled21/ProjectWidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProjectWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ProjectWidget_t {
    uint offsetsAndSizes[88];
    char stringdata0[14];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[12];
    char stringdata5[10];
    char stringdata6[9];
    char stringdata7[23];
    char stringdata8[10];
    char stringdata9[17];
    char stringdata10[9];
    char stringdata11[20];
    char stringdata12[7];
    char stringdata13[22];
    char stringdata14[10];
    char stringdata15[20];
    char stringdata16[12];
    char stringdata17[23];
    char stringdata18[10];
    char stringdata19[25];
    char stringdata20[11];
    char stringdata21[25];
    char stringdata22[16];
    char stringdata23[16];
    char stringdata24[15];
    char stringdata25[13];
    char stringdata26[17];
    char stringdata27[6];
    char stringdata28[12];
    char stringdata29[17];
    char stringdata30[17];
    char stringdata31[5];
    char stringdata32[11];
    char stringdata33[11];
    char stringdata34[21];
    char stringdata35[7];
    char stringdata36[27];
    char stringdata37[20];
    char stringdata38[12];
    char stringdata39[18];
    char stringdata40[22];
    char stringdata41[14];
    char stringdata42[16];
    char stringdata43[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ProjectWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ProjectWidget_t qt_meta_stringdata_ProjectWidget = {
    {
        QT_MOC_LITERAL(0, 13),  // "ProjectWidget"
        QT_MOC_LITERAL(14, 19),  // "addProjectRequested"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 4),  // "name"
        QT_MOC_LITERAL(40, 11),  // "description"
        QT_MOC_LITERAL(52, 9),  // "startDate"
        QT_MOC_LITERAL(62, 8),  // "deadline"
        QT_MOC_LITERAL(71, 22),  // "deleteProjectRequested"
        QT_MOC_LITERAL(94, 9),  // "projectId"
        QT_MOC_LITERAL(104, 16),  // "addTaskRequested"
        QT_MOC_LITERAL(121, 8),  // "taskText"
        QT_MOC_LITERAL(130, 19),  // "deleteTaskRequested"
        QT_MOC_LITERAL(150, 6),  // "taskId"
        QT_MOC_LITERAL(157, 21),  // "taskCompletionChanged"
        QT_MOC_LITERAL(179, 9),  // "completed"
        QT_MOC_LITERAL(189, 19),  // "addSubTaskRequested"
        QT_MOC_LITERAL(209, 11),  // "subTaskText"
        QT_MOC_LITERAL(221, 22),  // "deleteSubTaskRequested"
        QT_MOC_LITERAL(244, 9),  // "subTaskId"
        QT_MOC_LITERAL(254, 24),  // "subTaskCompletionChanged"
        QT_MOC_LITERAL(279, 10),  // "deleteTask"
        QT_MOC_LITERAL(290, 24),  // "showDeadlineNotification"
        QT_MOC_LITERAL(315, 15),  // "isDeadlineToday"
        QT_MOC_LITERAL(331, 15),  // "loadProjectsRaw"
        QT_MOC_LITERAL(347, 14),  // "QList<Project>"
        QT_MOC_LITERAL(362, 12),  // "loadProjects"
        QT_MOC_LITERAL(375, 16),  // "selectDateDialog"
        QT_MOC_LITERAL(392, 5),  // "title"
        QT_MOC_LITERAL(398, 11),  // "initialDate"
        QT_MOC_LITERAL(410, 16),  // "updateTaskStatus"
        QT_MOC_LITERAL(427, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(444, 4),  // "item"
        QT_MOC_LITERAL(449, 10),  // "inProgress"
        QT_MOC_LITERAL(460, 10),  // "addProject"
        QT_MOC_LITERAL(471, 20),  // "onProjectItemClicked"
        QT_MOC_LITERAL(492, 6),  // "column"
        QT_MOC_LITERAL(499, 26),  // "onProjectItemDoubleClicked"
        QT_MOC_LITERAL(526, 19),  // "loadTasksForProject"
        QT_MOC_LITERAL(546, 11),  // "projectItem"
        QT_MOC_LITERAL(558, 17),  // "showAddTaskDialog"
        QT_MOC_LITERAL(576, 21),  // "deleteSelectedProject"
        QT_MOC_LITERAL(598, 13),  // "onItemClicked"
        QT_MOC_LITERAL(612, 15),  // "showContextMenu"
        QT_MOC_LITERAL(628, 3)   // "pos"
    },
    "ProjectWidget",
    "addProjectRequested",
    "",
    "name",
    "description",
    "startDate",
    "deadline",
    "deleteProjectRequested",
    "projectId",
    "addTaskRequested",
    "taskText",
    "deleteTaskRequested",
    "taskId",
    "taskCompletionChanged",
    "completed",
    "addSubTaskRequested",
    "subTaskText",
    "deleteSubTaskRequested",
    "subTaskId",
    "subTaskCompletionChanged",
    "deleteTask",
    "showDeadlineNotification",
    "isDeadlineToday",
    "loadProjectsRaw",
    "QList<Project>",
    "loadProjects",
    "selectDateDialog",
    "title",
    "initialDate",
    "updateTaskStatus",
    "QTreeWidgetItem*",
    "item",
    "inProgress",
    "addProject",
    "onProjectItemClicked",
    "column",
    "onProjectItemDoubleClicked",
    "loadTasksForProject",
    "projectItem",
    "showAddTaskDialog",
    "deleteSelectedProject",
    "onItemClicked",
    "showContextMenu",
    "pos"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ProjectWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,  146,    2, 0x06,    1 /* Public */,
       7,    1,  155,    2, 0x06,    6 /* Public */,
       9,    4,  158,    2, 0x06,    8 /* Public */,
      11,    1,  167,    2, 0x06,   13 /* Public */,
      13,    2,  170,    2, 0x06,   15 /* Public */,
      15,    2,  175,    2, 0x06,   18 /* Public */,
      17,    1,  180,    2, 0x06,   21 /* Public */,
      19,    2,  183,    2, 0x06,   23 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      20,    1,  188,    2, 0x0a,   26 /* Public */,
      21,    2,  191,    2, 0x0a,   28 /* Public */,
      23,    0,  196,    2, 0x10a,   31 /* Public | MethodIsConst  */,
      25,    0,  197,    2, 0x0a,   32 /* Public */,
      26,    2,  198,    2, 0x0a,   33 /* Public */,
      29,    3,  203,    2, 0x08,   36 /* Private */,
      33,    0,  210,    2, 0x08,   40 /* Private */,
      34,    2,  211,    2, 0x08,   41 /* Private */,
      36,    2,  216,    2, 0x08,   44 /* Private */,
      37,    2,  221,    2, 0x08,   47 /* Private */,
      39,    1,  226,    2, 0x08,   50 /* Private */,
      40,    0,  229,    2, 0x08,   52 /* Private */,
      41,    2,  230,    2, 0x08,   53 /* Private */,
      42,    1,  235,    2, 0x08,   56 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QDate, QMetaType::QDate,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QDate, QMetaType::QDate,    8,   10,    5,    6,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   12,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   12,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   18,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    8,   22,
    0x80000000 | 24,
    QMetaType::Void,
    QMetaType::QDate, QMetaType::QString, QMetaType::QDate,   27,   28,
    QMetaType::Void, 0x80000000 | 30, QMetaType::Bool, QMetaType::Bool,   31,   14,   32,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30, QMetaType::Int,   31,   35,
    QMetaType::Void, 0x80000000 | 30, QMetaType::Int,   31,   35,
    QMetaType::Void, 0x80000000 | 30, QMetaType::Int,   38,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30, QMetaType::Int,   31,   35,
    QMetaType::Void, QMetaType::QPoint,   43,

       0        // eod
};

Q_CONSTINIT const QMetaObject ProjectWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ProjectWidget.offsetsAndSizes,
    qt_meta_data_ProjectWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ProjectWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProjectWidget, std::true_type>,
        // method 'addProjectRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'deleteProjectRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'addTaskRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'deleteTaskRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'taskCompletionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'addSubTaskRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deleteSubTaskRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'subTaskCompletionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'deleteTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showDeadlineNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'loadProjectsRaw'
        QtPrivate::TypeAndForceComplete<QVector<Project>, std::false_type>,
        // method 'loadProjects'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectDateDialog'
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'updateTaskStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'addProject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProjectItemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onProjectItemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'loadTasksForProject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showAddTaskDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'deleteSelectedProject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onItemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>
    >,
    nullptr
} };

void ProjectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addProjectRequested((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[4]))); break;
        case 1: _t->deleteProjectRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->addTaskRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[4]))); break;
        case 3: _t->deleteTaskRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->taskCompletionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 5: _t->addSubTaskRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->deleteSubTaskRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->subTaskCompletionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 8: _t->deleteTask((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->showDeadlineNotification((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 10: { QList<Project> _r = _t->loadProjectsRaw();
            if (_a[0]) *reinterpret_cast< QList<Project>*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->loadProjects(); break;
        case 12: { QDate _r = _t->selectDateDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDate*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->updateTaskStatus((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 14: _t->addProject(); break;
        case 15: _t->onProjectItemClicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 16: _t->onProjectItemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 17: _t->loadTasksForProject((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 18: _t->showAddTaskDialog((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->deleteSelectedProject(); break;
        case 20: _t->onItemClicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 21: _t->showContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProjectWidget::*)(const QString & , const QString & , const QDate & , const QDate & );
            if (_t _q_method = &ProjectWidget::addProjectRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProjectWidget::*)(int );
            if (_t _q_method = &ProjectWidget::deleteProjectRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ProjectWidget::*)(int , const QString & , const QDate & , const QDate & );
            if (_t _q_method = &ProjectWidget::addTaskRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ProjectWidget::*)(int );
            if (_t _q_method = &ProjectWidget::deleteTaskRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ProjectWidget::*)(int , bool );
            if (_t _q_method = &ProjectWidget::taskCompletionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ProjectWidget::*)(int , const QString & );
            if (_t _q_method = &ProjectWidget::addSubTaskRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ProjectWidget::*)(int );
            if (_t _q_method = &ProjectWidget::deleteSubTaskRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ProjectWidget::*)(int , bool );
            if (_t _q_method = &ProjectWidget::subTaskCompletionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *ProjectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProjectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProjectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void ProjectWidget::addProjectRequested(const QString & _t1, const QString & _t2, const QDate & _t3, const QDate & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProjectWidget::deleteProjectRequested(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProjectWidget::addTaskRequested(int _t1, const QString & _t2, const QDate & _t3, const QDate & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProjectWidget::deleteTaskRequested(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ProjectWidget::taskCompletionChanged(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ProjectWidget::addSubTaskRequested(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ProjectWidget::deleteSubTaskRequested(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ProjectWidget::subTaskCompletionChanged(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
