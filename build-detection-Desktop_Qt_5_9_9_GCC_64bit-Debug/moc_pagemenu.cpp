/****************************************************************************
** Meta object code from reading C++ file 'pagemenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../t/QT_final/pagemenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagemenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PageMenu_t {
    QByteArrayData data[11];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PageMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PageMenu_t qt_meta_stringdata_PageMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PageMenu"
QT_MOC_LITERAL(1, 9, 10), // "changePage"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "PageMenu*"
QT_MOC_LITERAL(4, 31, 4), // "menu"
QT_MOC_LITERAL(5, 36, 5), // "index"
QT_MOC_LITERAL(6, 42, 15), // "onButtonClicked"
QT_MOC_LITERAL(7, 58, 16), // "onButton2Clicked"
QT_MOC_LITERAL(8, 75, 16), // "onButton3Clicked"
QT_MOC_LITERAL(9, 92, 16), // "onButton4Clicked"
QT_MOC_LITERAL(10, 109, 16) // "onButton5Clicked"

    },
    "PageMenu\0changePage\0\0PageMenu*\0menu\0"
    "index\0onButtonClicked\0onButton2Clicked\0"
    "onButton3Clicked\0onButton4Clicked\0"
    "onButton5Clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PageMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PageMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PageMenu *_t = static_cast<PageMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changePage((*reinterpret_cast< PageMenu*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onButtonClicked(); break;
        case 2: _t->onButton2Clicked(); break;
        case 3: _t->onButton3Clicked(); break;
        case 4: _t->onButton4Clicked(); break;
        case 5: _t->onButton5Clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PageMenu* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PageMenu::*_t)(PageMenu * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PageMenu::changePage)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PageMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageMenu.data,
      qt_meta_data_PageMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PageMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PageMenu.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PageMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PageMenu::changePage(PageMenu * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
