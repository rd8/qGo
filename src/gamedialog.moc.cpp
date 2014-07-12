/****************************************************************************
** GameDialog meta object code from reading C++ file 'gamedialog.h'
**
** Created: Sat Jul 12 14:43:03 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "gamedialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *GameDialog::className() const
{
    return "GameDialog";
}

QMetaObject *GameDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_GameDialog( "GameDialog", &GameDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString GameDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GameDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString GameDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GameDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* GameDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = NewGameDialog::staticMetaObject();
    static const QUMethod slot_0 = {"slot_stats_opponent", 0, 0 };
    static const QUMethod slot_1 = {"slot_swapcolors", 0, 0 };
    static const QUMethod slot_2 = {"slot_pbsuggest", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"slot_offer", 1, param_slot_3 };
    static const QUMethod slot_4 = {"slot_decline", 0, 0 };
    static const QUMethod slot_5 = {"slot_changed", 0, 0 };
    static const QUMethod slot_6 = {"slot_cancel", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"slot_suggest", 5, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"slot_matchcreate", 2, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"slot_notopen", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"slot_komirequest", 4, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"slot_opponentopen", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"slot_dispute", 2, param_slot_12 };
    static const QMetaData slot_tbl[] = {
	{ "slot_stats_opponent()", &slot_0, QMetaData::Public },
	{ "slot_swapcolors()", &slot_1, QMetaData::Public },
	{ "slot_pbsuggest()", &slot_2, QMetaData::Public },
	{ "slot_offer(bool)", &slot_3, QMetaData::Public },
	{ "slot_decline()", &slot_4, QMetaData::Public },
	{ "slot_changed()", &slot_5, QMetaData::Public },
	{ "slot_cancel()", &slot_6, QMetaData::Public },
	{ "slot_suggest(const QString&,const QString&,const QString&,const QString&,int)", &slot_7, QMetaData::Public },
	{ "slot_matchcreate(const QString&,const QString&)", &slot_8, QMetaData::Public },
	{ "slot_notopen(const QString&)", &slot_9, QMetaData::Public },
	{ "slot_komirequest(const QString&,int,int,bool)", &slot_10, QMetaData::Public },
	{ "slot_opponentopen(const QString&)", &slot_11, QMetaData::Public },
	{ "slot_dispute(const QString&,const QString&)", &slot_12, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ "cmd", &static_QUType_QString, 0, QUParameter::In },
	{ "localecho", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"signal_sendcommand", 2, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "assessType", QUParameter::In }
    };
    static const QUMethod signal_1 = {"signal_matchsettings", 4, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"signal_removeDialog", 1, param_signal_2 };
    static const QMetaData signal_tbl[] = {
	{ "signal_sendcommand(const QString&,bool)", &signal_0, QMetaData::Public },
	{ "signal_matchsettings(const QString&,const QString&,const QString&,assessType)", &signal_1, QMetaData::Public },
	{ "signal_removeDialog(const QString&)", &signal_2, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"GameDialog", parentObject,
	slot_tbl, 13,
	signal_tbl, 3,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_GameDialog.setMetaObject( metaObj );
    return metaObj;
}

void* GameDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "GameDialog" ) )
	return this;
    if ( !qstrcmp( clname, "Misc<QString>" ) )
	return (Misc<QString>*)this;
    return NewGameDialog::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL signal_sendcommand
void GameDialog::signal_sendcommand( const QString& t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL signal_matchsettings
void GameDialog::signal_matchsettings( const QString& t0, const QString& t1, const QString& t2, assessType t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    static_QUType_ptr.set(o+4,&t3);
    activate_signal( clist, o );
}

// SIGNAL signal_removeDialog
void GameDialog::signal_removeDialog( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 2, t0 );
}

bool GameDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slot_stats_opponent(); break;
    case 1: slot_swapcolors(); break;
    case 2: slot_pbsuggest(); break;
    case 3: slot_offer((bool)static_QUType_bool.get(_o+1)); break;
    case 4: slot_decline(); break;
    case 5: slot_changed(); break;
    case 6: slot_cancel(); break;
    case 7: slot_suggest((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(const QString&)static_QUType_QString.get(_o+4),(int)static_QUType_int.get(_o+5)); break;
    case 8: slot_matchcreate((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 9: slot_notopen((const QString&)static_QUType_QString.get(_o+1)); break;
    case 10: slot_komirequest((const QString&)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(bool)static_QUType_bool.get(_o+4)); break;
    case 11: slot_opponentopen((const QString&)static_QUType_QString.get(_o+1)); break;
    case 12: slot_dispute((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    default:
	return NewGameDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool GameDialog::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: signal_sendcommand((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 1: signal_matchsettings((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(assessType)(*((assessType*)static_QUType_ptr.get(_o+4)))); break;
    case 2: signal_removeDialog((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return NewGameDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool GameDialog::qt_property( int id, int f, QVariant* v)
{
    return NewGameDialog::qt_property( id, f, v);
}

bool GameDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
