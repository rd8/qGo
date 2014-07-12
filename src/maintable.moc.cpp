/****************************************************************************
** MainAppWidget meta object code from reading C++ file 'maintable.h'
**
** Created: Sat Jul 12 14:42:59 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "maintable.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MainAppWidget::className() const
{
    return "MainAppWidget";
}

QMetaObject *MainAppWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MainAppWidget( "MainAppWidget", &MainAppWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MainAppWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainAppWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MainAppWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainAppWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MainAppWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"slot_cmdactivated", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"slot_cmdactivated_int", 1, param_slot_1 };
    static const QUMethod slot_2 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "slot_cmdactivated(const QString&)", &slot_0, QMetaData::Public },
	{ "slot_cmdactivated_int(int)", &slot_1, QMetaData::Public },
	{ "languageChange()", &slot_2, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MainAppWidget", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MainAppWidget.setMetaObject( metaObj );
    return metaObj;
}

void* MainAppWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MainAppWidget" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool MainAppWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slot_cmdactivated((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: slot_cmdactivated_int((int)static_QUType_int.get(_o+1)); break;
    case 2: languageChange(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MainAppWidget::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MainAppWidget::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool MainAppWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *MainTable::className() const
{
    return "MainTable";
}

QMetaObject *MainTable::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MainTable( "MainTable", &MainTable::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MainTable::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainTable", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MainTable::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainTable", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MainTable::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"MainTable", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MainTable.setMetaObject( metaObj );
    return metaObj;
}

void* MainTable::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MainTable" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool MainTable::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool MainTable::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MainTable::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool MainTable::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
