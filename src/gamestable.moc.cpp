/****************************************************************************
** GamesTable meta object code from reading C++ file 'gamestable.h'
**
** Created: Sat Jul 12 14:42:58 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "gamestable.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *GamesTable::className() const
{
    return "GamesTable";
}

QMetaObject *GamesTable::metaObj = 0;
static QMetaObjectCleanUp cleanUp_GamesTable( "GamesTable", &GamesTable::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString GamesTable::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GamesTable", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString GamesTable::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GamesTable", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* GamesTable::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QListView::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"slot_mouse_games", 4, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "slot_mouse_games(int,QListViewItem*,const QPoint&,int)", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"GamesTable", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_GamesTable.setMetaObject( metaObj );
    return metaObj;
}

void* GamesTable::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "GamesTable" ) )
	return this;
    return QListView::qt_cast( clname );
}

bool GamesTable::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slot_mouse_games((int)static_QUType_int.get(_o+1),(QListViewItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3)),(int)static_QUType_int.get(_o+4)); break;
    default:
	return QListView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool GamesTable::qt_emit( int _id, QUObject* _o )
{
    return QListView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool GamesTable::qt_property( int id, int f, QVariant* v)
{
    return QListView::qt_property( id, f, v);
}

bool GamesTable::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
