/****************************************************************************
** TelnetInterface meta object code from reading C++ file 'telnet.h'
**
** Created: Sat Jul 12 14:43:08 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "telnet.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TelnetInterface::className() const
{
    return "TelnetInterface";
}

QMetaObject *TelnetInterface::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TelnetInterface( "TelnetInterface", &TelnetInterface::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TelnetInterface::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TelnetInterface", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TelnetInterface::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TelnetInterface", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TelnetInterface::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"textRecieved", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "textRecieved(const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"TelnetInterface", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TelnetInterface.setMetaObject( metaObj );
    return metaObj;
}

void* TelnetInterface::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TelnetInterface" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL textRecieved
void TelnetInterface::textRecieved( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool TelnetInterface::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool TelnetInterface::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: textRecieved((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool TelnetInterface::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool TelnetInterface::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *TelnetConnection::className() const
{
    return "TelnetConnection";
}

QMetaObject *TelnetConnection::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TelnetConnection( "TelnetConnection", &TelnetConnection::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TelnetConnection::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TelnetConnection", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TelnetConnection::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TelnetConnection", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TelnetConnection::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"slotHostConnect", 0, 0 };
    static const QUMethod slot_1 = {"slotHostDisconnect", 0, 0 };
    static const QUMethod slot_2 = {"slotHostQuit", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "slotHostConnect()", &slot_0, QMetaData::Public },
	{ "slotHostDisconnect()", &slot_1, QMetaData::Public },
	{ "slotHostQuit()", &slot_2, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"TelnetConnection", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TelnetConnection.setMetaObject( metaObj );
    return metaObj;
}

void* TelnetConnection::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TelnetConnection" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool TelnetConnection::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotHostConnect(); break;
    case 1: slotHostDisconnect(); break;
    case 2: slotHostQuit(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TelnetConnection::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool TelnetConnection::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool TelnetConnection::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
