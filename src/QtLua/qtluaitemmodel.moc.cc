/****************************************************************************
** Meta object code from reading C++ file 'qtluaitemmodel.hh'
**
** Created: Sat May 16 16:11:02 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtluaitemmodel.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtluaitemmodel.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_QtLua__ItemModel[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_QtLua__ItemModel[] = {
    "QtLua::ItemModel\0"
};

const QMetaObject QtLua::ItemModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QtLua__ItemModel,
      qt_meta_data_QtLua__ItemModel, 0 }
};

const QMetaObject *QtLua::ItemModel::metaObject() const
{
    return &staticMetaObject;
}

void *QtLua::ItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtLua__ItemModel))
	return static_cast<void*>(const_cast< ItemModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int QtLua::ItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}