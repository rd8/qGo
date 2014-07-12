/****************************************************************************
** Form interface generated from reading ui file './clientwindow_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef CLIENTWINDOWGUI_H
#define CLIENTWINDOWGUI_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qmainwindow.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QAction;
class QActionGroup;
class QToolBar;
class QPopupMenu;
class GamesTable;
class PlayerTable;
class QSplitter;
class QGroupBox;
class QComboBox;
class QCheckBox;
class QTabWidget;
class QWidget;
class QPushButton;
class QListBox;
class QListBoxItem;
class QTextBrowser;
class QToolButton;

class ClientWindowGui : public QMainWindow
{
    Q_OBJECT

public:
    ClientWindowGui( QWidget* parent = 0, const char* name = 0, WFlags fl = WType_TopLevel );
    ~ClientWindowGui();

    QSplitter* s1;
    QSplitter* s2;
    QGroupBox* groupBox1;
    PlayerTable* ListView_players;
    QComboBox* whoBox2;
    QComboBox* whoBox1;
    QCheckBox* whoOpenCheck;
    QTabWidget* TabWidget_mini_2;
    QWidget* rooms;
    QPushButton* LeaveRoomButton;
    QListBox* RoomList;
    QWidget* messages;
    QTextBrowser* MultiLineEdit3;
    QPushButton* pb_releaseTalkTabs;
    QSplitter* s3;
    QGroupBox* groupBox2;
    GamesTable* ListView_games;
    QTextBrowser* MultiLineEdit2;
    QComboBox* cb_cmdLine;
    QToolButton* toolConnect;
    QComboBox* cb_connect;
    QToolButton* toolSeek;
    QComboBox* cb_seek_handicap;
    QMenuBar *menuBar;
    QPopupMenu *fileMenu;
    QPopupMenu *PopupMenu;
    QPopupMenu *PopupMenu_2;
    QPopupMenu *PopupMenu_3;
    QPopupMenu *helpMenu;
    QToolBar *Toolbar;
    QToolBar *UserToolbar;
    QAction* fileOpen;
    QAction* helpManual;
    QAction* helpAboutApp;
    QAction* Disconnect;
    QAction* setLookingMode;
    QAction* setOpenMode;
    QAction* computerPlay;
    QAction* refreshPlayers;
    QAction* refreshGames;
    QAction* setQuietMode;
    QAction* Connect;
    QAction* setPreferences;
    QAction* fileQuit;
    QAction* fileNewBoard;
    QAction* viewToolBar;
    QAction* editServers;
    QAction* viewMenuBar;
    QAction* viewStatusBar;
    QAction* helpSoundInfo;
    QAction* helpAboutQt;
    QAction* fileNew;
    QAction* viewUserToolBar;
    QAction* Seek;
    QAction* helpNewVersion;

public slots:
    virtual void slot_cbquiet();
    virtual void slot_cbopen();
    virtual void slot_cblooking();
    virtual void slot_pbrefreshgames();
    virtual void slot_pbrefreshplayers();
    virtual void slot_pbuser1();
    virtual void slot_pbuser2();
    virtual void slot_pbuser3();
    virtual void slot_pbuser4();
    virtual void slot_pbRelTabs();
    virtual void slot_RoomListClicked(QListBoxItem *qli);
    virtual void slot_leaveRoom();
    virtual void slot_cbconnect(const QString&);
    virtual void slot_connect(bool);
    virtual void slot_seek(bool);

protected:
    QGridLayout* ClientWindowGuiLayout;
    QGridLayout* groupBox1Layout;
    QGridLayout* roomsLayout;
    QVBoxLayout* messagesLayout;
    QGridLayout* groupBox2Layout;
    QGridLayout* layout1;

protected slots:
    virtual void languageChange();

private:
    QPixmap image0;
    QPixmap image1;
    QPixmap image2;
    QPixmap image3;

};

#endif // CLIENTWINDOWGUI_H
