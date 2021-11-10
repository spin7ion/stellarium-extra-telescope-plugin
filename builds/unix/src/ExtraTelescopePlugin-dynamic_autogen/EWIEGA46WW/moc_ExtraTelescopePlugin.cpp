/****************************************************************************
** Meta object code from reading C++ file 'ExtraTelescopePlugin.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ExtraTelescopePlugin.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExtraTelescopePlugin.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExtraTelescopePlugin_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtraTelescopePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtraTelescopePlugin_t qt_meta_stringdata_ExtraTelescopePlugin = {
    {
QT_MOC_LITERAL(0, 0, 20) // "ExtraTelescopePlugin"

    },
    "ExtraTelescopePlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtraTelescopePlugin[] = {

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

void ExtraTelescopePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ExtraTelescopePlugin::staticMetaObject = { {
    &StelModule::staticMetaObject,
    qt_meta_stringdata_ExtraTelescopePlugin.data,
    qt_meta_data_ExtraTelescopePlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExtraTelescopePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtraTelescopePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExtraTelescopePlugin.stringdata0))
        return static_cast<void*>(this);
    return StelModule::qt_metacast(_clname);
}

int ExtraTelescopePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StelModule::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ExtraTelescopePluginInterface_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtraTelescopePluginInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtraTelescopePluginInterface_t qt_meta_stringdata_ExtraTelescopePluginInterface = {
    {
QT_MOC_LITERAL(0, 0, 29) // "ExtraTelescopePluginInterface"

    },
    "ExtraTelescopePluginInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtraTelescopePluginInterface[] = {

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

void ExtraTelescopePluginInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ExtraTelescopePluginInterface::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ExtraTelescopePluginInterface.data,
    qt_meta_data_ExtraTelescopePluginInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExtraTelescopePluginInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtraTelescopePluginInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExtraTelescopePluginInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "StelPluginInterface"))
        return static_cast< StelPluginInterface*>(this);
    if (!strcmp(_clname, "org.stellarium.StelPluginInterface/2.0"))
        return static_cast< StelPluginInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int ExtraTelescopePluginInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x26,  'o',  'r',  'g',  '.',  's', 
    't',  'e',  'l',  'l',  'a',  'r',  'i',  'u', 
    'm',  '.',  'S',  't',  'e',  'l',  'P',  'l', 
    'u',  'g',  'i',  'n',  'I',  'n',  't',  'e', 
    'r',  'f',  'a',  'c',  'e',  '/',  '2',  '.', 
    '0', 
    // "className"
    0x03,  0x78,  0x1d,  'E',  'x',  't',  'r',  'a', 
    'T',  'e',  'l',  'e',  's',  'c',  'o',  'p', 
    'e',  'P',  'l',  'u',  'g',  'i',  'n',  'I', 
    'n',  't',  'e',  'r',  'f',  'a',  'c',  'e', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(ExtraTelescopePluginInterface, ExtraTelescopePluginInterface)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
