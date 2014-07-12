/****************************************************************************
** Parser meta object code from reading C++ file 'parser.h'
**
** Created: Sat Jul 12 14:42:56 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "parser.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Parser::className() const
{
    return "Parser";
}

QMetaObject *Parser::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Parser( "Parser", &Parser::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Parser::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Parser", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Parser::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Parser", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Parser::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "Player", QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"signal_player", 2, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "Player", QUParameter::In }
    };
    static const QUMethod signal_1 = {"signal_statsPlayer", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_ptr, "Game", QUParameter::In }
    };
    static const QUMethod signal_2 = {"signal_game", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_ptr, "Game", QUParameter::In }
    };
    static const QUMethod signal_3 = {"signal_move", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_ptr, "GameInfo", QUParameter::In }
    };
    static const QUMethod signal_4 = {"signal_move", 1, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_5 = {"signal_message", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ 0, &static_QUType_ptr, "GSName", QUParameter::InOut }
    };
    static const QUMethod signal_6 = {"signal_svname", 1, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::InOut }
    };
    static const QUMethod signal_7 = {"signal_accname", 1, param_signal_7 };
    static const QUParameter param_signal_8[] = {
	{ 0, &static_QUType_ptr, "Status", QUParameter::In }
    };
    static const QUMethod signal_8 = {"signal_status", 1, param_signal_8 };
    static const QUMethod signal_9 = {"signal_connclosed", 0, 0 };
    static const QUParameter param_signal_10[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_10 = {"signal_talk", 3, param_signal_10 };
    static const QUParameter param_signal_11[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_11 = {"signal_checkbox", 2, param_signal_11 };
    static const QUParameter param_signal_12[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_12 = {"signal_channelinfo", 2, param_signal_12 };
    static const QUParameter param_signal_13[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_13 = {"signal_kibitz", 3, param_signal_13 };
    static const QUParameter param_signal_14[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_14 = {"signal_title", 1, param_signal_14 };
    static const QUParameter param_signal_15[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_15 = {"signal_komi", 3, param_signal_15 };
    static const QUParameter param_signal_16[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_16 = {"signal_freegame", 1, param_signal_16 };
    static const QUParameter param_signal_17[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_17 = {"signal_suggest", 5, param_signal_17 };
    static const QUParameter param_signal_18[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_18 = {"signal_matchrequest", 2, param_signal_18 };
    static const QUParameter param_signal_19[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_19 = {"signal_matchCanceled", 1, param_signal_19 };
    static const QUParameter param_signal_20[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_20 = {"signal_matchcreate", 2, param_signal_20 };
    static const QUParameter param_signal_21[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_21 = {"signal_notopen", 1, param_signal_21 };
    static const QUParameter param_signal_22[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_22 = {"signal_removestones", 2, param_signal_22 };
    static const QUParameter param_signal_23[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_23 = {"signal_komirequest", 4, param_signal_23 };
    static const QUParameter param_signal_24[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_24 = {"signal_opponentopen", 1, param_signal_24 };
    static const QUParameter param_signal_25[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_25 = {"signal_result", 4, param_signal_25 };
    static const QUParameter param_signal_26[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_26 = {"signal_requestDialog", 4, param_signal_26 };
    static const QUParameter param_signal_27[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_27 = {"signal_undo", 2, param_signal_27 };
    static const QUParameter param_signal_28[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_28 = {"signal_addToObservationList", 1, param_signal_28 };
    static const QUParameter param_signal_29[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_29 = {"signal_shout", 2, param_signal_29 };
    static const QUParameter param_signal_30[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_30 = {"signal_timeAdded", 2, param_signal_30 };
    static const QUParameter param_signal_31[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_31 = {"signal_room", 2, param_signal_31 };
    static const QUParameter param_signal_32[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_32 = {"signal_addSeekCondition", 5, param_signal_32 };
    static const QUMethod signal_33 = {"signal_clearSeekCondition", 0, 0 };
    static const QUMethod signal_34 = {"signal_cancelSeek", 0, 0 };
    static const QUParameter param_signal_35[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_35 = {"signal_SeekList", 2, param_signal_35 };
    static const QUParameter param_signal_36[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_36 = {"signal_refresh", 1, param_signal_36 };
    static const QUParameter param_signal_37[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_37 = {"signal_dispute", 2, param_signal_37 };
    static const QUParameter param_signal_38[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_38 = {"signal_set_observe", 1, param_signal_38 };
    static const QMetaData signal_tbl[] = {
	{ "signal_player(Player*,bool)", &signal_0, QMetaData::Private },
	{ "signal_statsPlayer(Player*)", &signal_1, QMetaData::Private },
	{ "signal_game(Game*)", &signal_2, QMetaData::Private },
	{ "signal_move(Game*)", &signal_3, QMetaData::Private },
	{ "signal_move(GameInfo*)", &signal_4, QMetaData::Private },
	{ "signal_message(QString)", &signal_5, QMetaData::Private },
	{ "signal_svname(GSName&)", &signal_6, QMetaData::Private },
	{ "signal_accname(QString&)", &signal_7, QMetaData::Private },
	{ "signal_status(Status)", &signal_8, QMetaData::Private },
	{ "signal_connclosed()", &signal_9, QMetaData::Private },
	{ "signal_talk(const QString&,const QString&,bool)", &signal_10, QMetaData::Private },
	{ "signal_checkbox(int,bool)", &signal_11, QMetaData::Private },
	{ "signal_channelinfo(int,const QString&)", &signal_12, QMetaData::Private },
	{ "signal_kibitz(int,const QString&,const QString&)", &signal_13, QMetaData::Private },
	{ "signal_title(const QString&)", &signal_14, QMetaData::Private },
	{ "signal_komi(const QString&,const QString&,bool)", &signal_15, QMetaData::Private },
	{ "signal_freegame(bool)", &signal_16, QMetaData::Private },
	{ "signal_suggest(const QString&,const QString&,const QString&,const QString&,int)", &signal_17, QMetaData::Private },
	{ "signal_matchrequest(const QString&,bool)", &signal_18, QMetaData::Private },
	{ "signal_matchCanceled(const QString&)", &signal_19, QMetaData::Private },
	{ "signal_matchcreate(const QString&,const QString&)", &signal_20, QMetaData::Private },
	{ "signal_notopen(const QString&)", &signal_21, QMetaData::Private },
	{ "signal_removestones(const QString&,const QString&)", &signal_22, QMetaData::Private },
	{ "signal_komirequest(const QString&,int,int,bool)", &signal_23, QMetaData::Private },
	{ "signal_opponentopen(const QString&)", &signal_24, QMetaData::Private },
	{ "signal_result(const QString&,const QString&,bool,const QString&)", &signal_25, QMetaData::Private },
	{ "signal_requestDialog(const QString&,const QString&,const QString&,const QString&)", &signal_26, QMetaData::Private },
	{ "signal_undo(const QString&,const QString&)", &signal_27, QMetaData::Private },
	{ "signal_addToObservationList(int)", &signal_28, QMetaData::Private },
	{ "signal_shout(const QString&,const QString&)", &signal_29, QMetaData::Private },
	{ "signal_timeAdded(int,bool)", &signal_30, QMetaData::Private },
	{ "signal_room(const QString&,bool)", &signal_31, QMetaData::Private },
	{ "signal_addSeekCondition(const QString&,const QString&,const QString&,const QString&,const QString&)", &signal_32, QMetaData::Private },
	{ "signal_clearSeekCondition()", &signal_33, QMetaData::Private },
	{ "signal_cancelSeek()", &signal_34, QMetaData::Private },
	{ "signal_SeekList(const QString&,const QString&)", &signal_35, QMetaData::Private },
	{ "signal_refresh(int)", &signal_36, QMetaData::Private },
	{ "signal_dispute(const QString&,const QString&)", &signal_37, QMetaData::Private },
	{ "signal_set_observe(const QString&)", &signal_38, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"Parser", parentObject,
	0, 0,
	signal_tbl, 39,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Parser.setMetaObject( metaObj );
    return metaObj;
}

void* Parser::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Parser" ) )
	return this;
    if ( !qstrcmp( clname, "Misc<QString>" ) )
	return (Misc<QString>*)this;
    return QObject::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL signal_player
void Parser::signal_player( Player* t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL signal_statsPlayer
void Parser::signal_statsPlayer( Player* t0 )
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

// SIGNAL signal_game
void Parser::signal_game( Game* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL signal_move
void Parser::signal_move( Game* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL signal_move
void Parser::signal_move( GameInfo* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL signal_message
void Parser::signal_message( QString t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 5, t0 );
}

// SIGNAL signal_svname
void Parser::signal_svname( GSName& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL signal_accname
void Parser::signal_accname( QString& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 7 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_QString.set(o+1,t0);
    activate_signal( clist, o );
    t0 = static_QUType_QString.get(o+1);
}

// SIGNAL signal_status
void Parser::signal_status( Status t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 8 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL signal_connclosed
void Parser::signal_connclosed()
{
    activate_signal( staticMetaObject()->signalOffset() + 9 );
}

// SIGNAL signal_talk
void Parser::signal_talk( const QString& t0, const QString& t1, bool t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 10 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_bool.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL signal_checkbox
void Parser::signal_checkbox( int t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 11 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL signal_channelinfo
void Parser::signal_channelinfo( int t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 12 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL signal_kibitz
void Parser::signal_kibitz( int t0, const QString& t1, const QString& t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 13 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_int.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL signal_title
void Parser::signal_title( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 14, t0 );
}

// SIGNAL signal_komi
void Parser::signal_komi( const QString& t0, const QString& t1, bool t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 15 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_bool.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL signal_freegame
void Parser::signal_freegame( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 16, t0 );
}

// SIGNAL signal_suggest
void Parser::signal_suggest( const QString& t0, const QString& t1, const QString& t2, const QString& t3, int t4 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 17 );
    if ( !clist )
	return;
    QUObject o[6];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    static_QUType_QString.set(o+4,t3);
    static_QUType_int.set(o+5,t4);
    activate_signal( clist, o );
}

// SIGNAL signal_matchrequest
void Parser::signal_matchrequest( const QString& t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 18 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL signal_matchCanceled
void Parser::signal_matchCanceled( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 19, t0 );
}

// SIGNAL signal_matchcreate
void Parser::signal_matchcreate( const QString& t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 20 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL signal_notopen
void Parser::signal_notopen( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 21, t0 );
}

// SIGNAL signal_removestones
void Parser::signal_removestones( const QString& t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 22 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL signal_komirequest
void Parser::signal_komirequest( const QString& t0, int t1, int t2, bool t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 23 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_int.set(o+3,t2);
    static_QUType_bool.set(o+4,t3);
    activate_signal( clist, o );
}

// SIGNAL signal_opponentopen
void Parser::signal_opponentopen( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 24, t0 );
}

// SIGNAL signal_result
void Parser::signal_result( const QString& t0, const QString& t1, bool t2, const QString& t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 25 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_bool.set(o+3,t2);
    static_QUType_QString.set(o+4,t3);
    activate_signal( clist, o );
}

// SIGNAL signal_requestDialog
void Parser::signal_requestDialog( const QString& t0, const QString& t1, const QString& t2, const QString& t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 26 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    static_QUType_QString.set(o+4,t3);
    activate_signal( clist, o );
}

// SIGNAL signal_undo
void Parser::signal_undo( const QString& t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 27 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL signal_addToObservationList
void Parser::signal_addToObservationList( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 28, t0 );
}

// SIGNAL signal_shout
void Parser::signal_shout( const QString& t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 29 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL signal_timeAdded
void Parser::signal_timeAdded( int t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 30 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL signal_room
void Parser::signal_room( const QString& t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 31 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL signal_addSeekCondition
void Parser::signal_addSeekCondition( const QString& t0, const QString& t1, const QString& t2, const QString& t3, const QString& t4 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 32 );
    if ( !clist )
	return;
    QUObject o[6];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    static_QUType_QString.set(o+4,t3);
    static_QUType_QString.set(o+5,t4);
    activate_signal( clist, o );
}

// SIGNAL signal_clearSeekCondition
void Parser::signal_clearSeekCondition()
{
    activate_signal( staticMetaObject()->signalOffset() + 33 );
}

// SIGNAL signal_cancelSeek
void Parser::signal_cancelSeek()
{
    activate_signal( staticMetaObject()->signalOffset() + 34 );
}

// SIGNAL signal_SeekList
void Parser::signal_SeekList( const QString& t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 35 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL signal_refresh
void Parser::signal_refresh( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 36, t0 );
}

// SIGNAL signal_dispute
void Parser::signal_dispute( const QString& t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 37 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL signal_set_observe
void Parser::signal_set_observe( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 38, t0 );
}

bool Parser::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool Parser::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: signal_player((Player*)static_QUType_ptr.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 1: signal_statsPlayer((Player*)static_QUType_ptr.get(_o+1)); break;
    case 2: signal_game((Game*)static_QUType_ptr.get(_o+1)); break;
    case 3: signal_move((Game*)static_QUType_ptr.get(_o+1)); break;
    case 4: signal_move((GameInfo*)static_QUType_ptr.get(_o+1)); break;
    case 5: signal_message((QString)static_QUType_QString.get(_o+1)); break;
    case 6: signal_svname((GSName&)*((GSName*)static_QUType_ptr.get(_o+1))); break;
    case 7: signal_accname((QString&)static_QUType_QString.get(_o+1)); break;
    case 8: signal_status((Status)(*((Status*)static_QUType_ptr.get(_o+1)))); break;
    case 9: signal_connclosed(); break;
    case 10: signal_talk((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 11: signal_checkbox((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 12: signal_channelinfo((int)static_QUType_int.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 13: signal_kibitz((int)static_QUType_int.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    case 14: signal_title((const QString&)static_QUType_QString.get(_o+1)); break;
    case 15: signal_komi((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 16: signal_freegame((bool)static_QUType_bool.get(_o+1)); break;
    case 17: signal_suggest((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(const QString&)static_QUType_QString.get(_o+4),(int)static_QUType_int.get(_o+5)); break;
    case 18: signal_matchrequest((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 19: signal_matchCanceled((const QString&)static_QUType_QString.get(_o+1)); break;
    case 20: signal_matchcreate((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 21: signal_notopen((const QString&)static_QUType_QString.get(_o+1)); break;
    case 22: signal_removestones((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 23: signal_komirequest((const QString&)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(bool)static_QUType_bool.get(_o+4)); break;
    case 24: signal_opponentopen((const QString&)static_QUType_QString.get(_o+1)); break;
    case 25: signal_result((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(bool)static_QUType_bool.get(_o+3),(const QString&)static_QUType_QString.get(_o+4)); break;
    case 26: signal_requestDialog((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(const QString&)static_QUType_QString.get(_o+4)); break;
    case 27: signal_undo((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 28: signal_addToObservationList((int)static_QUType_int.get(_o+1)); break;
    case 29: signal_shout((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 30: signal_timeAdded((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 31: signal_room((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 32: signal_addSeekCondition((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(const QString&)static_QUType_QString.get(_o+4),(const QString&)static_QUType_QString.get(_o+5)); break;
    case 33: signal_clearSeekCondition(); break;
    case 34: signal_cancelSeek(); break;
    case 35: signal_SeekList((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 36: signal_refresh((int)static_QUType_int.get(_o+1)); break;
    case 37: signal_dispute((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 38: signal_set_observe((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool Parser::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool Parser::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
