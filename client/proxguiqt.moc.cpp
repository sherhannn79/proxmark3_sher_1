/****************************************************************************
** Meta object code from reading C++ file 'proxguiqt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "proxguiqt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'proxguiqt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProxWidget_t {
    QByteArrayData data[9];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProxWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProxWidget_t qt_meta_stringdata_ProxWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ProxWidget"
QT_MOC_LITERAL(1, 11, 14), // "applyOperation"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "stickOperation"
QT_MOC_LITERAL(4, 42, 16), // "vchange_autocorr"
QT_MOC_LITERAL(5, 59, 1), // "v"
QT_MOC_LITERAL(6, 61, 15), // "vchange_askedge"
QT_MOC_LITERAL(7, 77, 15), // "vchange_dthr_up"
QT_MOC_LITERAL(8, 93, 17) // "vchange_dthr_down"

    },
    "ProxWidget\0applyOperation\0\0stickOperation\0"
    "vchange_autocorr\0v\0vchange_askedge\0"
    "vchange_dthr_up\0vchange_dthr_down"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProxWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    1,   46,    2, 0x0a /* Public */,
       6,    1,   49,    2, 0x0a /* Public */,
       7,    1,   52,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void ProxWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProxWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->applyOperation(); break;
        case 1: _t->stickOperation(); break;
        case 2: _t->vchange_autocorr((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->vchange_askedge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->vchange_dthr_up((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->vchange_dthr_down((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProxWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ProxWidget.data,
    qt_meta_data_ProxWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProxWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProxWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProxWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProxWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_WorkerThread_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WorkerThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WorkerThread_t qt_meta_stringdata_WorkerThread = {
    {
QT_MOC_LITERAL(0, 0, 12) // "WorkerThread"

    },
    "WorkerThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WorkerThread[] = {

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

void WorkerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WorkerThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_WorkerThread.data,
    qt_meta_data_WorkerThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WorkerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WorkerThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int WorkerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ProxGuiQT_t {
    QByteArrayData data[11];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProxGuiQT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProxGuiQT_t qt_meta_stringdata_ProxGuiQT = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ProxGuiQT"
QT_MOC_LITERAL(1, 10, 21), // "ShowGraphWindowSignal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 24), // "RepaintGraphWindowSignal"
QT_MOC_LITERAL(4, 58, 21), // "HideGraphWindowSignal"
QT_MOC_LITERAL(5, 80, 10), // "ExitSignal"
QT_MOC_LITERAL(6, 91, 16), // "_ShowGraphWindow"
QT_MOC_LITERAL(7, 108, 19), // "_RepaintGraphWindow"
QT_MOC_LITERAL(8, 128, 16), // "_HideGraphWindow"
QT_MOC_LITERAL(9, 145, 5), // "_Exit"
QT_MOC_LITERAL(10, 151, 20) // "_StartProxmarkThread"

    },
    "ProxGuiQT\0ShowGraphWindowSignal\0\0"
    "RepaintGraphWindowSignal\0HideGraphWindowSignal\0"
    "ExitSignal\0_ShowGraphWindow\0"
    "_RepaintGraphWindow\0_HideGraphWindow\0"
    "_Exit\0_StartProxmarkThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProxGuiQT[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ProxGuiQT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProxGuiQT *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowGraphWindowSignal(); break;
        case 1: _t->RepaintGraphWindowSignal(); break;
        case 2: _t->HideGraphWindowSignal(); break;
        case 3: _t->ExitSignal(); break;
        case 4: _t->_ShowGraphWindow(); break;
        case 5: _t->_RepaintGraphWindow(); break;
        case 6: _t->_HideGraphWindow(); break;
        case 7: _t->_Exit(); break;
        case 8: _t->_StartProxmarkThread(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProxGuiQT::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProxGuiQT::ShowGraphWindowSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProxGuiQT::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProxGuiQT::RepaintGraphWindowSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ProxGuiQT::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProxGuiQT::HideGraphWindowSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ProxGuiQT::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProxGuiQT::ExitSignal)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ProxGuiQT::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ProxGuiQT.data,
    qt_meta_data_ProxGuiQT,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProxGuiQT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProxGuiQT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProxGuiQT.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ProxGuiQT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ProxGuiQT::ShowGraphWindowSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ProxGuiQT::RepaintGraphWindowSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ProxGuiQT::HideGraphWindowSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ProxGuiQT::ExitSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
