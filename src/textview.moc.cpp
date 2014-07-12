/****************************************************************************
** TextView meta object code from reading C++ file 'textview.h'
**
** Created: Sat Jul 12 14:43:11 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "textview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TextView::className() const
{
    return "TextView";
}

QMetaObject *TextView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TextView( "TextView", &TextView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TextView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TextView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TextView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TextView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TextView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = TextViewGUI::staticMetaObject();
    static const QUMethod slot_0 = {"toClipboard", 0, 0 };
    static const QUMethod slot_1 = {"saveMe", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "toClipboard()", &slot_0, QMetaData::Public },
	{ "saveMe()", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"TextView", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TextView.setMetaObject( metaObj );
    return metaObj;
}

void* TextView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TextView" ) )
	return this;
    return TextViewGUI::qt_cast( clname );
}

bool TextView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: toClipboard(); break;
    case 1: saveMe(); break;
    default:
	return TextViewGUI::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TextView::qt_emit( int _id, QUObject* _o )
{
    return TextViewGUI::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool TextView::qt_property( int id, int f, QVariant* v)
{
    return TextViewGUI::qt_property( id, f, v);
}

bool TextView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
