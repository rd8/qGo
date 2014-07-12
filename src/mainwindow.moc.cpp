/****************************************************************************
** MainWindow meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Jul 12 14:43:05 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "mainwindow.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MainWindow::className() const
{
    return "MainWindow";
}

QMetaObject *MainWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MainWindow( "MainWindow", &MainWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MainWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MainWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MainWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"slotFileNewBoard", 0, 0 };
    static const QUMethod slot_1 = {"slotFileNewGame", 0, 0 };
    static const QUMethod slot_2 = {"slotFileOpen", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_3 = {"slotFileSave", 1, param_slot_3 };
    static const QUMethod slot_4 = {"slotFileClose", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_5 = {"slotFileSaveAs", 1, param_slot_5 };
    static const QUMethod slot_6 = {"slotFileImportASCII", 0, 0 };
    static const QUMethod slot_7 = {"slotFileImportASCIIClipB", 0, 0 };
    static const QUMethod slot_8 = {"slotFileExportASCII", 0, 0 };
    static const QUMethod slot_9 = {"slotFileImportSgfClipB", 0, 0 };
    static const QUMethod slot_10 = {"slotFileExportSgfClipB", 0, 0 };
    static const QUMethod slot_11 = {"slotFileExportPic", 0, 0 };
    static const QUMethod slot_12 = {"slotFileExportPicClipB", 0, 0 };
    static const QUMethod slot_13 = {"slotEditCut", 0, 0 };
    static const QUMethod slot_14 = {"slotEditPaste", 0, 0 };
    static const QUMethod slot_15 = {"slotEditPasteBrother", 0, 0 };
    static const QUMethod slot_16 = {"slotEditDelete", 0, 0 };
    static const QUMethod slot_17 = {"slotEditHideStones", 0, 0 };
    static const QUMethod slot_18 = {"slotEditNumberMoves", 0, 0 };
    static const QUMethod slot_19 = {"slotEditMarkBrothers", 0, 0 };
    static const QUMethod slot_20 = {"slotEditMarkSons", 0, 0 };
    static const QUMethod slot_21 = {"slotNavBackward", 0, 0 };
    static const QUMethod slot_22 = {"slotNavForward", 0, 0 };
    static const QUMethod slot_23 = {"slotNavFirst", 0, 0 };
    static const QUMethod slot_24 = {"slotNavLast", 0, 0 };
    static const QUMethod slot_25 = {"slotNavLastByTime", 0, 0 };
    static const QUMethod slot_26 = {"slotNavNextVar", 0, 0 };
    static const QUMethod slot_27 = {"slotNavPrevVar", 0, 0 };
    static const QUMethod slot_28 = {"slotNavNextComment", 0, 0 };
    static const QUMethod slot_29 = {"slotNavPrevComment", 0, 0 };
    static const QUMethod slot_30 = {"slotNavIntersection", 0, 0 };
    static const QUMethod slot_31 = {"slotNavMainBranch", 0, 0 };
    static const QUMethod slot_32 = {"slotNavStartVar", 0, 0 };
    static const QUMethod slot_33 = {"slotNavNextBranch", 0, 0 };
    static const QUMethod slot_34 = {"slotNavNthMove", 0, 0 };
    static const QUParameter param_slot_35[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_35 = {"slotNavAutoplay", 1, param_slot_35 };
    static const QUMethod slot_36 = {"slotNavEmptyBranch", 0, 0 };
    static const QUMethod slot_37 = {"slotNavCloneNode", 0, 0 };
    static const QUMethod slot_38 = {"slotNavSwapVariations", 0, 0 };
    static const QUMethod slot_39 = {"slotSetPreferences", 0, 0 };
    static const QUMethod slot_40 = {"slotSetGameInfo", 0, 0 };
    static const QUParameter param_slot_41[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_41 = {"slotViewFileBar", 1, param_slot_41 };
    static const QUParameter param_slot_42[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_42 = {"slotViewToolBar", 1, param_slot_42 };
    static const QUParameter param_slot_43[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_43 = {"slotViewEditBar", 1, param_slot_43 };
    static const QUParameter param_slot_44[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_44 = {"slotViewMenuBar", 1, param_slot_44 };
    static const QUParameter param_slot_45[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_45 = {"slotViewStatusBar", 1, param_slot_45 };
    static const QUParameter param_slot_46[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_46 = {"slotViewCoords", 1, param_slot_46 };
    static const QUParameter param_slot_47[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_47 = {"slotViewSlider", 1, param_slot_47 };
    static const QUMethod slot_48 = {"slotViewLeftSidebar", 0, 0 };
    static const QUParameter param_slot_49[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_49 = {"slotViewSidebar", 1, param_slot_49 };
    static const QUParameter param_slot_50[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_50 = {"slotViewComment", 1, param_slot_50 };
    static const QUParameter param_slot_51[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_51 = {"slotViewVertComment", 1, param_slot_51 };
    static const QUParameter param_slot_52[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_52 = {"slotViewPinComment", 1, param_slot_52 };
    static const QUMethod slot_53 = {"slotViewIncreaseSize", 0, 0 };
    static const QUMethod slot_54 = {"slotViewDecreaseSize", 0, 0 };
    static const QUMethod slot_55 = {"slotViewSaveSize", 0, 0 };
    static const QUParameter param_slot_56[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_56 = {"slotViewFullscreen", 1, param_slot_56 };
    static const QUMethod slot_57 = {"slotHelpManual", 0, 0 };
    static const QUMethod slot_58 = {"slotHelpSoundInfo", 0, 0 };
    static const QUMethod slot_59 = {"slotHelpAbout", 0, 0 };
    static const QUMethod slot_60 = {"slotHelpAboutQt", 0, 0 };
    static const QUMethod slot_61 = {"slotToggleMarks", 0, 0 };
    static const QUMethod slot_62 = {"slotTimerForward", 0, 0 };
    static const QUMethod slot_63 = {"slot_editBoardInNewWindow", 0, 0 };
    static const QUMethod slot_64 = {"slot_animateClick", 0, 0 };
    static const QUParameter param_slot_65[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_65 = {"slotSoundToggle", 1, param_slot_65 };
    static const QMetaData slot_tbl[] = {
	{ "slotFileNewBoard()", &slot_0, QMetaData::Public },
	{ "slotFileNewGame()", &slot_1, QMetaData::Public },
	{ "slotFileOpen()", &slot_2, QMetaData::Public },
	{ "slotFileSave()", &slot_3, QMetaData::Public },
	{ "slotFileClose()", &slot_4, QMetaData::Public },
	{ "slotFileSaveAs()", &slot_5, QMetaData::Public },
	{ "slotFileImportASCII()", &slot_6, QMetaData::Public },
	{ "slotFileImportASCIIClipB()", &slot_7, QMetaData::Public },
	{ "slotFileExportASCII()", &slot_8, QMetaData::Public },
	{ "slotFileImportSgfClipB()", &slot_9, QMetaData::Public },
	{ "slotFileExportSgfClipB()", &slot_10, QMetaData::Public },
	{ "slotFileExportPic()", &slot_11, QMetaData::Public },
	{ "slotFileExportPicClipB()", &slot_12, QMetaData::Public },
	{ "slotEditCut()", &slot_13, QMetaData::Public },
	{ "slotEditPaste()", &slot_14, QMetaData::Public },
	{ "slotEditPasteBrother()", &slot_15, QMetaData::Public },
	{ "slotEditDelete()", &slot_16, QMetaData::Public },
	{ "slotEditHideStones()", &slot_17, QMetaData::Public },
	{ "slotEditNumberMoves()", &slot_18, QMetaData::Public },
	{ "slotEditMarkBrothers()", &slot_19, QMetaData::Public },
	{ "slotEditMarkSons()", &slot_20, QMetaData::Public },
	{ "slotNavBackward()", &slot_21, QMetaData::Public },
	{ "slotNavForward()", &slot_22, QMetaData::Public },
	{ "slotNavFirst()", &slot_23, QMetaData::Public },
	{ "slotNavLast()", &slot_24, QMetaData::Public },
	{ "slotNavLastByTime()", &slot_25, QMetaData::Public },
	{ "slotNavNextVar()", &slot_26, QMetaData::Public },
	{ "slotNavPrevVar()", &slot_27, QMetaData::Public },
	{ "slotNavNextComment()", &slot_28, QMetaData::Public },
	{ "slotNavPrevComment()", &slot_29, QMetaData::Public },
	{ "slotNavIntersection()", &slot_30, QMetaData::Public },
	{ "slotNavMainBranch()", &slot_31, QMetaData::Public },
	{ "slotNavStartVar()", &slot_32, QMetaData::Public },
	{ "slotNavNextBranch()", &slot_33, QMetaData::Public },
	{ "slotNavNthMove()", &slot_34, QMetaData::Public },
	{ "slotNavAutoplay(bool)", &slot_35, QMetaData::Public },
	{ "slotNavEmptyBranch()", &slot_36, QMetaData::Public },
	{ "slotNavCloneNode()", &slot_37, QMetaData::Public },
	{ "slotNavSwapVariations()", &slot_38, QMetaData::Public },
	{ "slotSetPreferences()", &slot_39, QMetaData::Public },
	{ "slotSetGameInfo()", &slot_40, QMetaData::Public },
	{ "slotViewFileBar(bool)", &slot_41, QMetaData::Public },
	{ "slotViewToolBar(bool)", &slot_42, QMetaData::Public },
	{ "slotViewEditBar(bool)", &slot_43, QMetaData::Public },
	{ "slotViewMenuBar(bool)", &slot_44, QMetaData::Public },
	{ "slotViewStatusBar(bool)", &slot_45, QMetaData::Public },
	{ "slotViewCoords(bool)", &slot_46, QMetaData::Public },
	{ "slotViewSlider(bool)", &slot_47, QMetaData::Public },
	{ "slotViewLeftSidebar()", &slot_48, QMetaData::Public },
	{ "slotViewSidebar(bool)", &slot_49, QMetaData::Public },
	{ "slotViewComment(bool)", &slot_50, QMetaData::Public },
	{ "slotViewVertComment(bool)", &slot_51, QMetaData::Public },
	{ "slotViewPinComment(bool)", &slot_52, QMetaData::Public },
	{ "slotViewIncreaseSize()", &slot_53, QMetaData::Public },
	{ "slotViewDecreaseSize()", &slot_54, QMetaData::Public },
	{ "slotViewSaveSize()", &slot_55, QMetaData::Public },
	{ "slotViewFullscreen(bool)", &slot_56, QMetaData::Public },
	{ "slotHelpManual()", &slot_57, QMetaData::Public },
	{ "slotHelpSoundInfo()", &slot_58, QMetaData::Public },
	{ "slotHelpAbout()", &slot_59, QMetaData::Public },
	{ "slotHelpAboutQt()", &slot_60, QMetaData::Public },
	{ "slotToggleMarks()", &slot_61, QMetaData::Public },
	{ "slotTimerForward()", &slot_62, QMetaData::Public },
	{ "slot_editBoardInNewWindow()", &slot_63, QMetaData::Public },
	{ "slot_animateClick()", &slot_64, QMetaData::Public },
	{ "slotSoundToggle(bool)", &slot_65, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"signal_closeevent", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "signal_closeevent()", &signal_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MainWindow", parentObject,
	slot_tbl, 66,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MainWindow.setMetaObject( metaObj );
    return metaObj;
}

void* MainWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MainWindow" ) )
	return this;
    if ( !qstrcmp( clname, "Misc<QString>" ) )
	return (Misc<QString>*)this;
    return QMainWindow::qt_cast( clname );
}

// SIGNAL signal_closeevent
void MainWindow::signal_closeevent()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool MainWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotFileNewBoard(); break;
    case 1: slotFileNewGame(); break;
    case 2: slotFileOpen(); break;
    case 3: static_QUType_bool.set(_o,slotFileSave()); break;
    case 4: slotFileClose(); break;
    case 5: static_QUType_bool.set(_o,slotFileSaveAs()); break;
    case 6: slotFileImportASCII(); break;
    case 7: slotFileImportASCIIClipB(); break;
    case 8: slotFileExportASCII(); break;
    case 9: slotFileImportSgfClipB(); break;
    case 10: slotFileExportSgfClipB(); break;
    case 11: slotFileExportPic(); break;
    case 12: slotFileExportPicClipB(); break;
    case 13: slotEditCut(); break;
    case 14: slotEditPaste(); break;
    case 15: slotEditPasteBrother(); break;
    case 16: slotEditDelete(); break;
    case 17: slotEditHideStones(); break;
    case 18: slotEditNumberMoves(); break;
    case 19: slotEditMarkBrothers(); break;
    case 20: slotEditMarkSons(); break;
    case 21: slotNavBackward(); break;
    case 22: slotNavForward(); break;
    case 23: slotNavFirst(); break;
    case 24: slotNavLast(); break;
    case 25: slotNavLastByTime(); break;
    case 26: slotNavNextVar(); break;
    case 27: slotNavPrevVar(); break;
    case 28: slotNavNextComment(); break;
    case 29: slotNavPrevComment(); break;
    case 30: slotNavIntersection(); break;
    case 31: slotNavMainBranch(); break;
    case 32: slotNavStartVar(); break;
    case 33: slotNavNextBranch(); break;
    case 34: slotNavNthMove(); break;
    case 35: slotNavAutoplay((bool)static_QUType_bool.get(_o+1)); break;
    case 36: slotNavEmptyBranch(); break;
    case 37: slotNavCloneNode(); break;
    case 38: slotNavSwapVariations(); break;
    case 39: slotSetPreferences(); break;
    case 40: slotSetGameInfo(); break;
    case 41: slotViewFileBar((bool)static_QUType_bool.get(_o+1)); break;
    case 42: slotViewToolBar((bool)static_QUType_bool.get(_o+1)); break;
    case 43: slotViewEditBar((bool)static_QUType_bool.get(_o+1)); break;
    case 44: slotViewMenuBar((bool)static_QUType_bool.get(_o+1)); break;
    case 45: slotViewStatusBar((bool)static_QUType_bool.get(_o+1)); break;
    case 46: slotViewCoords((bool)static_QUType_bool.get(_o+1)); break;
    case 47: slotViewSlider((bool)static_QUType_bool.get(_o+1)); break;
    case 48: slotViewLeftSidebar(); break;
    case 49: slotViewSidebar((bool)static_QUType_bool.get(_o+1)); break;
    case 50: slotViewComment((bool)static_QUType_bool.get(_o+1)); break;
    case 51: slotViewVertComment((bool)static_QUType_bool.get(_o+1)); break;
    case 52: slotViewPinComment((bool)static_QUType_bool.get(_o+1)); break;
    case 53: slotViewIncreaseSize(); break;
    case 54: slotViewDecreaseSize(); break;
    case 55: slotViewSaveSize(); break;
    case 56: slotViewFullscreen((bool)static_QUType_bool.get(_o+1)); break;
    case 57: slotHelpManual(); break;
    case 58: slotHelpSoundInfo(); break;
    case 59: slotHelpAbout(); break;
    case 60: slotHelpAboutQt(); break;
    case 61: slotToggleMarks(); break;
    case 62: slotTimerForward(); break;
    case 63: slot_editBoardInNewWindow(); break;
    case 64: slot_animateClick(); break;
    case 65: slotSoundToggle((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MainWindow::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: signal_closeevent(); break;
    default:
	return QMainWindow::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool MainWindow::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool MainWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
