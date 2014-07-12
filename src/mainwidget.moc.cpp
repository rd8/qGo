/****************************************************************************
** MainWidget meta object code from reading C++ file 'mainwidget.h'
**
** Created: Sat Jul 12 14:42:59 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "mainwidget.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MainWidget::className() const
{
    return "MainWidget";
}

QMetaObject *MainWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MainWidget( "MainWidget", &MainWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MainWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MainWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MainWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = MainWidgetGui::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_0 = {"slot_toolsTabChanged", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setMarkType", 1, param_slot_1 };
    static const QUMethod slot_2 = {"doPass", 0, 0 };
    static const QUMethod slot_3 = {"doUndo", 0, 0 };
    static const QUMethod slot_4 = {"doAdjourn", 0, 0 };
    static const QUMethod slot_5 = {"doResign", 0, 0 };
    static const QUMethod slot_6 = {"doRefresh", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"doScore", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"sliderChanged", 1, param_slot_8 };
    static const QMetaData slot_tbl[] = {
	{ "slot_toolsTabChanged(QWidget*)", &slot_0, QMetaData::Public },
	{ "setMarkType(int)", &slot_1, QMetaData::Public },
	{ "doPass()", &slot_2, QMetaData::Public },
	{ "doUndo()", &slot_3, QMetaData::Public },
	{ "doAdjourn()", &slot_4, QMetaData::Public },
	{ "doResign()", &slot_5, QMetaData::Public },
	{ "doRefresh()", &slot_6, QMetaData::Public },
	{ "doScore(bool)", &slot_7, QMetaData::Public },
	{ "sliderChanged(int)", &slot_8, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"MainWidget", parentObject,
	slot_tbl, 9,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MainWidget.setMetaObject( metaObj );
    return metaObj;
}

void* MainWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MainWidget" ) )
	return this;
    return MainWidgetGui::qt_cast( clname );
}

bool MainWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slot_toolsTabChanged((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 1: setMarkType((int)static_QUType_int.get(_o+1)); break;
    case 2: doPass(); break;
    case 3: doUndo(); break;
    case 4: doAdjourn(); break;
    case 5: doResign(); break;
    case 6: doRefresh(); break;
    case 7: doScore((bool)static_QUType_bool.get(_o+1)); break;
    case 8: sliderChanged((int)static_QUType_int.get(_o+1)); break;
    default:
	return MainWidgetGui::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MainWidget::qt_emit( int _id, QUObject* _o )
{
    return MainWidgetGui::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MainWidget::qt_property( int id, int f, QVariant* v)
{
    return MainWidgetGui::qt_property( id, f, v);
}

bool MainWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
