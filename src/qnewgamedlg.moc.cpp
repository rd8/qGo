/****************************************************************************
** QNewGameDlg meta object code from reading C++ file 'qnewgamedlg.h'
**
** Created: Sat Jul 12 14:42:58 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "qnewgamedlg.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QNewGameDlg::className() const
{
    return "QNewGameDlg";
}

QMetaObject *QNewGameDlg::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QNewGameDlg( "QNewGameDlg", &QNewGameDlg::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QNewGameDlg::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QNewGameDlg", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QNewGameDlg::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QNewGameDlg", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QNewGameDlg::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QNewGameDlgGui::staticMetaObject();
    static const QUMethod slot_0 = {"slotCancel", 0, 0 };
    static const QUMethod slot_1 = {"slotOk", 0, 0 };
    static const QUMethod slot_2 = {"slotGobanSizeChanged", 0, 0 };
    static const QUMethod slot_3 = {"slotHandicapChanged", 0, 0 };
    static const QUMethod slot_4 = {"slotKomiChanged", 0, 0 };
    static const QUMethod slot_5 = {"slotLevelBlackChanged", 0, 0 };
    static const QUMethod slot_6 = {"slotLevelWhiteChanged", 0, 0 };
    static const QUMethod slot_7 = {"slotPlayerBlackNameChanged", 0, 0 };
    static const QUMethod slot_8 = {"slotPlayerBlackTypeChanged", 0, 0 };
    static const QUMethod slot_9 = {"slotPlayerWhiteNameChanged", 0, 0 };
    static const QUMethod slot_10 = {"slotPlayerWhiteTypeChanged", 0, 0 };
    static const QUMethod slot_11 = {"slotTimeChanged", 0, 0 };
    static const QUMethod slot_12 = {"slotGetFileName", 0, 0 };
    static const QUMethod slot_13 = {"slotOneColorGoClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "slotCancel()", &slot_0, QMetaData::Public },
	{ "slotOk()", &slot_1, QMetaData::Public },
	{ "slotGobanSizeChanged()", &slot_2, QMetaData::Protected },
	{ "slotHandicapChanged()", &slot_3, QMetaData::Protected },
	{ "slotKomiChanged()", &slot_4, QMetaData::Protected },
	{ "slotLevelBlackChanged()", &slot_5, QMetaData::Protected },
	{ "slotLevelWhiteChanged()", &slot_6, QMetaData::Protected },
	{ "slotPlayerBlackNameChanged()", &slot_7, QMetaData::Protected },
	{ "slotPlayerBlackTypeChanged()", &slot_8, QMetaData::Protected },
	{ "slotPlayerWhiteNameChanged()", &slot_9, QMetaData::Protected },
	{ "slotPlayerWhiteTypeChanged()", &slot_10, QMetaData::Protected },
	{ "slotTimeChanged()", &slot_11, QMetaData::Protected },
	{ "slotGetFileName()", &slot_12, QMetaData::Protected },
	{ "slotOneColorGoClicked()", &slot_13, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"QNewGameDlg", parentObject,
	slot_tbl, 14,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QNewGameDlg.setMetaObject( metaObj );
    return metaObj;
}

void* QNewGameDlg::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QNewGameDlg" ) )
	return this;
    return QNewGameDlgGui::qt_cast( clname );
}

bool QNewGameDlg::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotCancel(); break;
    case 1: slotOk(); break;
    case 2: slotGobanSizeChanged(); break;
    case 3: slotHandicapChanged(); break;
    case 4: slotKomiChanged(); break;
    case 5: slotLevelBlackChanged(); break;
    case 6: slotLevelWhiteChanged(); break;
    case 7: slotPlayerBlackNameChanged(); break;
    case 8: slotPlayerBlackTypeChanged(); break;
    case 9: slotPlayerWhiteNameChanged(); break;
    case 10: slotPlayerWhiteTypeChanged(); break;
    case 11: slotTimeChanged(); break;
    case 12: slotGetFileName(); break;
    case 13: slotOneColorGoClicked(); break;
    default:
	return QNewGameDlgGui::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QNewGameDlg::qt_emit( int _id, QUObject* _o )
{
    return QNewGameDlgGui::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QNewGameDlg::qt_property( int id, int f, QVariant* v)
{
    return QNewGameDlgGui::qt_property( id, f, v);
}

bool QNewGameDlg::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
