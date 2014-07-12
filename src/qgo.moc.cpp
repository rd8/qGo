/****************************************************************************
** qGo meta object code from reading C++ file 'qgo.h'
**
** Created: Sat Jul 12 14:43:09 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "qgo.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *qGo::className() const
{
    return "qGo";
}

QMetaObject *qGo::metaObj = 0;
static QMetaObjectCleanUp cleanUp_qGo( "qGo", &qGo::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString qGo::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "qGo", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString qGo::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "qGo", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* qGo::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"quit", 0, 0 };
    static const QUMethod slot_1 = {"slotHelpAbout", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "quit()", &slot_0, QMetaData::Public },
	{ "slotHelpAbout()", &slot_1, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"signal_leave_qgo", 0, 0 };
    static const QUMethod signal_1 = {"signal_updateFont", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "signal_leave_qgo()", &signal_0, QMetaData::Public },
	{ "signal_updateFont()", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"qGo", parentObject,
	slot_tbl, 2,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_qGo.setMetaObject( metaObj );
    return metaObj;
}

void* qGo::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "qGo" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL signal_leave_qgo
void qGo::signal_leave_qgo()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL signal_updateFont
void qGo::signal_updateFont()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool qGo::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: quit(); break;
    case 1: slotHelpAbout(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool qGo::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: signal_leave_qgo(); break;
    case 1: signal_updateFont(); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool qGo::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool qGo::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
