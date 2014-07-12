/****************************************************************************
** NodeResults meta object code from reading C++ file 'noderesults.h'
**
** Created: Sat Jul 12 14:42:56 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "noderesults.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *NodeResults::className() const
{
    return "NodeResults";
}

QMetaObject *NodeResults::metaObj = 0;
static QMetaObjectCleanUp cleanUp_NodeResults( "NodeResults", &NodeResults::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString NodeResults::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "NodeResults", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString NodeResults::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "NodeResults", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* NodeResults::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = NodeResultsGUI::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod slot_0 = {"fump", 1, param_slot_0 };
    static const QUMethod slot_1 = {"doHide", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "fump(QIconViewItem*)", &slot_0, QMetaData::Public },
	{ "doHide()", &slot_1, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "Move", QUParameter::In }
    };
    static const QUMethod signal_0 = {"doFump", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "doFump(Move*)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"NodeResults", parentObject,
	slot_tbl, 2,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_NodeResults.setMetaObject( metaObj );
    return metaObj;
}

void* NodeResults::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "NodeResults" ) )
	return this;
    return NodeResultsGUI::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL doFump
void NodeResults::doFump( Move* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool NodeResults::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: fump((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 1: doHide(); break;
    default:
	return NodeResultsGUI::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool NodeResults::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: doFump((Move*)static_QUType_ptr.get(_o+1)); break;
    default:
	return NodeResultsGUI::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool NodeResults::qt_property( int id, int f, QVariant* v)
{
    return NodeResultsGUI::qt_property( id, f, v);
}

bool NodeResults::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
