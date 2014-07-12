/****************************************************************************
** qGoBoard meta object code from reading C++ file 'qgo_interface.h'
**
** Created: Sat Jul 12 14:43:06 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "qgo_interface.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *qGoBoard::className() const
{
    return "qGoBoard";
}

QMetaObject *qGoBoard::metaObj = 0;
static QMetaObjectCleanUp cleanUp_qGoBoard( "qGoBoard", &qGoBoard::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString qGoBoard::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "qGoBoard", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString qGoBoard::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "qGoBoard", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* qGoBoard::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"slot_closeevent", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"slot_sendcomment", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "enum StoneColor", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"slot_addStone", 3, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_ptr, "enum StoneColor", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"slot_stoneComputer", 3, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "c", &static_QUType_ptr, "StoneColor", QUParameter::In }
    };
    static const QUMethod slot_4 = {"slot_PassComputer", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "c", &static_QUType_ptr, "StoneColor", QUParameter::In }
    };
    static const QUMethod slot_5 = {"slot_UndoComputer", 1, param_slot_5 };
    static const QUMethod slot_6 = {"slot_DoneComputer", 0, 0 };
    static const QUMethod slot_7 = {"slot_doPass", 0, 0 };
    static const QUMethod slot_8 = {"slot_doResign", 0, 0 };
    static const QUMethod slot_9 = {"slot_doUndo", 0, 0 };
    static const QUMethod slot_10 = {"slot_doAdjourn", 0, 0 };
    static const QUMethod slot_11 = {"slot_doDone", 0, 0 };
    static const QUMethod slot_12 = {"slot_doRefresh", 0, 0 };
    static const QUMethod slot_13 = {"slot_addtimePauseW", 0, 0 };
    static const QUMethod slot_14 = {"slot_addtimePauseB", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"slot_ttOpponentSelected", 1, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"slot_ttControls", 1, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"slot_ttMark", 1, param_slot_17 };
    static const QMetaData slot_tbl[] = {
	{ "slot_closeevent()", &slot_0, QMetaData::Public },
	{ "slot_sendcomment(const QString&)", &slot_1, QMetaData::Public },
	{ "slot_addStone(enum StoneColor,int,int)", &slot_2, QMetaData::Public },
	{ "slot_stoneComputer(enum StoneColor,int,int)", &slot_3, QMetaData::Public },
	{ "slot_PassComputer(StoneColor)", &slot_4, QMetaData::Public },
	{ "slot_UndoComputer(StoneColor)", &slot_5, QMetaData::Public },
	{ "slot_DoneComputer()", &slot_6, QMetaData::Public },
	{ "slot_doPass()", &slot_7, QMetaData::Public },
	{ "slot_doResign()", &slot_8, QMetaData::Public },
	{ "slot_doUndo()", &slot_9, QMetaData::Public },
	{ "slot_doAdjourn()", &slot_10, QMetaData::Public },
	{ "slot_doDone()", &slot_11, QMetaData::Public },
	{ "slot_doRefresh()", &slot_12, QMetaData::Public },
	{ "slot_addtimePauseW()", &slot_13, QMetaData::Public },
	{ "slot_addtimePauseB()", &slot_14, QMetaData::Public },
	{ "slot_ttOpponentSelected(const QString&)", &slot_15, QMetaData::Public },
	{ "slot_ttControls(bool)", &slot_16, QMetaData::Public },
	{ "slot_ttMark(bool)", &slot_17, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"signal_sendcommand", 2, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"signal_2passes", 2, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "signal_sendcommand(const QString&,bool)", &signal_0, QMetaData::Public },
	{ "signal_2passes(const QString&,const QString&)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"qGoBoard", parentObject,
	slot_tbl, 18,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_qGoBoard.setMetaObject( metaObj );
    return metaObj;
}

void* qGoBoard::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "qGoBoard" ) )
	return this;
    if ( !qstrcmp( clname, "Misc<QString>" ) )
	return (Misc<QString>*)this;
    return QObject::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL signal_sendcommand
void qGoBoard::signal_sendcommand( const QString& t0, bool t1 )
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

// SIGNAL signal_2passes
void qGoBoard::signal_2passes( const QString& t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

bool qGoBoard::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slot_closeevent(); break;
    case 1: slot_sendcomment((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: slot_addStone((enum StoneColor)(*((enum StoneColor*)static_QUType_ptr.get(_o+1))),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 3: slot_stoneComputer((enum StoneColor)(*((enum StoneColor*)static_QUType_ptr.get(_o+1))),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 4: slot_PassComputer((StoneColor)(*((StoneColor*)static_QUType_ptr.get(_o+1)))); break;
    case 5: slot_UndoComputer((StoneColor)(*((StoneColor*)static_QUType_ptr.get(_o+1)))); break;
    case 6: slot_DoneComputer(); break;
    case 7: slot_doPass(); break;
    case 8: slot_doResign(); break;
    case 9: slot_doUndo(); break;
    case 10: slot_doAdjourn(); break;
    case 11: slot_doDone(); break;
    case 12: slot_doRefresh(); break;
    case 13: slot_addtimePauseW(); break;
    case 14: slot_addtimePauseB(); break;
    case 15: slot_ttOpponentSelected((const QString&)static_QUType_QString.get(_o+1)); break;
    case 16: slot_ttControls((bool)static_QUType_bool.get(_o+1)); break;
    case 17: slot_ttMark((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool qGoBoard::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: signal_sendcommand((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 1: signal_2passes((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool qGoBoard::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool qGoBoard::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *qGoIF::className() const
{
    return "qGoIF";
}

QMetaObject *qGoIF::metaObj = 0;
static QMetaObjectCleanUp cleanUp_qGoIF( "qGoIF", &qGoIF::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString qGoIF::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "qGoIF", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString qGoIF::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "qGoIF", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* qGoIF::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_ptr, "GameInfo", QUParameter::In }
    };
    static const QUMethod slot_0 = {"slot_move", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_ptr, "Game", QUParameter::In }
    };
    static const QUMethod slot_1 = {"slot_move", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QNewGameDlg", QUParameter::In }
    };
    static const QUMethod slot_2 = {"slot_computer_game", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"slot_kibitz", 3, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"slot_title", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"slot_komi", 3, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"slot_freegame", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"slot_matchcreate", 2, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"slot_removestones", 2, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"slot_undo", 2, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"slot_result", 4, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "assessType", QUParameter::In }
    };
    static const QUMethod slot_11 = {"slot_matchsettings", 4, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"slot_requestDialog", 4, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_13 = {"slot_timeAdded", 2, param_slot_13 };
    static const QUMethod slot_14 = {"slot_closeevent", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"slot_sendcommand", 2, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"set_observe", 1, param_slot_16 };
    static const QMetaData slot_tbl[] = {
	{ "slot_move(GameInfo*)", &slot_0, QMetaData::Public },
	{ "slot_move(Game*)", &slot_1, QMetaData::Public },
	{ "slot_computer_game(QNewGameDlg*)", &slot_2, QMetaData::Public },
	{ "slot_kibitz(int,const QString&,const QString&)", &slot_3, QMetaData::Public },
	{ "slot_title(const QString&)", &slot_4, QMetaData::Public },
	{ "slot_komi(const QString&,const QString&,bool)", &slot_5, QMetaData::Public },
	{ "slot_freegame(bool)", &slot_6, QMetaData::Public },
	{ "slot_matchcreate(const QString&,const QString&)", &slot_7, QMetaData::Public },
	{ "slot_removestones(const QString&,const QString&)", &slot_8, QMetaData::Public },
	{ "slot_undo(const QString&,const QString&)", &slot_9, QMetaData::Public },
	{ "slot_result(const QString&,const QString&,bool,const QString&)", &slot_10, QMetaData::Public },
	{ "slot_matchsettings(const QString&,const QString&,const QString&,assessType)", &slot_11, QMetaData::Public },
	{ "slot_requestDialog(const QString&,const QString&,const QString&,const QString&)", &slot_12, QMetaData::Public },
	{ "slot_timeAdded(int,bool)", &slot_13, QMetaData::Public },
	{ "slot_closeevent()", &slot_14, QMetaData::Public },
	{ "slot_sendcommand(const QString&,bool)", &slot_15, QMetaData::Public },
	{ "set_observe(const QString&)", &slot_16, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"signal_sendcommand", 2, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"signal_addToObservationList", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "signal_sendcommand(const QString&,bool)", &signal_0, QMetaData::Public },
	{ "signal_addToObservationList(int)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"qGoIF", parentObject,
	slot_tbl, 17,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_qGoIF.setMetaObject( metaObj );
    return metaObj;
}

void* qGoIF::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "qGoIF" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL signal_sendcommand
void qGoIF::signal_sendcommand( const QString& t0, bool t1 )
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

// SIGNAL signal_addToObservationList
void qGoIF::signal_addToObservationList( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool qGoIF::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slot_move((GameInfo*)static_QUType_ptr.get(_o+1)); break;
    case 1: slot_move((Game*)static_QUType_ptr.get(_o+1)); break;
    case 2: slot_computer_game((QNewGameDlg*)static_QUType_ptr.get(_o+1)); break;
    case 3: slot_kibitz((int)static_QUType_int.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    case 4: slot_title((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: slot_komi((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 6: slot_freegame((bool)static_QUType_bool.get(_o+1)); break;
    case 7: slot_matchcreate((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 8: slot_removestones((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 9: slot_undo((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 10: slot_result((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(bool)static_QUType_bool.get(_o+3),(const QString&)static_QUType_QString.get(_o+4)); break;
    case 11: slot_matchsettings((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(assessType)(*((assessType*)static_QUType_ptr.get(_o+4)))); break;
    case 12: slot_requestDialog((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(const QString&)static_QUType_QString.get(_o+4)); break;
    case 13: slot_timeAdded((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 14: slot_closeevent(); break;
    case 15: slot_sendcommand((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 16: set_observe((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool qGoIF::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: signal_sendcommand((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 1: signal_addToObservationList((int)static_QUType_int.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool qGoIF::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool qGoIF::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
