/****************************************************************************
** GameTree meta object code from reading C++ file 'gametree.h'
**
** Created: Sat Jul 12 14:43:01 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "gametree.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *GameTree::className() const
{
    return "GameTree";
}

QMetaObject *GameTree::metaObj = 0;
static QMetaObjectCleanUp cleanUp_GameTree( "GameTree", &GameTree::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString GameTree::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GameTree", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString GameTree::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GameTree", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* GameTree::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QCanvasView::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"GameTree", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_GameTree.setMetaObject( metaObj );
    return metaObj;
}

void* GameTree::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "GameTree" ) )
	return this;
    return QCanvasView::qt_cast( clname );
}

bool GameTree::qt_invoke( int _id, QUObject* _o )
{
    return QCanvasView::qt_invoke(_id,_o);
}

bool GameTree::qt_emit( int _id, QUObject* _o )
{
    return QCanvasView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool GameTree::qt_property( int id, int f, QVariant* v)
{
    return QCanvasView::qt_property( id, f, v);
}

bool GameTree::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
