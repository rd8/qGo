/****************************************************************************
** Talk meta object code from reading C++ file 'tables.h'
**
** Created: Sat Jul 12 14:43:01 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "tables.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Talk::className() const
{
    return "Talk";
}

QMetaObject *Talk::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Talk( "Talk", &Talk::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Talk::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Talk", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Talk::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Talk", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Talk::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = TalkGui::staticMetaObject();
    static const QUMethod slot_0 = {"slot_returnPressed", 0, 0 };
    static const QUMethod slot_1 = {"slot_pbRelTab", 0, 0 };
    static const QUMethod slot_2 = {"slot_match", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "slot_returnPressed()", &slot_0, QMetaData::Public },
	{ "slot_pbRelTab()", &slot_1, QMetaData::Public },
	{ "slot_match()", &slot_2, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::InOut },
	{ 0, &static_QUType_QString, 0, QUParameter::InOut }
    };
    static const QUMethod signal_0 = {"signal_talkto", 2, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod signal_1 = {"signal_pbRelOneTab", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"signal_matchrequest", 2, param_signal_2 };
    static const QMetaData signal_tbl[] = {
	{ "signal_talkto(QString&,QString&)", &signal_0, QMetaData::Public },
	{ "signal_pbRelOneTab(QWidget*)", &signal_1, QMetaData::Public },
	{ "signal_matchrequest(const QString&,bool)", &signal_2, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"Talk", parentObject,
	slot_tbl, 3,
	signal_tbl, 3,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Talk.setMetaObject( metaObj );
    return metaObj;
}

void* Talk::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Talk" ) )
	return this;
    return TalkGui::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL signal_talkto
void Talk::signal_talkto( QString& t0, QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
    t0 = static_QUType_QString.get(o+1);
    t1 = static_QUType_QString.get(o+2);
}

// SIGNAL signal_pbRelOneTab
void Talk::signal_pbRelOneTab( QWidget* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL signal_matchrequest
void Talk::signal_matchrequest( const QString& t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

bool Talk::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slot_returnPressed(); break;
    case 1: slot_pbRelTab(); break;
    case 2: slot_match(); break;
    default:
	return TalkGui::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Talk::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: signal_talkto((QString&)static_QUType_QString.get(_o+1),(QString&)static_QUType_QString.get(_o+2)); break;
    case 1: signal_pbRelOneTab((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 2: signal_matchrequest((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    default:
	return TalkGui::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool Talk::qt_property( int id, int f, QVariant* v)
{
    return TalkGui::qt_property( id, f, v);
}

bool Talk::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
