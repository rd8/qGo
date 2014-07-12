/*
 * mainwindow.h
 */

#ifndef MAINWIN_H
#define MAINWIN_H

#include "clientwindow_gui.h"
#include "gui_dialog.h"
#include "setting.h"
#include "tables.h"
#include "config.h"
#include "telnet.h"
#include "igsinterface.h"
#include "parser.h"
#include "gs_globals.h"
#include "misc.h"
#include "gamedialog.h"
#include "maintable.h"
#include "gamestable.h"
#include "playertable.h"
#include "mainwindow.h"
#include <qwidget.h>
#include <qapplication.h>
#include <qdialog.h>
#include <qpushbutton.h>
#include <qmessagebox.h>
#include <qfiledialog.h>
#include <qdir.h>
#include <qlabel.h>
#include <qlistview.h>
#include <qcheckbox.h>
#include <qtextstream.h>
#include <qtextview.h>
//#include <qmultilineedit.h>
#include <qtextedit.h>
#include <qtextbrowser.h> 
#include <qstring.h>
#include <qobject.h>
#include <qdragobject.h>
#include <qevent.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qtextstream.h>
#include <qstatusbar.h>
#include <qtoolbar.h>
#include <qmenubar.h>                //SL added eb 3
#include <qptrlist.h>

//#include <qstyle.h>

class GamesTable;
//class QStyle;

class sendBuf
{
public:
	sendBuf(QString text, bool echo=true) { txt = text; localecho = echo; }
	~sendBuf() {}
	QString get_txt() { return txt; }
	bool get_localecho() { return localecho; }
	QString txt;
    
private:
	bool localecho;
};

class ClientWindow : public ClientWindowGui, public Misc<QString>
{
	Q_OBJECT

public:
	ClientWindow(QMainWindow* parent, const char* name, WFlags fl=WType_TopLevel);
	~ClientWindow();

	int sendTextFromApp(const QString&, bool localecho=true);
	void sendcommand(const QString&, bool localecho=false);
	void prepare_tables(InfoType);
	void set_sessionparameter(QString, bool);
	void send_nmatch_range_parameters();

	QString getPlayerRk(QString);
	QString getPlayerExcludeListEntry(QString);
	void openLocalBoard(QString file=0) { qgoif->set_localboard(file); }
	void openLocalGame() { qgoif->set_localgame(); }
	void openPreferences() { qgoif->openPreferences(); }
	void saveMenuFrame(QPoint p, QSize s) { menu_p = p; menu_s = s; }
	void savePrefFrame(QPoint p, QSize s) { pref_p = p; pref_s = s; }
	QPoint getMenuPos() { return menu_p; }
	QSize getMenuSize() { return menu_s; }
	QPoint getViewPos() { return view_p; }
	QSize getViewSize() { return view_s; }
	QPoint getPrefPos() { return pref_p; }
	QSize getPrefSize() { return pref_s; }
	void setDebugDialog(Debug_Dialog *d) { DD = d; }
	void setColumnsForExtUserInfo();
	void reStoreWindowSize(QString strKey, bool store);
	void setBytesIn(int i) { if (i == -1) bytesIn = 0; else bytesIn += i; }
	void setBytesOut(int i) { if (i == -1) bytesOut = 0; else bytesOut += i; }
	void saveSettings();

	bool DODEBUG;
//	QSortedList<Host>  hostlist;
//	QPtrList<Host>  hostlist;
	HostList hostlist;
	QButtonGroup *userButtonGroup ;
  
	QString  defaultStyle ;

signals:
	void signal_cmdsent(const QString&);
	void signal_move(Game*);
	void signal_computer_game(QNewGameDlg*);       //SL added eb 12

public slots:
	void slot_setBytesIn(int i) { setBytesIn(i); }
	void slot_setBytesOut(int i) { setBytesOut(i); }

	void slot_updateFont();
	void slot_refresh(int);
	void slot_playerPopup(int);
	void slot_gamesPopup(int);
//	void slot_channelPopup(int);
	void slot_pbRelTabs();
	void slot_pbRelOneTab(QWidget*);
	void slot_statsPlayer(Player*);

	// QWidget
//	virtual void resizeEvent (QResizeEvent *);

	// gui_BaseTable:
	virtual void slot_cbExtUserInfo();
	virtual void slot_cblooking();
	virtual void slot_cbopen();
	virtual void slot_cbquiet();
	virtual void quit();
	virtual void slot_cbconnect(const QString&);
	virtual void slot_connect(bool);
	virtual void slot_pbrefreshgames();
	virtual void slot_pbrefreshplayers();
	virtual void slot_toolbaractivated(const QString&);
	virtual void slot_cmdactivated(const QString&);
	virtual void slot_cmdactivated_int(int);
	virtual void slot_watchplayer(const QString&);
	virtual void slot_excludeplayer(const QString&);
	virtual void slot_localBoard();
	virtual void slot_local19();
	virtual void slot_preferences();
//	virtual void slot_userDefinedKeysTextChanged();
	virtual void slot_pbuser1();
	virtual void slot_pbuser2();
	virtual void slot_pbuser3();
	virtual void slot_pbuser4();

