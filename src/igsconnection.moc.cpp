/****************************************************************************
** IGSConnection meta object code from reading C++ file 'igsconnection.h'
**
** Created: Sat Jul 12 14:43:04 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "igsconnection.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *IGSConnection::className() const
{
    return "IGSConnection";
}

QMetaObject *IGSConnection::metaObj = 0;
static QMetaObjectCleanUp cleanUp_IGSConnection( "IGSConnection", &IGSConnection::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString IGSConnection::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IGSConnection", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString IGSConnection::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IGSConnection", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* IGSConnection::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"OnHostFound", 0, 0 };
    static const QUMethod slot_1 = {"OnConnected", 0, 0 };
    static const QUMethod slot_2 = {"OnReadyRead", 0, 0 };
    static const QUMethod slot_3 = {"OnConnectionClosed", 0, 0 };
    static const QUMethod slot_4 = {"OnDelayedCloseFinish", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"OnBytesWritten", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"OnError", 1, param_slot_6 };
    static const QMetaData slot_tbl[] = {
	{ "OnHostFound()", &slot_0, QMetaData::Private },
	{ "OnConnected()", &slot_1, QMetaData::Private },
	{ "OnReadyRead()", &slot_2, QMetaData::Private },
	{ "OnConnectionClosed()", &slot_3, QMetaData::Private },
	{ "OnDelayedCloseFinish()", &slot_4, QMetaData::Private },
	{ "OnBytesWritten(int)", &slot_5, QMetaData::Private },
	{ "OnError(int)", &slot_6, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"signal_setBytesIn", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"signal_setBytesOut", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "signal_setBytesIn(int)", &signal_0, QMetaData::Public },
	{ "signal_setBytesOut(int)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"IGSConnection", parentObject,
	slot_tbl, 7,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_IGSConnection.setMetaObject( metaObj );
    return metaObj;
}

void* IGSConnection::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "IGSConnection" ) )
	return this;
    if ( !qstrcmp( clname, "IGSInterface" ) )
	return (IGSInterface*)this;
    return QObject::qt_cast( clname );
}

// SIGNAL signal_setBytesIn
void IGSConnection::signal_setBytesIn( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL signal_setBytesOut
void IGSConnection::signal_setBytesOut( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool IGSConnection::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: OnHostFound(); break;
    case 1: OnConnected(); break;
    case 2: OnReadyRead(); break;
    case 3: OnConnectionClosed(); break;
    case 4: OnDelayedCloseFinish(); break;
    case 5: OnBytesWritten((int)static_QUType_int.get(_o+1)); break;
    case 6: OnError((int)static_QUType_int.get(_o+1)); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool IGSConnection::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: signal_setBytesIn((int)static_QUType_int.get(_o+1)); break;
    case 1: signal_setBytesOut((int)static_QUType_int.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool IGSConnection::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool IGSConnection::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
