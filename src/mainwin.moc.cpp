/****************************************************************************
** ClientWindow meta object code from reading C++ file 'mainwin.h'
**
** Created: Sat Jul 12 14:42:57 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "mainwin.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ClientWindow::className() const
{
    return "ClientWindow";
}

QMetaObject *ClientWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ClientWindow( "ClientWindow", &ClientWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ClientWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ClientWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ClientWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ClientWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ClientWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ClientWindowGui::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "i", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"slot_setBytesIn", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "i", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"slot_setBytesOut", 1, param_slot_1 };
    static const QUMethod slot_2 = {"slot_updateFont", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"slot_refresh", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"slot_playerPopup", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"slot_gamesPopup", 1, param_slot_5 };
    static const QUMethod slot_6 = {"slot_pbRelTabs", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_7 = {"slot_pbRelOneTab", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_ptr, "Player", QUParameter::In }
    };
    static const QUMethod slot_8 = {"slot_statsPlayer", 1, param_slot_8 };
    static const QUMethod slot_9 = {"slot_cbExtUserInfo", 0, 0 };
    static const QUMethod slot_10 = {"slot_cblooking", 0, 0 };
    static const QUMethod slot_11 = {"slot_cbopen", 0, 0 };
    static const QUMethod slot_12 = {"slot_cbquiet", 0, 0 };
    static const QUMethod slot_13 = {"quit", 0, 0 };
    static const QUParameter param_slot_14[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_14 = {"slot_cbconnect", 1, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"slot_connect", 1, param_slot_15 };
    static const QUMethod slot_16 = {"slot_pbrefreshgames", 0, 0 };
    static const QUMethod slot_17 = {"slot_pbrefreshplayers", 0, 0 };
    static const QUParameter param_slot_18[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_18 = {"slot_toolbaractivated", 1, param_slot_18 };
    static const QUParameter param_slot_19[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_19 = {"slot_cmdactivated", 1, param_slot_19 };
    static const QUParameter param_slot_20[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_20 = {"slot_cmdactivated_int", 1, param_slot_20 };
    static const QUParameter param_slot_21[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_21 = {"slot_watchplayer", 1, param_slot_21 };
    static const QUParameter param_slot_22[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_22 = {"slot_excludeplayer", 1, param_slot_22 };
    static const QUMethod slot_23 = {"slot_localBoard", 0, 0 };
    static const QUMethod slot_24 = {"slot_local19", 0, 0 };
    static const QUMethod slot_25 = {"slot_preferences", 0, 0 };
    static const QUMethod slot_26 = {"slot_pbuser1", 0, 0 };
    static const QUMethod slot_27 = {"slot_pbuser2", 0, 0 };
    static const QUMethod slot_28 = {"slot_pbuser3", 0, 0 };
    static const QUMethod slot_29 = {"slot_pbuser4", 0, 0 };
    static const QUParameter param_slot_30[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_30 = {"sendTextToApp", 1, param_slot_30 };
    static const QUParameter param_slot_31[] = {
	{ 0, &static_QUType_ptr, "Player", QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_31 = {"slot_player", 2, param_slot_31 };
    static const QUParameter param_slot_32[] = {
	{ 0, &static_QUType_ptr, "Game", QUParameter::In }
    };
    static const QUMethod slot_32 = {"slot_game", 1, param_slot_32 };
    static const QUParameter param_slot_33[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_33 = {"slot_message", 1, param_slot_33 };
    static const QUParameter param_slot_34[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0a", QUParameter::In }
    };
    static const QUMethod slot_34 = {"slot_message", 2, param_slot_34 };
    static const QUParameter param_slot_35[] = {
	{ 0, &static_QUType_ptr, "GSName", QUParameter::InOut }
    };
    static const QUMethod slot_35 = {"slot_svname", 1, param_slot_35 };
    static const QUParameter param_slot_36[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::InOut }
    };
    static const QUMethod slot_36 = {"slot_accname", 1, param_slot_36 };
    static const QUParameter param_slot_37[] = {
	{ 0, &static_QUType_ptr, "Status", QUParameter::In }
    };
    static const QUMethod slot_37 = {"slot_status", 1, param_slot_37 };
    static const QUMethod slot_38 = {"slot_connclosed", 0, 0 };
    static const QUParameter param_slot_39[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_39 = {"slot_talk", 3, param_slot_39 };
    static const QUParameter param_slot_40[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_40 = {"slot_checkbox", 2, param_slot_40 };
    static const QUParameter param_slot_41[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_41 = {"slot_addToObservationList", 1, param_slot_41 };
    static const QUParameter param_slot_42[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_42 = {"slot_channelinfo", 2, param_slot_42 };
    static const QUParameter param_slot_43[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_43 = {"slot_matchrequest", 2, param_slot_43 };
    static const QUParameter param_slot_44[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_44 = {"slot_removeMatchDialog", 1, param_slot_44 };
    static const QUParameter param_slot_45[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_45 = {"slot_shout", 2, param_slot_45 };
    static const QUParameter param_slot_46[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_46 = {"slot_room", 2, param_slot_46 };
    static const QUParameter param_slot_47[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_47 = {"slot_enterRoom", 1, param_slot_47 };
    static const QUMethod slot_48 = {"slot_leaveRoom", 0, 0 };
    static const QUParameter param_slot_49[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_49 = {"slot_RoomListClicked", 1, param_slot_49 };
    static const QUParameter param_slot_50[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_50 = {"slot_addSeekCondition", 5, param_slot_50 };
    static const QUMethod slot_51 = {"slot_clearSeekCondition", 0, 0 };
    static const QUMethod slot_52 = {"slot_cancelSeek", 0, 0 };
    static const QUParameter param_slot_53[] = {
	{ "i", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_53 = {"slot_seek", 1, param_slot_53 };
    static const QUParameter param_slot_54[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_54 = {"slot_seek", 1, param_slot_54 };
    static const QUParameter param_slot_55[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_55 = {"slot_SeekList", 2, param_slot_55 };
    static const QUParameter param_slot_56[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_56 = {"slot_mouse_games", 4, param_slot_56 };
    static const QUParameter param_slot_57[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_57 = {"slot_mouse_players", 4, param_slot_57 };
    static const QUParameter param_slot_58[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_58 = {"slot_click_games", 1, param_slot_58 };
    static const QUParameter param_slot_59[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_59 = {"slot_click_players", 1, param_slot_59 };
    static const QUParameter param_slot_60[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_60 = {"slot_menu_games", 3, param_slot_60 };
    static const QUParameter param_slot_61[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_61 = {"slot_menu_players", 3, param_slot_61 };
    static const QUParameter param_slot_62[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_62 = {"slot_playerContentsMoving", 2, param_slot_62 };
    static const QUParameter param_slot_63[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_63 = {"slot_gamesContentsMoving", 2, param_slot_63 };
    static const QUParameter param_slot_64[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::InOut },
	{ 0, &static_QUType_QString, 0, QUParameter::InOut }
    };
    static const QUMethod slot_64 = {"slot_talkto", 2, param_slot_64 };
    static const QUParameter param_slot_65[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_65 = {"slot_sendcommand", 2, param_slot_65 };
    static const QUMethod slot_66 = {"slotFileNewBoard", 0, 0 };
    static const QUMethod slot_67 = {"slotFileNewGame", 0, 0 };
    static const QUMethod slot_68 = {"slotFileOpen", 0, 0 };
    static const QUMethod slot_69 = {"slotComputerPlay", 0, 0 };
    static const QUMethod slot_70 = {"slotHelpManual", 0, 0 };
    static const QUMethod slot_71 = {"slotHelpSoundInfo", 0, 0 };
    static const QUMethod slot_72 = {"slotHelpAbout", 0, 0 };
    static const QUMethod slot_73 = {"slotHelpAboutQt", 0, 0 };
    static const QUMethod slot_74 = {"slotNewVersion", 0, 0 };
    static const QUMethod slot_75 = {"slotMenuConnect", 0, 0 };
    static const QUMethod slot_76 = {"slotMenuDisconnect", 0, 0 };
    static const QUMethod slot_77 = {"slotMenuEditServers", 0, 0 };
    static const QUParameter param_slot_78[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_78 = {"slotViewToolBar", 1, param_slot_78 };
    static const QUParameter param_slot_79[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_79 = {"slotViewStatusBar", 1, param_slot_79 };
    static const QUParameter param_slot_80[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_80 = {"slotViewMenuBar", 1, param_slot_80 };
    static const QUParameter param_slot_81[] = {
	{ "toggle", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_81 = {"slotViewUserToolBar", 1, param_slot_81 };
    static const QUParameter param_slot_82[] = {
	{ "i", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_82 = {"slotUserButtonClicked", 1, param_slot_82 };
    static const QUMethod slot_83 = {"set_tn_ready", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "slot_setBytesIn(int)", &slot_0, QMetaData::Public },
	{ "slot_setBytesOut(int)", &slot_1, QMetaData::Public },
	{ "slot_updateFont()", &slot_2, QMetaData::Public },
	{ "slot_refresh(int)", &slot_3, QMetaData::Public },
	{ "slot_playerPopup(int)", &slot_4, QMetaData::Public },
	{ "slot_gamesPopup(int)", &slot_5, QMetaData::Public },
	{ "slot_pbRelTabs()", &slot_6, QMetaData::Public },
	{ "slot_pbRelOneTab(QWidget*)", &slot_7, QMetaData::Public },
	{ "slot_statsPlayer(Player*)", &slot_8, QMetaData::Public },
	{ "slot_cbExtUserInfo()", &slot_9, QMetaData::Public },
	{ "slot_cblooking()", &slot_10, QMetaData::Public },
	{ "slot_cbopen()", &slot_11, QMetaData::Public },
	{ "slot_cbquiet()", &slot_12, QMetaData::Public },
	{ "quit()", &slot_13, QMetaData::Public },
	{ "slot_cbconnect(const QString&)", &slot_14, QMetaData::Public },
	{ "slot_connect(bool)", &slot_15, QMetaData::Public },
	{ "slot_pbrefreshgames()", &slot_16, QMetaData::Public },
	{ "slot_pbrefreshplayers()", &slot_17, QMetaData::Public },
	{ "slot_toolbaractivated(const QString&)", &slot_18, QMetaData::Public },
	{ "slot_cmdactivated(const QString&)", &slot_19, QMetaData::Public },
	{ "slot_cmdactivated_int(int)", &slot_20, QMetaData::Public },
	{ "slot_watchplayer(const QString&)", &slot_21, QMetaData::Public },
	{ "slot_excludeplayer(const QString&)", &slot_22, QMetaData::Public },
	{ "slot_localBoard()", &slot_23, QMetaData::Public },
	{ "slot_local19()", &slot_24, QMetaData::Public },
	{ "slot_preferences()", &slot_25, QMetaData::Public },
	{ "slot_pbuser1()", &slot_26, QMetaData::Public },
	{ "slot_pbuser2()", &slot_27, QMetaData::Public },
	{ "slot_pbuser3()", &slot_28, QMetaData::Public },
	{ "slot_pbuser4()", &slot_29, QMetaData::Public },
	{ "sendTextToApp(const QString&)", &slot_30, QMetaData::Public },
	{ "slot_player(Player*,bool)", &slot_31, QMetaData::Public },
	{ "slot_game(Game*)", &slot_32, QMetaData::Public },
	{ "slot_message(QString)", &slot_33, QMetaData::Public },
	{ "slot_message(QString,QColor)", &slot_34, QMetaData::Public },
	{ "slot_svname(GSName&)", &slot_35, QMetaData::Public },
	{ "slot_accname(QString&)", &slot_36, QMetaData::Public },
	{ "slot_status(Status)", &slot_37, QMetaData::Public },
	{ "slot_connclosed()", &slot_38, QMetaData::Public },
	{ "slot_talk(const QString&,const QString&,bool)", &slot_39, QMetaData::Public },
	{ "slot_checkbox(int,bool)", &slot_40, QMetaData::Public },
	{ "slot_addToObservationList(int)", &slot_41, QMetaData::Public },
	{ "slot_channelinfo(int,const QString&)", &slot_42, QMetaData::Public },
	{ "slot_matchrequest(const QString&,bool)", &slot_43, QMetaData::Public },
	{ "slot_removeMatchDialog(const QString&)", &slot_44, QMetaData::Public },
	{ "slot_shout(const QString&,const QString&)", &slot_45, QMetaData::Public },
	{ "slot_room(const QString&,bool)", &slot_46, QMetaData::Public },
	{ "slot_enterRoom(const QString&)", &slot_47, QMetaData::Public },
	{ "slot_leaveRoom()", &slot_48, QMetaData::Public },
	{ "slot_RoomListClicked(QListBoxItem*)", &slot_49, QMetaData::Public },
	{ "slot_addSeekCondition(const QString&,const QString&,const QString&,const QString&,const QString&)", &slot_50, QMetaData::Public },
	{ "slot_clearSeekCondition()", &slot_51, QMetaData::Public },
	{ "slot_cancelSeek()", &slot_52, QMetaData::Public },
	{ "slot_seek(int)", &slot_53, QMetaData::Public },
	{ "slot_seek(bool)", &slot_54, QMetaData::Public },
	{ "slot_SeekList(const QString&,const QString&)", &slot_55, QMetaData::Public },
	{ "slot_mouse_games(int,QListViewItem*,const QPoint&,int)", &slot_56, QMetaData::Public },
	{ "slot_mouse_players(int,QListViewItem*,const QPoint&,int)", &slot_57, QMetaData::Public },
	{ "slot_click_games(QListViewItem*)", &slot_58, QMetaData::Public },
	{ "slot_click_players(QListViewItem*)", &slot_59, QMetaData::Public },
	{ "slot_menu_games(QListViewItem*,const QPoint&,int)", &slot_60, QMetaData::Public },
	{ "slot_menu_players(QListViewItem*,const QPoint&,int)", &slot_61, QMetaData::Public },
	{ "slot_playerContentsMoving(int,int)", &slot_62, QMetaData::Public },
	{ "slot_gamesContentsMoving(int,int)", &slot_63, QMetaData::Public },
	{ "slot_talkto(QString&,QString&)", &slot_64, QMetaData::Public },
	{ "slot_sendcommand(const QString&,bool)", &slot_65, QMetaData::Public },
	{ "slotFileNewBoard()", &slot_66, QMetaData::Public },
	{ "slotFileNewGame()", &slot_67, QMetaData::Public },
	{ "slotFileOpen()", &slot_68, QMetaData::Public },
	{ "slotComputerPlay()", &slot_69, QMetaData::Public },
	{ "slotHelpManual()", &slot_70, QMetaData::Public },
	{ "slotHelpSoundInfo()", &slot_71, QMetaData::Public },
	{ "slotHelpAbout()", &slot_72, QMetaData::Public },
	{ "slotHelpAboutQt()", &slot_73, QMetaData::Public },
	{ "slotNewVersion()", &slot_74, QMetaData::Public },
	{ "slotMenuConnect()", &slot_75, QMetaData::Public },
	{ "slotMenuDisconnect()", &slot_76, QMetaData::Public },
	{ "slotMenuEditServers()", &slot_77, QMetaData::Public },
	{ "slotViewToolBar(bool)", &slot_78, QMetaData::Public },
	{ "slotViewStatusBar(bool)", &slot_79, QMetaData::Public },
	{ "slotViewMenuBar(bool)", &slot_80, QMetaData::Public },
	{ "slotViewUserToolBar(bool)", &slot_81, QMetaData::Public },
	{ "slotUserButtonClicked(int)", &slot_82, QMetaData::Public },
	{ "set_tn_ready()", &slot_83, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"signal_cmdsent", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "Game", QUParameter::In }
    };
    static const QUMethod signal_1 = {"signal_move", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_ptr, "QNewGameDlg", QUParameter::In }
    };
    static const QUMethod signal_2 = {"signal_computer_game", 1, param_signal_2 };
    static const QMetaData signal_tbl[] = {
	{ "signal_cmdsent(const QString&)", &signal_0, QMetaData::Public },
	{ "signal_move(Game*)", &signal_1, QMetaData::Public },
	{ "signal_computer_game(QNewGameDlg*)", &signal_2, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ClientWindow", parentObject,
	slot_tbl, 84,
	signal_tbl, 3,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ClientWindow.setMetaObject( metaObj );
    return metaObj;
}

void* ClientWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ClientWindow" ) )
	return this;
    if ( !qstrcmp( clname, "Misc<QString>" ) )
	return (Misc<QString>*)this;
    return ClientWindowGui::qt_cast( clname );
}

// SIGNAL signal_cmdsent
void ClientWindow::signal_cmdsent( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL signal_move
void ClientWindow::signal_move( Game* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL signal_computer_game
void ClientWindow::signal_computer_game( QNewGameDlg* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool ClientWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slot_setBytesIn((int)static_QUType_int.get(_o+1)); break;
    case 1: slot_setBytesOut((int)static_QUType_int.get(_o+1)); break;
    case 2: slot_updateFont(); break;
    case 3: slot_refresh((int)static_QUType_int.get(_o+1)); break;
    case 4: slot_playerPopup((int)static_QUType_int.get(_o+1)); break;
    case 5: slot_gamesPopup((int)static_QUType_int.get(_o+1)); break;
    case 6: slot_pbRelTabs(); break;
    case 7: slot_pbRelOneTab((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 8: slot_statsPlayer((Player*)static_QUType_ptr.get(_o+1)); break;
    case 9: slot_cbExtUserInfo(); break;
    case 10: slot_cblooking(); break;
    case 11: slot_cbopen(); break;
    case 12: slot_cbquiet(); break;
    case 13: quit(); break;
    case 14: slot_cbconnect((const QString&)static_QUType_QString.get(_o+1)); break;
    case 15: slot_connect((bool)static_QUType_bool.get(_o+1)); break;
    case 16: slot_pbrefreshgames(); break;
    case 17: slot_pbrefreshplayers(); break;
    case 18: slot_toolbaractivated((const QString&)static_QUType_QString.get(_o+1)); break;
    case 19: slot_cmdactivated((const QString&)static_QUType_QString.get(_o+1)); break;
    case 20: slot_cmdactivated_int((int)static_QUType_int.get(_o+1)); break;
    case 21: slot_watchplayer((const QString&)static_QUType_QString.get(_o+1)); break;
    case 22: slot_excludeplayer((const QString&)static_QUType_QString.get(_o+1)); break;
    case 23: slot_localBoard(); break;
    case 24: slot_local19(); break;
    case 25: slot_preferences(); break;
    case 26: slot_pbuser1(); break;
    case 27: slot_pbuser2(); break;
    case 28: slot_pbuser3(); break;
    case 29: slot_pbuser4(); break;
    case 30: sendTextToApp((const QString&)static_QUType_QString.get(_o+1)); break;
    case 31: slot_player((Player*)static_QUType_ptr.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 32: slot_game((Game*)static_QUType_ptr.get(_o+1)); break;
    case 33: slot_message((QString)static_QUType_QString.get(_o+1)); break;
    case 34: slot_message((QString)static_QUType_QString.get(_o+1),(QColor)(*((QColor*)static_QUType_ptr.get(_o+2)))); break;
    case 35: slot_svname((GSName&)*((GSName*)static_QUType_ptr.get(_o+1))); break;
    case 36: slot_accname((QString&)static_QUType_QString.get(_o+1)); break;
    case 37: slot_status((Status)(*((Status*)static_QUType_ptr.get(_o+1)))); break;
    case 38: slot_connclosed(); break;
    case 39: slot_talk((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 40: slot_checkbox((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 41: slot_addToObservationList((int)static_QUType_int.get(_o+1)); break;
    case 42: slot_channelinfo((int)static_QUType_int.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 43: slot_matchrequest((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 44: slot_removeMatchDialog((const QString&)static_QUType_QString.get(_o+1)); break;
    case 45: slot_shout((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 46: slot_room((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 47: slot_enterRoom((const QString&)static_QUType_QString.get(_o+1)); break;
    case 48: slot_leaveRoom(); break;
    case 49: slot_RoomListClicked((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 50: slot_addSeekCondition((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(const QString&)static_QUType_QString.get(_o+4),(const QString&)static_QUType_QString.get(_o+5)); break;
    case 51: slot_clearSeekCondition(); break;
    case 52: slot_cancelSeek(); break;
    case 53: slot_seek((int)static_QUType_int.get(_o+1)); break;
    case 54: slot_seek((bool)static_QUType_bool.get(_o+1)); break;
    case 55: slot_SeekList((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 56: slot_mouse_games((int)static_QUType_int.get(_o+1),(QListViewItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3)),(int)static_QUType_int.get(_o+4)); break;
    case 57: slot_mouse_players((int)static_QUType_int.get(_o+1),(QListViewItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3)),(int)static_QUType_int.get(_o+4)); break;
    case 58: slot_click_games((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 59: slot_click_players((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 60: slot_menu_games((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 61: slot_menu_players((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 62: slot_playerContentsMoving((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 63: slot_gamesContentsMoving((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 64: slot_talkto((QString&)static_QUType_QString.get(_o+1),(QString&)static_QUType_QString.get(_o+2)); break;
    case 65: slot_sendcommand((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 66: slotFileNewBoard(); break;
    case 67: slotFileNewGame(); break;
    case 68: slotFileOpen(); break;
    case 69: slotComputerPlay(); break;
    case 70: slotHelpManual(); break;
    case 71: slotHelpSoundInfo(); break;
    case 72: slotHelpAbout(); break;
    case 73: slotHelpAboutQt(); break;
    case 74: slotNewVersion(); break;
    case 75: slotMenuConnect(); break;
    case 76: slotMenuDisconnect(); break;
    case 77: slotMenuEditServers(); break;
    case 78: slotViewToolBar((bool)static_QUType_bool.get(_o+1)); break;
    case 79: slotViewStatusBar((bool)static_QUType_bool.get(_o+1)); break;
    case 80: slotViewMenuBar((bool)static_QUType_bool.get(_o+1)); break;
    case 81: slotViewUserToolBar((bool)static_QUType_bool.get(_o+1)); break;
    case 82: slotUserButtonClicked((int)static_QUType_int.get(_o+1)); break;
    case 83: set_tn_ready(); break;
    default:
	return ClientWindowGui::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ClientWindow::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: signal_cmdsent((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: signal_move((Game*)static_QUType_ptr.get(_o+1)); break;
    case 2: signal_computer_game((QNewGameDlg*)static_QUType_ptr.get(_o+1)); break;
    default:
	return ClientWindowGui::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ClientWindow::qt_property( int id, int f, QVariant* v)
{
    return ClientWindowGui::qt_property( id, f, v);
}

bool ClientWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
