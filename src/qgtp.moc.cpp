/****************************************************************************
** QGtp meta object code from reading C++ file 'qgtp.h'
**
** Created: Sat Jul 12 14:43:02 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "qgtp.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QGtp::className() const
{
    return "QGtp";
}

QMetaObject *QGtp::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QGtp( "QGtp", &QGtp::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QGtp::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QGtp", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QGtp::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QGtp", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QGtp::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"slot_readFromStdout", 0, 0 };
    static const QUMethod slot_1 = {"slot_processExited", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "slot_readFromStdout()", &slot_0, QMetaData::Public },
	{ "slot_processExited()", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QGtp", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QGtp.setMetaObject( metaObj );
    return metaObj;
}

void* QGtp::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QGtp" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QGtp::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slot_readFromStdout(); break;
    case 1: slot_processExited(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QGtp::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QGtp::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QGtp::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
