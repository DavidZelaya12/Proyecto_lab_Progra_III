/****************************************************************************
** Meta object code from reading C++ file 'cframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Proyecto_Lab/cframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cframe_t {
    QByteArrayData data[13];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cframe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cframe_t qt_meta_stringdata_Cframe = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Cframe"
QT_MOC_LITERAL(1, 7, 19), // "on_reservar_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 38), // "on_tipolaboratorio_currentInd..."
QT_MOC_LITERAL(4, 67, 4), // "arg1"
QT_MOC_LITERAL(5, 72, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(6, 100, 5), // "index"
QT_MOC_LITERAL(7, 106, 26), // "on_tabWidget_tabBarClicked"
QT_MOC_LITERAL(8, 133, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 155, 18), // "on_docente_clicked"
QT_MOC_LITERAL(10, 174, 20), // "on_educacion_clicked"
QT_MOC_LITERAL(11, 195, 25), // "on_administrativo_clicked"
QT_MOC_LITERAL(12, 221, 17) // "on_alumno_clicked"

    },
    "Cframe\0on_reservar_clicked\0\0"
    "on_tipolaboratorio_currentIndexChanged\0"
    "arg1\0on_tabWidget_currentChanged\0index\0"
    "on_tabWidget_tabBarClicked\0"
    "on_pushButton_clicked\0on_docente_clicked\0"
    "on_educacion_clicked\0on_administrativo_clicked\0"
    "on_alumno_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cframe[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       8,    0,   69,    2, 0x08 /* Private */,
       9,    0,   70,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Cframe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cframe *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_reservar_clicked(); break;
        case 1: _t->on_tipolaboratorio_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_docente_clicked(); break;
        case 6: _t->on_educacion_clicked(); break;
        case 7: _t->on_administrativo_clicked(); break;
        case 8: _t->on_alumno_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cframe::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Cframe.data,
    qt_meta_data_Cframe,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Cframe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cframe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cframe.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Cframe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
