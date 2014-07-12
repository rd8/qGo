/****************************************************************************
** Board meta object code from reading C++ file 'board.h'
**
** Created: Sat Jul 12 14:43:04 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "board.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Board::className() const
{
    return "Board";
}

QMetaObject *Board::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Board( "Board", &Board::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Board::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Board", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Board::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Board", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Board::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QCanvasView::staticMetaObject();
    static const QUMethod slot_0 = {"updateComment", 0, 0 };
    static const QUMethod slot_1 = {"updateComment2", 0, 0 };
    static const QUMethod slot_2 = {"modifiedComment", 0, 0 };
    static const QUMethod slot_3 = {"changeSize", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "m", &static_QUType_ptr, "Move", QUParameter::In }
    };
    static const QUMethod slot_4 = {"gotoMove", 1, param_slot_4 };
    static const QMetaData slot_tbl[] = {
	{ "updateComment()", &slot_0, QMetaData::Public },
	{ "updateComment2()", &slot_1, QMetaData::Public },
	{ "modifiedComment()", &slot_2, QMetaData::Public },
	{ "changeSize()", &slot_3, QMetaData::Public },
	{ "gotoMove(Move*)", &slot_4, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"coordsChanged", 4, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"signal_sendcomment", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_ptr, "enum StoneColor", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"signal_addStone", 3, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_ptr, "enum StoneColor", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"signal_Stone_Computer", 3, param_signal_3 };
    static const QUMethod signal_4 = {"signal_undo", 0, 0 };
    static const QUMethod signal_5 = {"signal_adjourn", 0, 0 };
    static const QUMethod signal_6 = {"signal_resign", 0, 0 };
    static const QUMethod signal_7 = {"signal_pass", 0, 0 };
    static const QUMethod signal_8 = {"signal_done", 0, 0 };
    static const QUMethod signal_9 = {"signal_refresh", 0, 0 };
    static const QUMethod signal_10 = {"signal_editBoardInNewWindow", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "coordsChanged(int,int,int,bool)", &signal_0, QMetaData::Public },
	{ "signal_sendcomment(const QString&)", &signal_1, QMetaData::Public },
	{ "signal_addStone(enum StoneColor,int,int)", &signal_2, QMetaData::Public },
	{ "signal_Stone_Computer(enum StoneColor,int,int)", &signal_3, QMetaData::Public },
	{ "signal_undo()", &signal_4, QMetaData::Public },
	{ "signal_adjourn()", &signal_5, QMetaData::Public },
	{ "signal_resign()", &signal_6, QMetaData::Public },
	{ "signal_pass()", &signal_7, QMetaData::Public },
	{ "signal_done()", &signal_8, QMetaData::Public },
	{ "signal_refresh()", &signal_9, QMetaData::Public },
	{ "signal_editBoardInNewWindow()", &signal_10, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"Board", parentObject,
	slot_tbl, 5,
	signal_tbl, 11,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Board.setMetaObject( metaObj );
    return metaObj;
}

void* Board::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Board" ) )
	return this;
    return QCanvasView::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL coordsChanged
void Board::coordsChanged( int t0, int t1, int t2, bool t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_int.set(o+3,t2);
    static_QUType_bool.set(o+4,t3);
    activate_signal( clist, o );
}

// SIGNAL signal_sendcomment
void Board::signal_sendcomment( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL signal_addStone
void Board::signal_addStone( enum StoneColor t0, int t1, int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL signal_Stone_Computer
void Board::signal_Stone_Computer( enum StoneColor t0, int t1, int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL signal_undo
void Board::signal_undo()
{
    activate_signal( staticMetaObject()->signalOffset() + 4 );
}

// SIGNAL signal_adjourn
void Board::signal_adjourn()
{
    activate_signal( staticMetaObject()->signalOffset() + 5 );
}

// SIGNAL signal_resign
void Board::signal_resign()
{
    activate_signal( staticMetaObject()->signalOffset() + 6 );
}

// SIGNAL signal_pass
void Board::signal_pass()
{
    activate_signal( staticMetaObject()->signalOffset() + 7 );
}

// SIGNAL signal_done
void Board::signal_done()
{
    activate_signal( staticMetaObject()->signalOffset() + 8 );
}

// SIGNAL signal_refresh
void Board::signal_refresh()
{
    activate_signal( staticMetaObject()->signalOffset() + 9 );
}

// SIGNAL signal_editBoardInNewWindow
void Board::signal_editBoardInNewWindow()
{
    activate_signal( staticMetaObject()->signalOffset() + 10 );
}

bool Board::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updateComment(); break;
    case 1: updateComment2(); break;
    case 2: modifiedComment(); break;
    case 3: changeSize(); break;
    case 4: gotoMove((Move*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QCanvasView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Board::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: coordsChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(bool)static_QUType_bool.get(_o+4)); break;
    case 1: signal_sendcomment((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: signal_addStone((enum StoneColor)(*((enum StoneColor*)static_QUType_ptr.get(_o+1))),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 3: signal_Stone_Computer((enum StoneColor)(*((enum StoneColor*)static_QUType_ptr.get(_o+1))),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 4: signal_undo(); break;
    case 5: signal_adjourn(); break;
    case 6: signal_resign(); break;
    case 7: signal_pass(); break;
    case 8: signal_done(); break;
    case 9: signal_refresh(); break;
    case 10: signal_editBoardInNewWindow(); break;
    default:
	return QCanvasView::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool Board::qt_property( int id, int f, QVariant* v)
{
    return QCanvasView::qt_property( id, f, v);
}

bool Board::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
