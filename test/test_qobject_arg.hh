/*
    This file is part of LibQtLua.

    LibQtLua is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    LibQtLua is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with LibQtLua.  If not, see <http://www.gnu.org/licenses/>.

    Copyright (C) 2008, Alexandre Becoulet <alexandre.becoulet@free.fr>

*/

#include <QtLua/State>
#include <QtLua/Value>
#include <QtLua/UserData>

#include <QDebug>
#include <QObject>

using namespace QtLua;

struct MyObjectUD : public QObject
{
  Q_OBJECT;
public:
  MyObjectUD()
    : QObject(0)
  {
  }

#if QT_VERSION >= 0x040500
  Q_INVOKABLE
#endif
  MyObjectUD(int num, QObject *parent)
    : QObject(parent)
  {
    assert(num == 42);
    assert(!parent);
  }

  void send(QtLua::UserData::ptr ud)
  {
    emit ud_arg(ud);
  }

#if QT_VERSION >= 0x040500
  Q_INVOKABLE
  double foo(double a)
  {
    return a * 42;
  }
#endif

  QtLua::UserData::ptr _ud;

 public slots:
  void ud_slot(QtLua::UserData::ptr ud)
  {
    _ud = ud;
  }

 signals:
  void ud_arg(QtLua::UserData::ptr ud);

};

struct MyData : public UserData
{
  MyData(double d)
    : _data(d)
  {
  }

  Value meta_index(State *ls, const Value &key)
  {
    return Value(ls, _data);
  }

  double _data;
};

struct MyObjectQO : public QObject
{
  Q_OBJECT;
public:
  MyObjectQO()
    : QObject(0),
      _qo(0)
  {
  }

  void send(QObject *qo)
  {
    emit qo_arg(qo);
  }

  QObject * _qo;

 public slots:
  void qo_slot(QObject *qo)
  {
    _qo = qo;
  }

 signals:
  void qo_arg(QObject *o);
};

