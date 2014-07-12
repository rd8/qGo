/****************************************************************************
** StatusTip meta object code from reading C++ file 'tip.h'
**
** Created: Sat Jul 12 14:43:00 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "tip.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *StatusTip::className() const
{
    return "StatusTip";
}

QMetaObject *StatusTip::metaObj = 0;
static QMetaObjectCleanUp cleanUp_StatusTip( "StatusTip", &StatusTip::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString StatusTip::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "StatusTip", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString StatusTip::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "StatusTip", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* StatusTip::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QLabel::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"slotStatusTipCoords", 4, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "slotStatusTipCoords(int,int,int,bool)", &slot_0, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"clearStatusBar", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "clearStatusBar()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"StatusTip", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_StatusTip.setMetaObject( metaObj );
    return metaObj;
}

void* StatusTip::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "StatusTip" ) )
	return this;
    return QLabel::qt_cast( clname );
}

// SIGNAL clearStatusBar
void StatusTip::clearStatusBar()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool StatusTip::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotStatusTipCoords((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(bool)static_QUType_bool.get(_o+4)); break;
    default:
	return QLabel::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool StatusTip::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: clearStatusBar(); break;
    default:
	return QLabel::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool StatusTip::qt_property( int id, int f, QVariant* v)
{
    return QLabel::qt_property( id, f, v);
}

bool StatusTip::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
