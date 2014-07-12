/****************************************************************************
** PreferencesDialog meta object code from reading C++ file 'preferences.h'
**
** Created: Sat Jul 12 14:43:09 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "preferences.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PreferencesDialog::className() const
{
    return "PreferencesDialog";
}

QMetaObject *PreferencesDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PreferencesDialog( "PreferencesDialog", &PreferencesDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PreferencesDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PreferencesDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PreferencesDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PreferencesDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PreferencesDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = PreferencesDialogGui::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"slot_cbtitle", 1, param_slot_0 };
    static const QUMethod slot_1 = {"slot_new", 0, 0 };
    static const QUMethod slot_2 = {"slot_add", 0, 0 };
    static const QUMethod slot_3 = {"slot_delete", 0, 0 };
    static const QUMethod slot_4 = {"slot_new_button", 0, 0 };
    static const QUMethod slot_5 = {"slot_add_button", 0, 0 };
    static const QUMethod slot_6 = {"slot_delete_button", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"slot_textChanged", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"slot_text_buttonChanged", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"slot_clickedListView", 3, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"slot_clicked_buttonListView", 3, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ "boxID", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"slot_clickedSoundCheckBox", 1, param_slot_11 };
    static const QUMethod slot_12 = {"slot_apply", 0, 0 };
    static const QUMethod slot_13 = {"startHelpMode", 0, 0 };
    static const QUParameter param_slot_14[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_14 = {"selectFont", 1, param_slot_14 };
    static const QUMethod slot_15 = {"selectColor", 0, 0 };
    static const QUMethod slot_16 = {"selectAltColor", 0, 0 };
    static const QUMethod slot_17 = {"slot_accept", 0, 0 };
    static const QUMethod slot_18 = {"slot_reject", 0, 0 };
    static const QUMethod slot_19 = {"slot_getComputerPath", 0, 0 };
    static const QUMethod slot_20 = {"slot_getPixmapPath", 0, 0 };
    static const QUMethod slot_21 = {"slot_getGobanPicturePath", 0, 0 };
    static const QUMethod slot_22 = {"slot_getTablePicturePath", 0, 0 };
    static const QUParameter param_slot_23[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_23 = {"slot_main_time_changed", 1, param_slot_23 };
    static const QUParameter param_slot_24[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_24 = {"slot_BY_time_changed", 1, param_slot_24 };
    static const QMetaData slot_tbl[] = {
	{ "slot_cbtitle(const QString&)", &slot_0, QMetaData::Public },
	{ "slot_new()", &slot_1, QMetaData::Public },
	{ "slot_add()", &slot_2, QMetaData::Public },
	{ "slot_delete()", &slot_3, QMetaData::Public },
	{ "slot_new_button()", &slot_4, QMetaData::Public },
	{ "slot_add_button()", &slot_5, QMetaData::Public },
	{ "slot_delete_button()", &slot_6, QMetaData::Public },
	{ "slot_textChanged(const QString&)", &slot_7, QMetaData::Public },
	{ "slot_text_buttonChanged(const QString&)", &slot_8, QMetaData::Public },
	{ "slot_clickedListView(QListViewItem*,const QPoint&,int)", &slot_9, QMetaData::Public },
	{ "slot_clicked_buttonListView(QListViewItem*,const QPoint&,int)", &slot_10, QMetaData::Public },
	{ "slot_clickedSoundCheckBox(int)", &slot_11, QMetaData::Public },
	{ "slot_apply()", &slot_12, QMetaData::Public },
	{ "startHelpMode()", &slot_13, QMetaData::Public },
	{ "selectFont(int)", &slot_14, QMetaData::Public },
	{ "selectColor()", &slot_15, QMetaData::Public },
	{ "selectAltColor()", &slot_16, QMetaData::Public },
	{ "slot_accept()", &slot_17, QMetaData::Public },
	{ "slot_reject()", &slot_18, QMetaData::Public },
	{ "slot_getComputerPath()", &slot_19, QMetaData::Public },
	{ "slot_getPixmapPath()", &slot_20, QMetaData::Public },
	{ "slot_getGobanPicturePath()", &slot_21, QMetaData::Public },
	{ "slot_getTablePicturePath()", &slot_22, QMetaData::Public },
	{ "slot_main_time_changed(int)", &slot_23, QMetaData::Public },
	{ "slot_BY_time_changed(int)", &slot_24, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "unsigned int", QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"signal_addHost", 5, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"signal_delHost", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "signal_addHost(const QString&,const QString&,unsigned int,const QString&,const QString&)", &signal_0, QMetaData::Public },
	{ "signal_delHost(const QString&)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"PreferencesDialog", parentObject,
	slot_tbl, 25,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PreferencesDialog.setMetaObject( metaObj );
    return metaObj;
}

void* PreferencesDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PreferencesDialog" ) )
	return this;
    return PreferencesDialogGui::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL signal_addHost
void PreferencesDialog::signal_addHost( const QString& t0, const QString& t1, unsigned int t2, const QString& t3, const QString& t4 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[6];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_ptr.set(o+3,&t2);
    static_QUType_QString.set(o+4,t3);
    static_QUType_QString.set(o+5,t4);
    activate_signal( clist, o );
}

// SIGNAL signal_delHost
void PreferencesDialog::signal_delHost( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool PreferencesDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slot_cbtitle((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: slot_new(); break;
    case 2: slot_add(); break;
    case 3: slot_delete(); break;
    case 4: slot_new_button(); break;
    case 5: slot_add_button(); break;
    case 6: slot_delete_button(); break;
    case 7: slot_textChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 8: slot_text_buttonChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 9: slot_clickedListView((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 10: slot_clicked_buttonListView((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 11: slot_clickedSoundCheckBox((int)static_QUType_int.get(_o+1)); break;
    case 12: slot_apply(); break;
    case 13: startHelpMode(); break;
    case 14: selectFont((int)static_QUType_int.get(_o+1)); break;
    case 15: selectColor(); break;
    case 16: selectAltColor(); break;
    case 17: slot_accept(); break;
    case 18: slot_reject(); break;
    case 19: slot_getComputerPath(); break;
    case 20: slot_getPixmapPath(); break;
    case 21: slot_getGobanPicturePath(); break;
    case 22: slot_getTablePicturePath(); break;
    case 23: slot_main_time_changed((int)static_QUType_int.get(_o+1)); break;
    case 24: slot_BY_time_changed((int)static_QUType_int.get(_o+1)); break;
    default:
	return PreferencesDialogGui::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PreferencesDialog::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: signal_addHost((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(unsigned int)(*((unsigned int*)static_QUType_ptr.get(_o+3))),(const QString&)static_QUType_QString.get(_o+4),(const QString&)static_QUType_QString.get(_o+5)); break;
    case 1: signal_delHost((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return PreferencesDialogGui::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool PreferencesDialog::qt_property( int id, int f, QVariant* v)
{
    return PreferencesDialogGui::qt_property( id, f, v);
}

bool PreferencesDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
