/****************************************************************************
** Meta object code from reading C++ file 'DiaryWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Рабочий стол/fuckoff/untitled21/DiaryWidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DiaryWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DiaryWidget_t {
    uint offsetsAndSizes[14];
    char stringdata0[12];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[13];
    char stringdata5[11];
    char stringdata6[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DiaryWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DiaryWidget_t qt_meta_stringdata_DiaryWidget = {
    {
        QT_MOC_LITERAL(0, 11),  // "DiaryWidget"
        QT_MOC_LITERAL(12, 13),  // "showEntryForm"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 9),  // "saveEntry"
        QT_MOC_LITERAL(37, 12),  // "addHighlight"
        QT_MOC_LITERAL(50, 10),  // "addInsight"
        QT_MOC_LITERAL(61, 12)   // "addProudItem"
    },
    "DiaryWidget",
    "showEntryForm",
    "",
    "saveEntry",
    "addHighlight",
    "addInsight",
    "addProudItem"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DiaryWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DiaryWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DiaryWidget.offsetsAndSizes,
    qt_meta_data_DiaryWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DiaryWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DiaryWidget, std::true_type>,
        // method 'showEntryForm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveEntry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addHighlight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addInsight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addProudItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DiaryWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiaryWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showEntryForm(); break;
        case 1: _t->saveEntry(); break;
        case 2: _t->addHighlight(); break;
        case 3: _t->addInsight(); break;
        case 4: _t->addProudItem(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *DiaryWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiaryWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DiaryWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DiaryWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
