/****************************************************************************
** Meta object code from reading C++ file 'plugin.hh'
**
** Created: Sat May 16 16:11:05 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plugin.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugin.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_ExamplePlugin[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_ExamplePlugin[] = {
    "ExamplePlugin\0"
};

const QMetaObject ExamplePlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ExamplePlugin,
      qt_meta_data_ExamplePlugin, 0 }
};

const QMetaObject *ExamplePlugin::metaObject() const
{
    return &staticMetaObject;
}

void *ExamplePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExamplePlugin))
	return static_cast<void*>(const_cast< ExamplePlugin*>(this));
    if (!strcmp(_clname, "QtLua::PluginInterface"))
	return static_cast< QtLua::PluginInterface*>(const_cast< ExamplePlugin*>(this));
    if (!strcmp(_clname, "QtLua.PluginInterface/1.0"))
	return static_cast< QtLua::PluginInterface*>(const_cast< ExamplePlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int ExamplePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}