	// telnet:
	void sendTextToApp(const QString&);
	// parser:
	void slot_player(Player*, bool);
	void slot_game(Game*);
  	void slot_message(QString);
	void slot_message(QString, QColor);
	void slot_svname(GSName&);
	void slot_accname(QString&);
	void slot_status(Status);
	void slot_connclosed();
	void slot_talk(const QString&, const QString&, bool);
	void slot_checkbox(int, bool);
	void slot_addToObservationList(int);
	void slot_channelinfo(int, const QString&);
	void slot_matchrequest(const QString&, bool);
  	void slot_removeMatchDialog(const QString&);
	void slot_shout(const QString&, const QString&);
	void slot_room(const QString&, bool );
	void slot_enterRoom(const QString& );
	void slot_leaveRoom();
	void slot_RoomListClicked(QListBoxItem*);
	void slot_addSeekCondition(const QString&, const QString&, const QString&, const QString&, const QString&);
	void slot_clearSeekCondition();
	void slot_cancelSeek();
	void slot_seek(int i);
	void slot_seek(bool);
	void slot_SeekList(const QString&, const QString&);
	
	// gamestable/playertable:
	virtual void slot_mouse_games(int, QListViewItem*, const QPoint&, int);
	virtual void slot_mouse_players(int, QListViewItem*, const QPoint&, int);
	virtual void slot_click_games(QListViewItem*);
	virtual void slot_click_players(QListViewItem*);
	virtual void slot_menu_games(QListViewItem*, const QPoint&, int);
	virtual void slot_menu_players(QListViewItem*, const QPoint&, int);
//	void slot_moveOver_players();
//	void slot_moveOver_games();
	void slot_playerContentsMoving(int x, int y);
	void slot_gamesContentsMoving(int x, int y);
	// gui_talkdialog:
	virtual void slot_talkto(QString&, QString&);
	// gamedialog, qgoif
	void slot_sendcommand(const QString&, bool);
	//menus
	void slotFileNewBoard();        
	void slotFileNewGame();
	void slotFileOpen();
	void slotComputerPlay();        

	void slotHelpManual();
	void slotHelpSoundInfo();
	void slotHelpAbout();
	void slotHelpAboutQt();
	void slotNewVersion();

	void slotMenuConnect();
	void slotMenuDisconnect();
	void slotMenuEditServers();

	void slotViewToolBar(bool toggle);
	void slotViewStatusBar(bool toggle);
	void slotViewMenuBar(bool toggle);
	void slotViewUserToolBar(bool toggle);
	void slotUserButtonClicked(int i);


protected slots:
	void set_tn_ready();

private:
	TelnetConnection   *telnetConnection;
	Parser             *parser;
	qGoIF              *qgoif;
	Account            *myAccount;
//	QTextCodec         *textCodec;
//	QTextStream        *textStream;
//	QString            buffer;

	// online time
	int                onlineCount;
	bool               youhavemsg;
	bool               playerListEmpty;
	bool               playerListSteadyUpdate;
	bool               gamesListSteadyUpdate;
//	bool               gamesListEmpty;
	bool               autoAwayMessage;

	// cmd_xx get current cmd number, and, if higher than last, cmd is valid,
	//    else cmd is from history list
	int                cmd_count;
	bool               cmd_valid;
	// telnet ready
	bool               tn_ready;
	bool               tn_wait_for_tn_ready;
	//	bool               tn_active;
	ChannelList        channellist;
	QPtrList<Talk>     talklist;
	QPtrList<GameDialog> matchlist;
	QPtrList<sendBuf>  sendBuffer;
	sendBuf            *currentCommand;

	//	QStatusBar         *statusBar;
	QLabel             *statusUsers, *statusGames, *statusServer, *statusChannel,
	                   *statusOnlineTime, *statusMessage;

	// timing aids
	void 		timerEvent(QTimerEvent*);
	int		counter;
	
	// reset internal counter (quarter hour) for timing functions of class ClientWindow
	void		resetCounter() { counter = 899; }

	void initStatusBar(QWidget*);
	//void initmenus(QWidget*);                      
	void initToolBar();
	void initActions();                            


	void keyPressEvent(QKeyEvent*);
//	void keyReleaseEvent(QKeyEvent*);

	QString		watch;
	QString		exclude;

	// frame sizes
	QPoint		menu_p;
	QSize		menu_s;
	QPoint		view_p;
	QSize		view_s;
	QPoint		pref_p;
	QSize		pref_s;
	Debug_Dialog	*DD;


	// popup window save
	PlayerTableItem	*lv_popupPlayer;
	GamesTableItem	*lv_popupGames;

	// extended user info
	bool		extUserInfo;

	// statistics
	int		bytesIn, bytesOut;

	// event filter
	virtual bool	eventFilter(QObject *obj, QEvent *ev);
 	int		seekButtonTimer ;

  	// menus
	QPixmap 	exitIcon, fileNewboardIcon, fileNewIcon, fileOpenIcon, fileSaveIcon, fileSaveAsIcon,                       
			connectedIcon,disconnectedIcon, prefsIcon, qgoIcon, manualIcon,
			OpenIcon, LookingIcon, QuietIcon, NotOpenIcon, NotLookingIcon, NotQuietIcon, NotSeekingIcon,
			RefreshPlayersIcon,  RefreshGamesIcon, ComputerPlayIcon;  

	QPixmap 	seekingIcon[4];

	QPopupMenu	*seekMenu;                        //SL add eb 6
	//QStringList 	*seekConditionList ;

};

#endif
