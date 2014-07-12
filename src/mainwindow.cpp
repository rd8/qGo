/*
* mainwindow.cpp - qGo's main window
*/

#include "misc.h"
#include "qgo.h"
#include "mainwin.h"
#include "mainwindow.h"
#include "mainwidget.h"
#include "board.h"
#include "tip.h"
#include "setting.h"
#include "icons.h"
#include "newgame_gui.h"
#include "newlocalgame_gui.h"
#include "gameinfo_gui.h"
#include "interfacehandler.h"
#include "komispinbox.h"
#include "nthmove_gui.h"
#include "normaltools_gui.h"
#include "parserdefs.h"
#include "config.h"
#include "move.h"
#include "qnewgamedlg.h"
#include "qgo_interface.h"
#include <qaccel.h>
#include <qmenubar.h>
#include <qtoolbar.h>
#include <qstatusbar.h>
#include <qmessagebox.h>
#include <qapplication.h>
#include <qlistbox.h>
#include <qwhatsthis.h>
#include <qplatinumstyle.h>
#include <qmotifstyle.h>
#include <qmotifplusstyle.h>
#include <qcdestyle.h>
#include <qsgistyle.h>
#include <qfiledialog.h>
#include <qcheckbox.h>
#include <qsplitter.h>
//#include <qmultilineedit.h>
#include <qtextedit.h>
#include <qpushbutton.h>
#include <qradiobutton.h>
#include <qcombobox.h>
#include <qslider.h>
#include <qlineedit.h>
#include <qtimer.h>
#include <qpalette.h>
#include <qtabwidget.h>
#include <qlayout.h>

//#ifdef USE_XPM
#include ICON_PREFS
#include ICON_GAMEINFO
#include ICON_EXIT
#include ICON_FILENEWBOARD
#include ICON_FILENEW
#include ICON_FILEOPEN
#include ICON_FILESAVE
#include ICON_FILESAVEAS
#include ICON_TRANSFORM
#include ICON_CHARSET
#include ICON_RIGHTARROW
#include ICON_LEFTARROW
#include ICON_RIGHTCOMMENT
#include ICON_LEFTCOMMENT
#include ICON_TWO_RIGHTARROW
#include ICON_TWO_LEFTARROW
#include ICON_NEXT_VAR
#include ICON_PREV_VAR
#include ICON_MAIN_BRANCH
#include ICON_START_VAR
#include ICON_NEXT_BRANCH
#include ICON_AUTOPLAY
#include ICON_CUT
#include ICON_PASTE
#include ICON_DELETE
#include ICON_INCREASE_SIZE
#include ICON_DECREASE_SIZE
#include ICON_FULLSCREEN
#include ICON_WHATSTHIS
#include ICON_MANUAL
#include ICON_NAV_INTERSECTION
#include ICON_COMPUTER_PLAY
#include ICON_COORDS
#include ICON_SOUND_ON
#include ICON_SOUND_OFF
//#endif



MainWindow::MainWindow(QWidget* parent, const char* name, WFlags f)
: QMainWindow(parent, name, f), Misc<QString>()
{

  // this is very dirty : we do this because there seem to be no clean way to backtrack to the ClientWindow, which has stored the style :-(  
  style = setting->readEntry("DEFAULT_STYLE") ;
  
  setProperty("icon", setting->image0);
	parent_ = 0;

  
  
	isFullScreen = 0;
	setFocusPolicy(QWidget::StrongFocus);
	
	setIcon(setting->image0);

	initActions();
	initMenuBar();
	initToolBar();
	initStatusBar();

	bool bb=setting->readBoolEntry("FILEBAR");
	bb=false;
	if (!setting->readBoolEntry("FILEBAR"))
		viewFileBar->setOn(false);
	if (!setting->readBoolEntry("TOOLBAR"))
		viewToolBar->setOn(false);
	if (!setting->readBoolEntry("EDITBAR"))
		viewEditBar->setOn(false);
	
	if (!setting->readBoolEntry("STATUSBAR"))
		viewStatusBar->setOn(false); //statusBar()->hide();
	
	if (!setting->readBoolEntry("MENUBAR"))
		viewMenuBar->setOn(false); //menuBar()->hide();

		
		
	interfaceHandler = 0;

	// VIEW_COMMENT: 0 = see BOARDVERTCOMMENT, 1 = hor, 2 = ver
	// BOARDVERCOMMENT: 0 = hor, 1 = ver, 2 = not shown
	if (setting->readIntEntry("VIEW_COMMENT") == 2 ||
		setting->readIntEntry("VIEW_COMMENT") == 0 && setting->readIntEntry("BOARDVERTCOMMENT_0"))
	{
		// show vertical comment
		splitter = new QSplitter(Horizontal, this);
		mainWidget = new MainWidget(splitter, "MainWidget");
		splitter_comment = new QSplitter(Vertical, splitter);
	}
	else
	{
		splitter = new QSplitter(Vertical, this);
		mainWidget = new MainWidget(splitter, "MainWidget");
		splitter_comment = new QSplitter(Horizontal, splitter);
	}
	splitter->setOpaqueResize(false);

//	mainWidget = new MainWidget(splitter, "MainWidget");
	
	mainWidgetGuiLayout = new QGridLayout(mainWidget, 1, 1, 0, 0);
	if (setting->readBoolEntry("SIDEBAR_LEFT"))
	{
		mainWidgetGuiLayout->addWidget(mainWidget->toolsFrame, 0, 0);
		mainWidgetGuiLayout->addWidget(mainWidget->boardFrame, 0, 1);

	}
	else
	{
		mainWidgetGuiLayout->addWidget(mainWidget->toolsFrame, 0, 1);
		mainWidgetGuiLayout->addWidget(mainWidget->boardFrame, 0, 0);
	}
	
	board = mainWidget->board;
	CHECK_PTR(board);
	// Connect the mouseMove event of the board with the status bar coords widget
	connect(board, SIGNAL(coordsChanged(int, int, int,bool)), statusTip, SLOT(slotStatusTipCoords(int, int, int,bool)));
	
	//commentEdit = new QTextEdit(splitter_comment, "comments");
	QWidget *commentWidget = new QWidget(splitter_comment);
	QVBoxLayout *commentLayout = new QVBoxLayout(commentWidget, 0,0,"commentLayout");
	commentEdit = new QTextEdit(commentWidget,  "comments");
	commentLayout->addWidget(commentEdit);
	commentEdit2 = new QLineEdit( commentWidget, "commentEdit2" );
	commentLayout->addWidget(commentEdit2);

	ListView_observers = new QListView(splitter_comment, "observers");
	splitter->setResizeMode(mainWidget, QSplitter::KeepSize);
	splitter_comment->setResizeMode(ListView_observers, QSplitter::KeepSize);
	ListView_observers->addColumn(tr("Observers") + "     ");
	ListView_observers->setProperty("focusPolicy", (int)QListView::NoFocus );
	ListView_observers->setProperty("resizePolicy", (int)QListView::AutoOneFit );
	ListView_observers->addColumn(tr("Rk"));
	ListView_observers->setProperty("focusPolicy", (int)QListView::NoFocus );
	ListView_observers->setProperty("resizePolicy", (int)QListView::AutoOneFit );
	ListView_observers->setSorting(1);
	// disable sorting; else sort rank would sort by rank string (col 2) instead of rank key (col 3, invisible)
	ListView_observers->setSorting(-1);

	commentEdit->setWordWrap(QTextEdit::WidgetWidth);
	//commentEdit2 = mainWidget->commentEdit2;
	//commentEdit2 = new QLineEdit( boardFrame, "commentEdit2" );

	//    connect(commentEdit2, SIGNAL(returnPressed()), board, SLOT(modifiedComment()));
	connect(commentEdit, SIGNAL(textChanged()), board, SLOT(updateComment()));
	connect(commentEdit2, SIGNAL(returnPressed()), board, SLOT(updateComment2()));
	
	// Connect Ctrl-E with MainWidget 'Edit' button. We need this to control the button
	// even when the sidebar is hidden.
//	connect(toggleEdit, SIGNAL(activated()), mainWidget->modeButton, SLOT(animateClick()));
	
	setCentralWidget(splitter);

	interfaceHandler = mainWidget->interfaceHandler;
	CHECK_PTR(interfaceHandler);
	interfaceHandler->fileImportASCII = fileImportASCII;
	interfaceHandler->fileImportASCIIClipB = fileImportASCIIClipB;
	interfaceHandler->fileImportSgfClipB = fileImportSgfClipB;
	interfaceHandler->navForward = navForward;
	interfaceHandler->navBackward = navBackward;
	interfaceHandler->navFirst = navFirst;
	interfaceHandler->navLast = navLast;
	interfaceHandler->navNextVar = navNextVar;
	interfaceHandler->navPrevVar = navPrevVar;
	interfaceHandler->navStartVar = navStartVar;
	interfaceHandler->navMainBranch = navMainBranch;
	interfaceHandler->navNextBranch = navNextBranch;
	interfaceHandler->navPrevComment = navPrevComment;
	interfaceHandler->navNextComment = navNextComment;
	interfaceHandler->navIntersection = navIntersection;  //SL added eb 11
	interfaceHandler->editCut = editCut;
	interfaceHandler->editPaste = editPaste;
	interfaceHandler->editPasteBrother = editPasteBrother;
	interfaceHandler->editDelete = editDelete;
	interfaceHandler->navEmptyBranch = navEmptyBranch;
	interfaceHandler->navCloneNode = navCloneNode;
	interfaceHandler->navNthMove = navNthMove;
	interfaceHandler->navAutoplay = navAutoplay;
	interfaceHandler->navSwapVariations = navSwapVariations;
	interfaceHandler->commentEdit = commentEdit;
	interfaceHandler->commentEdit2 = commentEdit2;
	interfaceHandler->statusMode = statusMode;
	interfaceHandler->statusTurn = statusTurn;
	interfaceHandler->statusMark = statusMark;
	interfaceHandler->statusNav = statusNav;
	interfaceHandler->slider = mainWidget->slider;
	interfaceHandler->mainWidget = mainWidget;
	interfaceHandler->fileNew = fileNew;
	interfaceHandler->fileNewBoard = fileNewBoard ;
	interfaceHandler->fileOpen = fileOpen ;

	// Create a timer instance
	// timerInterval = 2;  // 1000 msec
	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(slotTimerForward()));
	timerIntervals[0] = (float) 0.1;
	timerIntervals[1] = 0.5;
	timerIntervals[2] = 1.0;
	timerIntervals[3] = 2.0;
	timerIntervals[4] = 3.0;
	timerIntervals[5] = 5.0;
	
	updateBoard();

	// restore board window
	reStoreWindowSize("0", false);

	updateFont();
}

MainWindow::~MainWindow()
{
	delete timer;
	delete commentEdit;
	delete mainWidget;
	delete splitter;

	// status bar
	delete statusMark;
	delete statusMode;
	delete statusNav;
	delete statusTurn;
	delete statusTip;

	// tool bar;
	delete editBar;
	delete toolBar;
	delete fileBar;

	// menu bar
	delete helpMenu;
	delete viewMenu;
	delete settingsMenu;
	delete navMenu;
	delete editMenu;
	delete fileMenu;
	delete importExportMenu;

	// Actions
	delete escapeFocus;
	delete toggleEdit;
	delete toggleMarks;
	delete fileNewBoard;
	delete fileNew;
	delete fileOpen;
	delete fileSave;
	delete fileSaveAs;
	delete fileClose;
	delete fileImportASCII;
	delete fileImportASCIIClipB;
	delete fileExportASCII;
	delete fileImportSgfClipB;
	delete fileExportSgfClipB;
	delete fileExportPic;
	delete fileExportPicClipB;
	delete fileQuit;
	delete editCut;
	delete editPaste;
	delete editPasteBrother;
	delete editDelete;
	delete editHideStones; //QQQ
	delete editNumberMoves;
	delete editMarkBrothers;
	delete editMarkSons;
	delete navBackward;
	delete navForward;
	delete navFirst;
	delete navLast;
	delete navPrevVar;
	delete navNextVar;
	delete navMainBranch;
	delete navStartVar;
	delete navNextBranch;
	delete navPrevComment;
	delete navNextComment;
	delete navIntersection; //SL added eb 11
	delete navNthMove;
	delete navAutoplay;
	delete navEmptyBranch;
	delete navCloneNode;
	delete navSwapVariations;
	delete setPreferences;
	delete setGameInfo;
	delete viewFileBar;
	delete viewToolBar;
	delete viewEditBar;
	delete viewMenuBar;
	delete viewStatusBar;
	delete viewCoords;
	delete viewSidebar;
	delete viewComment;
	delete viewVertComment;
	delete viewPinComment;
	delete viewIncreaseSize;
	delete viewDecreaseSize;
	delete viewSaveSize;
	delete viewFullscreen;
	delete helpManual;
	delete helpSoundInfo;
	delete helpAboutApp;
	delete helpAboutQt;
}

void MainWindow::initActions()
{
	// Load the pixmaps
	QPixmap exitIcon, fileNewboardIcon, fileNewIcon, fileOpenIcon, fileSaveIcon, fileSaveAsIcon,
		transformIcon, charIcon, cutIcon, pasteIcon, deleteIcon,
		nextCommentIcon, previousCommentIcon, navIntersectionIcon,
		rightArrowIcon, leftArrowIcon,two_rightArrowIcon, two_leftArrowIcon,
		prevVarIcon, nextVarIcon, startVarIcon,	mainBranchIcon, nextBranchIcon, autoplayIcon,
		prefsIcon, infoIcon, increaseIcon, decreaseIcon, fullscreenIcon, manualIcon,
		coordsIcon, sound_onIcon, sound_offIcon;
//#ifdef USE_XPM
	prefsIcon = QPixmap(const_cast<const char**>(package_settings_xpm));
	infoIcon = QPixmap(const_cast<const char**>(idea_xpm));
	exitIcon = QPixmap(const_cast<const char**>(exit_xpm));
	fileNewboardIcon = QPixmap(const_cast<const char**>(newboard_xpm));
	fileNewIcon = QPixmap(const_cast<const char**>(filenew_xpm));
	fileOpenIcon = QPixmap(const_cast<const char**>(fileopen_xpm));
	fileSaveIcon = QPixmap(const_cast<const char**>(filesave_xpm));
	fileSaveAsIcon = QPixmap(const_cast<const char**>(filesaveas_xpm));
	transformIcon = QPixmap(const_cast<const char**>(transform_xpm));
	charIcon = QPixmap(const_cast<const char**>(charset_xpm));
	cutIcon = QPixmap(const_cast<const char**>(editcut_xpm));
	pasteIcon = QPixmap(const_cast<const char**>(editpaste_xpm));
	deleteIcon = QPixmap(const_cast<const char**>(editdelete_xpm));
	rightArrowIcon = QPixmap(const_cast<const char**>(rightarrow_xpm));
	leftArrowIcon = QPixmap(const_cast<const char**>(leftarrow_xpm));
	nextCommentIcon = QPixmap(const_cast<const char**>(rightcomment_xpm));
	previousCommentIcon = QPixmap(const_cast<const char**>(leftcomment_xpm));     
	two_rightArrowIcon = QPixmap(const_cast<const char**>(two_rightarrow_xpm));
	two_leftArrowIcon = QPixmap(const_cast<const char**>(two_leftarrow_xpm));
	nextVarIcon = QPixmap(const_cast<const char**>(down_xpm));
	prevVarIcon = QPixmap(const_cast<const char**>(up_xpm));
	mainBranchIcon = QPixmap(const_cast<const char**>(start_xpm));
	startVarIcon = QPixmap(const_cast<const char**>(top_xpm));
	nextBranchIcon = QPixmap(const_cast<const char**>(bottom_xpm));
	increaseIcon = QPixmap(const_cast<const char**>(viewmagplus_xpm));
	decreaseIcon = QPixmap(const_cast<const char**>(viewmagminus_xpm));
	fullscreenIcon = QPixmap(const_cast<const char**>(window_fullscreen_xpm));
	manualIcon = QPixmap(const_cast<const char**>(help_xpm));
	autoplayIcon = QPixmap(const_cast<const char**>(player_pause_xpm));
	navIntersectionIcon  = QPixmap(const_cast<const char**>(navIntersection_xpm));  //SL added eb 11
  	coordsIcon= QPixmap(const_cast<const char**>(coords_xpm)); 
	sound_onIcon= QPixmap(const_cast<const char**>(sound_on_xpm)); 
	sound_offIcon= QPixmap(const_cast<const char**>(sound_off_xpm)); 
/*
#else
	prefsIcon = QPixmap(ICON_PREFS);
	infoIcon = QPixmap(ICON_GAMEINFO);
	exitIcon = QPixmap(ICON_EXIT);
	fileNewboardIcon = QPixmap(ICON_FILENEWBOARD);
	fileNewIcon = QPixmap(ICON_FILENEW);
	fileOpenIcon = QPixmap(ICON_FILEOPEN);
	fileSaveIcon = QPixmap(ICON_FILESAVE);
	fileSaveAsIcon = QPixmap(ICON_FILESAVEAS);
	transformIcon = QPixmap(ICON_TRANSFORM);
	charIcon = QPixmap(ICON_CHARSET);
	cutIcon = QPixmap(ICON_CUT);
	pasteIcon = QPixmap(ICON_PASTE);
	deleteIcon = QPixmap(ICON_DELETE);
	rightArrowIcon = QPixmap(ICON_RIGHTARROW);
	leftArrowIcon = QPixmap(ICON_LEFTARROW);
	nextCommentIcon = QPixmap(ICON_RIGHTCOMMENT);                   //added eb
	previousCommentIcon = QPixmap(ICON_LEFTCOMMENT);                   //added eb
	two_rightArrowIcon = QPixmap(ICON_TWO_RIGHTARROW);
	two_leftArrowIcon = QPixmap(ICON_TWO_LEFTARROW);
	nextVarIcon = QPixmap(ICON_NEXT_VAR);
	prevVarIcon = QPixmap(ICON_PREV_VAR);
	startVarIcon = QPixmap(ICON_START_VAR);
	mainBranchIcon = QPixmap(ICON_MAIN_BRANCH);
	nextBranchIcon = QPixmap(ICON_NEXT_BRANCH);
	increaseIcon = QPixmap(ICON_INCREASE_SIZE);
	decreaseIcon = QPixmap(ICON_DECREASE_SIZE);
	fullscreenIcon = QPixmap(ICON_FULLSCREEN);
	manualIcon = QPixmap(ICON_MANUAL);
	autoplayIcon = QPixmap(ICON_AUTOPLAY);
	navIntersectionIcon  = QPixmap(ICON_NAV_INTERSECTION);  
	coordsIcon = QPixmap(ICON_COORDS);
  	sound_onIcon = QPixmap(ICON_SOUND_ON);
	sound_offIcon = QPixmap(ICON_SOUND_Off);
#endif
*/	
	/*
	* Global actions
	*/
	// Escape focus: Escape key to get the focus from comment field to main window.
 	escapeFocus = new QAction(this);
	escapeFocus->setAccel(Key_Escape);
	connect(escapeFocus, SIGNAL(activated()), this, SLOT(setFocus()));
	
	// Toggle game mode: Normal / Edit - Ctrl-E
	toggleEdit = new QAction(this);
	toggleEdit->setAccel(QAccel::stringToKey(tr("Ctrl+E")));
	// connect in constructor, as we need the mainwidget instance first.
	
	// Toggle through the marks - Ctrl-T
	toggleMarks = new QAction(this);
	toggleMarks->setAccel(QAccel::stringToKey(tr("Ctrl+T")));
	connect(toggleMarks, SIGNAL(activated()), this, SLOT(slotToggleMarks()));
	
	/*
	* Menu File
	*/
	// File New Board
	fileNewBoard = new QAction(tr("New"), fileNewboardIcon, tr("New &Board"),
		QAccel::stringToKey(tr("Ctrl+B")), this);
	fileNewBoard->setStatusTip(tr("Creates a new board"));
	fileNewBoard->setWhatsThis(tr("New\n\nCreates a new board."));
	connect(fileNewBoard, SIGNAL(activated()), this, SLOT(slotFileNewBoard()));
	
	// File New Game
	fileNew = new QAction(tr("New game"), fileNewIcon, tr("&New game"),
		QAccel::stringToKey(tr("Ctrl+N")), this);
	fileNew->setStatusTip(tr("Creates a new game on this board"));
	fileNew->setWhatsThis(tr("New\n\nCreates a new game on this board."));
	connect(fileNew, SIGNAL(activated()), this, SLOT(slotFileNewGame()));
	
	// File Open
	fileOpen = new QAction(tr("Open"), fileOpenIcon, tr("&Open"),
		QAccel::stringToKey(tr("Ctrl+O")), this);
	fileOpen->setStatusTip(tr("Open a sgf file"));
	fileOpen->setWhatsThis(tr("Open\n\nOpen a sgf file."));
	connect(fileOpen, SIGNAL(activated()), this, SLOT(slotFileOpen()));
	
	// File Save
	fileSave = new QAction(tr("Save"), fileSaveIcon, tr("&Save"),
		QAccel::stringToKey(tr("Ctrl+S")), this);
	fileSave->setStatusTip(tr("Save a sgf file"));
	fileSave->setWhatsThis(tr("Save\n\nSave a sgf file."));
	connect(fileSave, SIGNAL(activated()), this, SLOT(slotFileSave()));
	
	// File SaveAs
	fileSaveAs = new QAction(tr("Save As"), fileSaveAsIcon, tr("Save &As"), 0, this);
	fileSaveAs->setStatusTip(tr("Save a sgf file under a new name"));
	fileSaveAs->setWhatsThis(tr("Save As\n\nSave a sgf file under a new name."));
	connect(fileSaveAs, SIGNAL(activated()), this, SLOT(slotFileSaveAs()));
	
	// File Close
	fileClose = new QAction(tr("Close"), tr("&Close"), QAccel::stringToKey(tr("Ctrl+W")), this);
	fileClose->setStatusTip(tr("Close this board"));
	fileClose->setWhatsThis(tr("Exit\n\nClose this board."));
	connect(fileClose, SIGNAL(activated()), this, SLOT(slotFileClose()));
	
	// File ImportASCII
	fileImportASCII = new QAction(tr("Import ASCII"), charIcon, tr("Import &ASCII"), 0, this);
	fileImportASCII->setStatusTip(tr("Import an ASCII file as new variation"));
	fileImportASCII->setWhatsThis(tr("Import ASCII\n\nImport an ASCII file as new variation."));
	connect(fileImportASCII, SIGNAL(activated()), this, SLOT(slotFileImportASCII()));

	// File ImportASCIIClipB
	fileImportASCIIClipB = new QAction(tr("Import ASCII from clipboard"), charIcon,
		tr("Import ASCII from &clipboard"), 0, this);
	fileImportASCIIClipB->setStatusTip(tr("Import an ASCII board as new variation from the clipboard"));
	fileImportASCIIClipB->setWhatsThis(tr("Import ASCII from clipboard\n\nImport an ASCII file as new variation from the clipboard."));
	connect(fileImportASCIIClipB, SIGNAL(activated()), this, SLOT(slotFileImportASCIIClipB()));
	
	// File ExportASCII
	fileExportASCII = new QAction(tr("Export ASCII"), charIcon, tr("&Export ASCII"), 0, this);
	fileExportASCII->setStatusTip(tr("Export current board to ASCII"));
	fileExportASCII->setWhatsThis(tr("Export ASCII\n\nExport current board to ASCII."));
	connect(fileExportASCII, SIGNAL(activated()), this, SLOT(slotFileExportASCII()));
	
	// File ImportSgfClipB
	fileImportSgfClipB = new QAction(tr("Import SGF from clipboard"), fileOpenIcon,
		tr("Import SGF &from clipboard"), 0, this);
	fileImportSgfClipB->setStatusTip(tr("Import a complete game in SGF format from clipboard"));
	fileImportSgfClipB->setWhatsThis(tr("Import SGF from clipboard\n\n"
		"Import a complete game in SGF format from clipboard."));
	connect(fileImportSgfClipB, SIGNAL(activated()), this, SLOT(slotFileImportSgfClipB()));
	
	// File ExportSgfClipB
	fileExportSgfClipB = new QAction(tr("Export SGF to clipboard"), fileSaveIcon,
		tr("Export SGF &to clipboard"), 0, this);
	fileExportSgfClipB->setStatusTip(tr("Export a complete game in SGF format to clipboard"));
	fileExportSgfClipB->setWhatsThis(tr("Export SGF to clipboard\n\n"
		"Export a complete game in SGF format to clipboard."));
	connect(fileExportSgfClipB, SIGNAL(activated()), this, SLOT(slotFileExportSgfClipB()));
	
	// File ExportPic
	fileExportPic = new QAction(tr("Export Image"), transformIcon, tr("Export &Image"), 0, this);
	fileExportPic->setStatusTip(tr("Export current board to an image"));
	fileExportPic->setWhatsThis(tr("Export Image\n\nExport current board to an image."));
	connect(fileExportPic, SIGNAL(activated()), this, SLOT(slotFileExportPic()));
	
	// File ExportPic
	fileExportPicClipB = new QAction(tr("Export Image to clipboard"), transformIcon,
		tr("E&xport Image to clipboard"), 0, this);
	fileExportPicClipB->setStatusTip(tr("Export current board to the clipboard as image"));
	fileExportPicClipB->setWhatsThis(tr("Export Image to clipboard\n\nExport current board to the clipboard as image."));
	connect(fileExportPicClipB, SIGNAL(activated()), this, SLOT(slotFileExportPicClipB()));
	
	// File Quit
	fileQuit = new QAction(tr("Exit"), exitIcon, tr("E&xit"),
		QAccel::stringToKey(tr("Ctrl+Q")), this);
	fileQuit->setStatusTip(tr("Quits the application"));
	fileQuit->setWhatsThis(tr("Exit\n\nQuits the application."));
	connect(fileQuit, SIGNAL(activated()), this, SLOT(slotFileClose()));//(qGo*)qApp, SLOT(quit()));
	
	/*
	* Menu Edit
	*/
	// Edit cut
	editCut = new QAction(tr("Cut"), cutIcon, tr("&Cut"),
		QAccel::stringToKey(tr("Ctrl+X")), this);
	editCut->setStatusTip(tr("Cut this and all following positions"));
	editCut->setWhatsThis(tr("Cut\n\nCut this and all following positions."));
	connect(editCut, SIGNAL(activated()), this, SLOT(slotEditCut()));
	
	// Edit paste
	editPaste = new QAction(tr("Paste"), pasteIcon, tr("&Paste"),
		QAccel::stringToKey(tr("Ctrl+P")), this);
	editPaste->setStatusTip(tr("Paste as son of the current move"));
	editPaste->setWhatsThis(tr("Paste\n\nPaste as son of the current move."));
	connect(editPaste, SIGNAL(activated()), this, SLOT(slotEditPaste()));
	
	// Edit paste as brother
	editPasteBrother = new QAction(tr("Paste as brother"), tr("Paste as &brother"), 0, this);
	editPasteBrother->setStatusTip(tr("Paste as brother of the current move"));
	editPasteBrother->setWhatsThis(tr("Paste\n\nPaste as brother of the current move."));
	connect(editPasteBrother, SIGNAL(activated()), this, SLOT(slotEditPasteBrother()));
	
	// Edit delete
	editDelete = new QAction(tr("Delete"), deleteIcon, tr("&Delete"),
		QAccel::stringToKey(tr("Ctrl+D")), this);
	editDelete->setStatusTip(tr("Delete this and all following positions"));
	editDelete->setWhatsThis(tr("Delete\n\nDelete this and all following positions."));
	connect(editDelete, SIGNAL(activated()), this, SLOT(slotEditDelete()));
	
	// QQQ Toggle Hide Stones
	editHideStones = new QAction(tr("Toggle Hiding"), tr("Toggle &Hiding"),
		QAccel::stringToKey(tr("Alt+F2")), this);
	editHideStones->setStatusTip(tr("Toggle to Hide all Stones in the board."));
	editHideStones->setWhatsThis(tr("Toggle to Hide Stones\n\nToggle to Hide all Stones in the board."));
	connect(editHideStones, SIGNAL(activated()), this, SLOT(slotEditHideStones()));
	
	// Edit number moves
	editNumberMoves = new QAction(tr("Number Moves"), tr("&Number Moves"),
		QAccel::stringToKey(tr("Shift+F2")), this);
	editNumberMoves->setStatusTip(tr("Mark all moves with the number of their turn"));
	editNumberMoves->setWhatsThis(tr("Number moves\n\nMark all moves with the number of their turn."));
	connect(editNumberMoves, SIGNAL(activated()), this, SLOT(slotEditNumberMoves()));
	
	// Edit mark brothers
	editMarkBrothers = new QAction(tr("Mark brothers"), tr("Mark &brothers"),
		QAccel::stringToKey(tr("Shift+F3")), this);
	editMarkBrothers->setStatusTip(tr("Mark all brothers of the current move"));
	editMarkBrothers->setWhatsThis(tr("Mark brothers\n\nMark all brothers of the current move."));
	connect(editMarkBrothers, SIGNAL(activated()), this, SLOT(slotEditMarkBrothers()));
	
	// Edit mark sons
	editMarkSons = new QAction(tr("Mark sons"), tr("Mark &sons"),
		QAccel::stringToKey(tr("Shift+F4")), this);
	editMarkSons->setStatusTip(tr("Mark all sons of the current move"));
	editMarkSons->setWhatsThis(tr("Mark sons\n\nMark all sons of the current move."));
	connect(editMarkSons, SIGNAL(activated()), this, SLOT(slotEditMarkSons()));
	
	/*
	* Menu Navigation
	*/
	// Navigation Backward
	navBackward = new QAction(tr("Previous move (Left)"), leftArrowIcon, tr("&Previous move") + "\t" + tr("Left"),
		0, this);
	navBackward->setStatusTip(tr("To previous move"));
	navBackward->setWhatsThis(tr("Previous move\n\nMove one move backward."));
	connect(navBackward, SIGNAL(activated()), this, SLOT(slotNavBackward()));
	
	// Navigation Forward
	navForward = new QAction(tr("Next move (Right)"), rightArrowIcon, tr("&Next move") + "\t" + tr("Right"), 0, this);
	navForward->setStatusTip(tr("To next move"));
	navForward->setWhatsThis(tr("Next move\n\nMove one move forward."));
	connect(navForward, SIGNAL(activated()), this, SLOT(slotNavForward()));
	
	// Navigation First
	navFirst = new QAction(tr("First move (Home)"), two_leftArrowIcon, tr("&First move") + "\t" + tr("Home"), 0, this);
	navFirst->setStatusTip(tr("To first move"));
	navFirst->setWhatsThis(tr("First move\n\nMove to first move."));
	connect(navFirst, SIGNAL(activated()), this, SLOT(slotNavFirst()));
	
	// Navigation Last
	navLast = new QAction(tr("Last move (End)"), two_rightArrowIcon, tr("&Last move") + "\t" + tr("End"), 0, this);
	navLast->setStatusTip(tr("To last move"));
	navLast->setWhatsThis(tr("Last move\n\nMove to last move."));
	connect(navLast, SIGNAL(activated()), this, SLOT(slotNavLast()));
	
	// Navigation previous variation
	navPrevVar = new QAction(tr("Previous variation (Up)"), prevVarIcon, tr("P&revious variation") + "\t" + tr("Up"), 0, this);
	navPrevVar->setStatusTip(tr("To previous variation"));
	navPrevVar->setWhatsThis(tr("Previous variation\n\nMove to the previous variation of this move."));
	connect(navPrevVar, SIGNAL(activated()), this, SLOT(slotNavPrevVar()));
	
	// Navigation next variation
	navNextVar = new QAction(tr("Next variation (Down)"), nextVarIcon, tr("N&ext variation") + "\t" + tr("Down"), 0, this);
	navNextVar->setStatusTip(tr("To next variation"));
	navNextVar->setWhatsThis(tr("Next variation\n\nMove to the next variation of this move."));
	connect(navNextVar, SIGNAL(activated()), this, SLOT(slotNavNextVar()));
	
	// Navigation main branch
	navMainBranch = new QAction(tr("Main Branch"), mainBranchIcon, tr("&Main branch"), Key_Insert, this);
	navMainBranch->setStatusTip(tr("To main branch"));
	navMainBranch->setWhatsThis(tr("Main Branch\n\nMove to the main branch where variation started."));
	connect(navMainBranch, SIGNAL(activated()), this, SLOT(slotNavMainBranch()));
	
	// Navigation variation start
	navStartVar = new QAction(tr("Variation start"), startVarIcon, tr("Variation &start"), Key_PageUp, this);
	navStartVar->setStatusTip(tr("To top of variation"));
	navStartVar->setWhatsThis(tr("Variation start\n\nMove to the top variation of this branch."));
	connect(navStartVar, SIGNAL(activated()), this, SLOT(slotNavStartVar()));
	
	// Navigation next branch
	navNextBranch = new QAction(tr("Next branch"), nextBranchIcon, tr("Next &branch"), Key_PageDown, this);
	navNextBranch->setStatusTip(tr("To next branch starting a variation"));
	navNextBranch->setWhatsThis(tr("Next branch\n\nMove to the next branch starting a variation."));
	connect(navNextBranch, SIGNAL(activated()), this, SLOT(slotNavNextBranch()));
	
	// Navigation goto Nth move
	navNthMove = new QAction(tr("Goto move"), tr("&Goto Move"), QAccel::stringToKey(tr("Ctrl+G")) , this);
	navNthMove->setStatusTip(tr("Goto a move of main branch by number"));
	navNthMove->setWhatsThis(tr("Goto move\n\nGoto a move of main branch by number."));
	connect(navNthMove, SIGNAL(activated()), this, SLOT(slotNavNthMove()));
	
	// Navigation Autoplay
	navAutoplay = new QAction(tr("Autoplay"), autoplayIcon, tr("&Autoplay"),
		QAccel::stringToKey(tr("Ctrl+A")), this, 0, true);
	navAutoplay->setOn(false);
	navAutoplay->setStatusTip(tr("Start/Stop autoplaying current game"));
	navAutoplay->setWhatsThis(tr("Autoplay\n\nStart/Stop autoplaying current game."));
	connect(navAutoplay, SIGNAL(toggled(bool)), this, SLOT(slotNavAutoplay(bool)));
	
	// Navigation empty branch
	navEmptyBranch = new QAction(tr("Empty branch"), tr("Empt&y branch"), 0, this);
	navEmptyBranch->setStatusTip(tr("Create an empty branch"));
	navEmptyBranch->setWhatsThis(tr("Empty branch\n\nCreate an empty branch."));
	connect(navEmptyBranch, SIGNAL(activated()), this, SLOT(slotNavEmptyBranch()));
	
	// Navigation duplicate move
	navCloneNode = new QAction(tr("Duplicate move"), tr("D&uplicate move"), 0, this);
	navCloneNode->setStatusTip(tr("Copies and duplicates this move"));
	navCloneNode->setWhatsThis(tr("Duplicate move\n\nCopies and duplicates this move."));
	connect(navCloneNode, SIGNAL(activated()), this, SLOT(slotNavCloneNode()));
	
	// Navigation swap variations
	navSwapVariations = new QAction(tr("Swap variations"), tr("S&wap variations"), 0, this);
	navSwapVariations->setStatusTip(tr("Swap current move with previous variation"));
	navSwapVariations->setWhatsThis(tr("Swap variations\n\nSwap current move with previous variation."));
	connect(navSwapVariations, SIGNAL(activated()), this, SLOT(slotNavSwapVariations()));
	
	// Navigation previous comment
	navPrevComment = new QAction(tr("Previous commented move"), previousCommentIcon, tr("Previous &commented move") , 0, this);        //added eb
	navPrevComment->setStatusTip(tr("To previous comment"));
	navPrevComment->setWhatsThis(tr("Previous comment\n\nMove to the previous move that has a comment"));
	connect(navPrevComment, SIGNAL(activated()), this, SLOT(slotNavPrevComment()));

	// Navigation next comment
	navNextComment = new QAction(tr("Next commented move"), nextCommentIcon, tr("Next c&ommented move") , 0, this);
	navNextComment->setStatusTip(tr("To next comment"));
	navNextComment->setWhatsThis(tr("Next comment\n\nMove to the next move that has a comment"));
	connect(navNextComment, SIGNAL(activated()), this, SLOT(slotNavNextComment()));                                            // end add eb

  // Navigation to clicked intersection                       added eb 11
	navIntersection = new QAction(tr("Goto stone at clicked move"), navIntersectionIcon, tr("Goto clic&ked move") , 0, this);
	navIntersection->setStatusTip(tr("To clicked move"));
	navIntersection->setWhatsThis(tr("Click on a board intersection\n\nMove to the stone played at this intersection (if any)"));
	connect(navIntersection, SIGNAL(activated()), this, SLOT(slotNavIntersection()));                                            // end add eb
                                                              // end add eb 11
  
	/*
	* Menu Settings
	*/
	// Settings Preferences
	setPreferences = new QAction(tr("Preferences"), prefsIcon, tr("&Preferences"),
		QAccel::stringToKey(tr("Alt+P")), this);
	setPreferences->setStatusTip(tr("Edit the preferences"));
	setPreferences->setWhatsThis(tr("Preferences\n\nEdit the applications preferences."));
	connect(setPreferences, SIGNAL(activated()), this, SLOT(slotSetPreferences()));
	
	// Setings GameInfo
	setGameInfo = new QAction(tr("Game Info"), infoIcon, tr("&Game Info"),
		QAccel::stringToKey(tr("Ctrl+I")), this);
	setGameInfo->setStatusTip(tr("Display game information"));
	setGameInfo->setWhatsThis(tr("Game Info\n\nDisplay game information."));
	connect(setGameInfo, SIGNAL(activated()), this, SLOT(slotSetGameInfo()));
	
	//Toggling sound
	QIconSet  OIC;
	OIC.setPixmap ( sound_offIcon, QIconSet::Automatic, QIconSet::Normal, QIconSet::On);
	OIC.setPixmap ( sound_onIcon, QIconSet::Automatic, QIconSet::Normal, QIconSet::Off );
	soundToggle = new QAction(tr("Mute stones sound"), OIC, tr("&Mute stones sound"),0, this,0,true);
	soundToggle->setOn(!setting->readBoolEntry("SOUND_STONE"));
	soundToggle->setStatusTip(tr("Toggle stones sound on/off"));
	soundToggle->setWhatsThis(tr("Stones sound\n\nToggle stones sound on/off\nthis toggles only the stones sounds"));
	connect(soundToggle, SIGNAL(toggled(bool)), this, SLOT(slotSoundToggle(bool)));
	
	


	/*
	* Menu View
	*/
	// View Filebar toggle
	viewFileBar = new QAction(tr("File toolbar"), tr("&File toolbar"), 0, this, 0, true);
	viewFileBar->setOn(true);
	viewFileBar->setStatusTip(tr("Enables/disables the file toolbar"));
	viewFileBar->setWhatsThis(tr("File toolbar\n\nEnables/disables the file toolbar."));
	connect(viewFileBar, SIGNAL(toggled(bool)), this, SLOT(slotViewFileBar(bool)));
	
	// View Toolbar toggle
	viewToolBar = new QAction(tr("Navigation toolbar"), tr("Navigation &toolbar"), 0, this, 0, true);
	viewToolBar->setOn(true);
	viewToolBar->setStatusTip(tr("Enables/disables the navigation toolbar"));
	viewToolBar->setWhatsThis(tr("Navigation toolbar\n\nEnables/disables the navigation toolbar."));
	connect(viewToolBar, SIGNAL(toggled(bool)), this, SLOT(slotViewToolBar(bool)));
	
	// View Editbar toggle
	viewEditBar = new QAction(tr("Edit toolbar"), tr("&Edit toolbar"), 0, this, 0, true);
	viewEditBar->setOn(true);
	viewEditBar->setStatusTip(tr("Enables/disables the edit toolbar"));
	viewEditBar->setWhatsThis(tr("Edit toolbar\n\nEnables/disables the edit toolbar."));
	connect(viewEditBar, SIGNAL(toggled(bool)), this, SLOT(slotViewEditBar(bool)));
	
	// View Menubar toggle
	viewMenuBar = new QAction(tr("Menubar"), tr("&Menubar"),
		QAccel::stringToKey(tr("F7")), this, 0, true);
	viewMenuBar->setOn(true);
	viewMenuBar->setStatusTip(tr("Enables/disables the menubar"));
	viewMenuBar->setWhatsThis(tr("Menubar\n\nEnables/disables the menubar."));
	connect(viewMenuBar, SIGNAL(toggled(bool)), this, SLOT(slotViewMenuBar(bool)));
	
	// View Statusbar toggle
	viewStatusBar = new QAction(tr("Statusbar"), tr("&Statusbar"), 0, this, 0, true);
	viewStatusBar->setOn(true);
	viewStatusBar->setStatusTip(tr("Enables/disables the statusbar"));
	viewStatusBar->setWhatsThis(tr("Statusbar\n\nEnables/disables the statusbar."));
	connect(viewStatusBar, SIGNAL(toggled(bool)), this, SLOT(slotViewStatusBar(bool)));
	
	// View Coordinates toggle
	viewCoords = new QAction(tr("Coordinates"),coordsIcon, tr("C&oordinates"),
		QAccel::stringToKey(tr("F8")), this, 0, true);
	viewCoords->setOn(false);
	viewCoords->setStatusTip(tr("Enables/disables the coordinates"));
	viewCoords->setWhatsThis(tr("Coordinates\n\nEnables/disables the coordinates."));
	connect(viewCoords, SIGNAL(toggled(bool)), this, SLOT(slotViewCoords(bool)));
	
	// View Slider toggle
	viewSlider = new QAction(tr("Slider"), tr("Sli&der"),
		QAccel::stringToKey(tr("Ctrl+F8")), this, 0, true);
	viewSlider->setOn(false);
	viewSlider->setStatusTip(tr("Enables/disables the slider"));
	viewSlider->setWhatsThis(tr("Slider\n\nEnables/disables the slider."));
	connect(viewSlider, SIGNAL(toggled(bool)), this, SLOT(slotViewSlider(bool)));
	
	// View Sidebar toggle
	viewSidebar = new QAction(tr("Sidebar"), tr("Side&bar"),
		QAccel::stringToKey(tr("F9")), this, 0, true);
	viewSidebar->setOn(true);
	viewSidebar->setStatusTip(tr("Enables/disables the sidebar"));
	viewSidebar->setWhatsThis(tr("Sidebar\n\nEnables/disables the sidebar."));
	connect(viewSidebar, SIGNAL(toggled(bool)), this, SLOT(slotViewSidebar(bool)));
	
	// View Comment toggle
	viewComment = new QAction(tr("Comment"), tr("&Comment"),
		QAccel::stringToKey(tr("F10")), this, 0, true);
	viewComment->setOn(true);
	viewComment->setStatusTip(tr("Enables/disables the comment field"));
	viewComment->setWhatsThis(tr("Comment field\n\nEnables/disables the comment field."));
	connect(viewComment, SIGNAL(toggled(bool)), this, SLOT(slotViewComment(bool)));
	
	// View Vertical Comment toggle
	viewVertComment = new QAction(tr("Vertical comment"), tr("&Vertical comment"),
		QAccel::stringToKey(tr("Shift+F10")), this, 0, true);
	viewVertComment->setOn(setting->readIntEntry("VIEW_COMMENT") == 2 ||
		setting->readIntEntry("VIEW_COMMENT") == 0 && setting->readIntEntry("BOARDVERTCOMMENT_0"));
	viewVertComment->setStatusTip(tr("Enables/disables a vertical direction of the comment field"));
	viewVertComment->setWhatsThis(tr("Vertical comment field\n\n"
		"Enables/disables a vertical direction of the comment field.\n\nNote: This setting is temporary for this board. In order to set permanent horizontal/vertical comment use 'Preferences'."));
	connect(viewVertComment, SIGNAL(toggled(bool)), this, SLOT(slotViewVertComment(bool)));
	
	// View Pin comment
	viewPinComment = new QAction(tr("Pin comment"), tr("&Pin comment"),
		QAccel::stringToKey(tr("Ctrl+F10")), this, 0, true);
	viewPinComment->setOn(false);
	viewPinComment->setStatusTip(tr("Enables/disables pinning the comment field"));
	viewPinComment->setWhatsThis(tr("Pin comment field\n\nEnables/disables pinning the comment field."));
	connect(viewPinComment, SIGNAL(toggled(bool)), this, SLOT(slotViewPinComment(bool)));
	
	// View Increase Size
	viewIncreaseSize = new QAction(tr("Zoom In"), increaseIcon, tr("Zoom &In"),
		QAccel::stringToKey(tr("Alt++")), this);
	viewIncreaseSize->setStatusTip(tr("Zooms in the board"));
	viewIncreaseSize->setWhatsThis(tr("Zoom In\n\nZooms in the board."));
	connect(viewIncreaseSize, SIGNAL(activated()), this, SLOT(slotViewIncreaseSize()));
	
	// View Decrease Size
	viewDecreaseSize = new QAction(tr("Zoom Out"), decreaseIcon, tr("Zoom &Out"),
		QAccel::stringToKey(tr("Alt+-")), this);
	viewDecreaseSize->setStatusTip(tr("Zooms out the board"));
	viewDecreaseSize->setWhatsThis(tr("Zoom Out\n\nZooms out the board."));
	connect(viewDecreaseSize, SIGNAL(activated()), this, SLOT(slotViewDecreaseSize()));
	
	// View Save Size
	viewSaveSize = new QAction(tr("Save size"), tr("Save si&ze"), 
		QAccel::stringToKey("Alt+0"), this, 0, false);
	viewSaveSize->setStatusTip(tr("Save the current window size"));
	viewSaveSize->setWhatsThis(tr("Save size\n\n"
		"Saves the current window size and restores it on the next program start.\n\nUse ALT + <number key> to store own sizes\nRestore with CTRL + <number key>\n\n<0> is default value at program start.\n<9> is default for edit window."));
	connect(viewSaveSize, SIGNAL(activated()), this, SLOT(slotViewSaveSize()));
	
	// View Fullscreen
	viewFullscreen = new QAction(tr("Fullscreen"), fullscreenIcon, tr("&Fullscreen"),
		QAccel::stringToKey(tr("F11")), this, 0, true);
	viewFullscreen->setOn(false);
	viewFullscreen->setStatusTip(tr("Enable/disable fullscreen mode"));
	viewFullscreen->setWhatsThis(tr("Fullscreen\n\nEnable/disable fullscreen mode."));
	connect(viewFullscreen, SIGNAL(toggled(bool)), this, SLOT(slotViewFullscreen(bool)));
	
	/*
	* Menu Help
	*/
	// Help Manual
	helpManual = new QAction(tr("Manual"), manualIcon, tr("&Manual"),
		QAccel::stringToKey(tr("F1")), this);
	helpManual->setStatusTip(tr("Opens the manual"));
	helpManual->setWhatsThis(tr("Help\n\nOpens the manual of the application."));
	connect(helpManual, SIGNAL(activated()), this, SLOT(slotHelpManual()));
	
	// Sound Info
	helpSoundInfo = new QAction(tr("Sound Info"), tr("&Sound"), 0, this);
	helpSoundInfo->setStatusTip(tr("Short info on sound availability"));
	helpSoundInfo->setWhatsThis(tr("Sound Info\n\nViews a message box with a short comment about sound."));
	connect(helpSoundInfo, SIGNAL(activated()), this, SLOT(slotHelpSoundInfo()));
	
	// Help About
	helpAboutApp = new QAction(tr("About"), tr("&About..."), 0, this);
	helpAboutApp->setStatusTip(tr("About the application"));
	helpAboutApp->setWhatsThis(tr("About\n\nAbout the application."));
	connect(helpAboutApp, SIGNAL(activated()), this, SLOT(slotHelpAbout()));
	
	// Help AboutQt
	helpAboutQt = new QAction(tr("About Qt"), tr("About &Qt..."), 0, this);
	helpAboutQt->setStatusTip(tr("About Qt"));
	helpAboutQt->setWhatsThis(tr("About Qt\n\nAbout Qt."));
	connect(helpAboutQt, SIGNAL(activated()), this, SLOT(slotHelpAboutQt()));
	
	// Disable some toolbuttons at startup
	navForward->setEnabled(false);
	navBackward->setEnabled(false);
	navFirst->setEnabled(false);
	navLast->setEnabled(false);
	navPrevVar->setEnabled(false);
	navNextVar->setEnabled(false);
	navMainBranch->setEnabled(false);
	navStartVar->setEnabled(false);
	navNextBranch->setEnabled(false);
	navSwapVariations->setEnabled(false);
	navPrevComment->setEnabled(false);
	navNextComment->setEnabled(false);
  	navIntersection->setEnabled(false);     //SL added eb 11
	editPaste->setEnabled(false);
	editPasteBrother->setEnabled(false);
}

void MainWindow::initMenuBar()
{
//#ifdef USE_XPM
	QIconSet wtIcon(QPixmap(const_cast<const char**>(contexthelp_xpm)));
//#else
//	QIconSet wtIcon(QPixmap(ICON_WHATSTHIS));
//#endif
	
	// submenu Import/Export
	importExportMenu = new QPopupMenu();
	importExportMenu->insertTearOffHandle();
	fileImportASCII->addTo(importExportMenu);
	fileImportASCIIClipB->addTo(importExportMenu);
	fileExportASCII->addTo(importExportMenu);
	importExportMenu->insertSeparator();
	fileImportSgfClipB->addTo(importExportMenu);
	fileExportSgfClipB->addTo(importExportMenu);
	importExportMenu->insertSeparator();
	fileExportPic->addTo(importExportMenu);
	fileExportPicClipB->addTo(importExportMenu);
	
	// menuBar entry fileMenu
	fileMenu = new QPopupMenu();
	fileMenu->insertTearOffHandle();
	fileNewBoard->addTo(fileMenu);
	fileNew->addTo(fileMenu);
	fileOpen->addTo(fileMenu);
	fileSave->addTo(fileMenu);
	fileSaveAs->addTo(fileMenu);
	fileClose->addTo(fileMenu);
	fileMenu->insertSeparator();
	fileMenu->insertItem(tr("&Import/Export"), importExportMenu);
	fileMenu->insertSeparator();
	fileQuit->addTo(fileMenu);
	
	// menuBar entry editMenu
	editMenu = new QPopupMenu();
	editMenu->insertTearOffHandle();
	editCut->addTo(editMenu);
	editPaste->addTo(editMenu);
	editPasteBrother->addTo(editMenu);
	editDelete->addTo(editMenu);
	editMenu->insertSeparator();
	editHideStones->addTo(editMenu); //QQQ
	editNumberMoves->addTo(editMenu);
	editMarkBrothers->addTo(editMenu);
	editMarkSons->addTo(editMenu);
	
	// menuBar entry navMenu
	navMenu = new QPopupMenu();
	navMenu->insertTearOffHandle();
	navFirst->addTo(navMenu);
	navBackward->addTo(navMenu);
	navForward->addTo(navMenu);
	navLast->addTo(navMenu);
	navMenu->insertSeparator();
	navMainBranch->addTo(navMenu);
	navStartVar->addTo(navMenu);
	navPrevVar->addTo(navMenu);
	navNextVar->addTo(navMenu);
	navNextBranch->addTo(navMenu);
	navMenu->insertSeparator();
	navNthMove->addTo(navMenu);
	navAutoplay->addTo(navMenu);
	navMenu->insertSeparator();
	navEmptyBranch->addTo(navMenu);
	navCloneNode->addTo(navMenu);
	navSwapVariations->addTo(navMenu);
 	navMenu->insertSeparator();		//added eb
	navPrevComment->addTo(navMenu);
	navNextComment->addTo(navMenu);		// end add

	
	// menuBar entry settingsMenu
	settingsMenu = new QPopupMenu();
	settingsMenu->insertTearOffHandle();
	setPreferences->addTo(settingsMenu);
	setGameInfo->addTo(settingsMenu);
	settingsMenu->insertSeparator();
	soundToggle->addTo(settingsMenu);
	
	// menuBar entry viewMenu
	viewMenu = new QPopupMenu();
	viewMenu->insertTearOffHandle();
	viewFileBar->addTo(viewMenu);
	viewToolBar->addTo(viewMenu);
	viewEditBar->addTo(viewMenu);
	viewMenuBar->addTo(viewMenu);
	viewStatusBar->addTo(viewMenu);
	viewCoords->addTo(viewMenu);
	viewSlider->addTo(viewMenu);
	viewSidebar->addTo(viewMenu);
	viewComment->addTo(viewMenu);
	viewVertComment->addTo(viewMenu);
	viewPinComment->addTo(viewMenu);
	viewMenu->insertSeparator();
	viewIncreaseSize->addTo(viewMenu);
	viewDecreaseSize->addTo(viewMenu);
	viewMenu->insertSeparator();
	viewSaveSize->addTo(viewMenu);
	viewMenu->insertSeparator();
	viewFullscreen->addTo(viewMenu);
	
	// menuBar entry helpMenu
	helpMenu = new QPopupMenu();
	helpManual->addTo(helpMenu);
	helpMenu->insertItem(wtIcon, tr("What's &This?"), this, SLOT(whatsThis()), SHIFT+Key_F1);
	helpMenu->insertSeparator();
	helpSoundInfo->addTo(helpMenu);
	helpMenu->insertSeparator();
	helpAboutApp->addTo(helpMenu);
	helpAboutQt->addTo(helpMenu);
	
	// menubar configuration
	menuBar()->insertItem(tr("&File"), fileMenu);
	menuBar()->insertItem(tr("&Edit"), editMenu);
	menuBar()->insertItem(tr("&Navigation"), navMenu);
	menuBar()->insertItem(tr("&Settings"), settingsMenu);
	menuBar()->insertItem(tr("&View"), viewMenu);
	menuBar()->insertSeparator();
	menuBar()->insertItem(tr("&Help"), helpMenu);
}

void MainWindow::initToolBar()
{
	// File toolbar
	fileBar = new QToolBar(this, "filebar");
	
	fileNew->addTo(fileBar);
	fileOpen->addTo(fileBar);
	fileSave->addTo(fileBar);
	fileSaveAs->addTo(fileBar);
	
	// Navigation toolbar
	toolBar = new QToolBar(this, "toolbar");
	
	navFirst->addTo(toolBar);
	navBackward->addTo(toolBar);
	navForward->addTo(toolBar);
	navLast->addTo(toolBar);
	
	toolBar->addSeparator();
	
	navMainBranch->addTo(toolBar);
	navStartVar->addTo(toolBar);
	navPrevVar->addTo(toolBar);
	navNextVar->addTo(toolBar);
	navNextBranch->addTo(toolBar);
	
	toolBar->addSeparator();
	navPrevComment->addTo(toolBar);        // added eb 2
	navNextComment->addTo(toolBar);
	navIntersection->addTo(toolBar);       //SL added eb 11
	toolBar->addSeparator();               //end add eb 2
	
	navAutoplay->addTo(toolBar);
	
	toolBar->addSeparator();

	soundToggle->addTo(toolBar);
	viewCoords->addTo(toolBar);

	toolBar->addSeparator();

	
	QWhatsThis::whatsThisButton(toolBar);
	
	toolBar->addSeparator();

//	setPreferences->addTo(toolBar);
	setGameInfo->addTo(toolBar);
	
	// Edit toolbar
	editBar = new QToolBar(this, "editbar");
	
	editCut->addTo(editBar);
	editPaste->addTo(editBar);
	editDelete->addTo(editBar);
}

void MainWindow::initStatusBar()
{
	// The coords widget
	statusTip = new StatusTip(statusBar());
	statusBar()->addWidget(statusTip);
	//statusBar()->show();
	statusBar()->setSizeGripEnabled(true);
	statusBar()->message(tr("Ready."));  // Normal indicator
	connect(statusTip, SIGNAL(clearStatusBar()), statusBar(), SLOT(clear()));
	
	// The turn widget
	statusTurn = new QLabel(statusBar());
	statusTurn->setAlignment(AlignCenter | SingleLine);
	statusTurn->setText(" 0 ");
	statusBar()->addWidget(statusTurn, 0, true);  // Permanent indicator
	QToolTip::add(statusTurn, tr("Current move"));
	QWhatsThis::add(statusTurn, tr("Move\nDisplays the number of the current turn and the last move played."));
	
	// The nav widget
	statusNav = new QLabel(statusBar());
	statusNav->setAlignment(AlignCenter | SingleLine);
	statusNav->setText(" 0/0 ");
	statusBar()->addWidget(statusNav, 0, true);  // Permanent indicator
	QToolTip::add(statusNav, tr("Brothers / sons"));
	QWhatsThis::add(statusNav, tr("Navigation\nShows the brothers and sons of the current move."));
	
	// The mode widget
	statusMode = new QLabel(statusBar());
	statusMode->setAlignment(AlignCenter | SingleLine);
	statusMode->setText(" " + QObject::tr("N", "Board status line: normal mode") + " ");
	statusBar()->addWidget(statusMode, 0, true);  // Permanent indicator
	QToolTip::add(statusMode, tr("Current mode"));
	QWhatsThis::add(statusMode,
		tr("Mode\nShows the current mode. 'N' for normal mode, 'E' for edit mode."));
	
	// The mark widget
	statusMark = new QLabel(statusBar());
	statusMark->setAlignment(AlignCenter | SingleLine);
	statusMark->setText(" - ");
	statusBar()->addWidget(statusMark, 0, true);  // Permanent indicator
	QToolTip::add(statusMark, tr("Current edit mark"));
	QWhatsThis::add(statusMark, tr("Mark\nShows the current edit mark. '-' in normal mode."));
}

void MainWindow::slotFileNewBoard()
{
	setting->qgo->addBoardWindow();
}

void MainWindow::slotFileNewGame()
{
	if (!checkModified())
		return;
	
	if (board->getGameMode() == modeNormal)
	{
		NewLocalGameDialog dlg(this, tr("newgame"), true);
		
		if (dlg.exec() == QDialog::Accepted)
		{
			GameData *d = new GameData;
			d->size = dlg.boardSizeSpin->value();
			d->komi = (float)dlg.komiSpin->value() / 10.0;
			d->handicap = dlg.handicapSpin->value();
			d->playerBlack = dlg.playerBlackEdit->text();
			d->rankBlack = dlg.playerBlackRkEdit->text();
			d->playerWhite = dlg.playerWhiteEdit->text();
			d->rankWhite = dlg.playerWhiteRkEdit->text();
			d->gameName = "";
			d->gameNumber = 0;
			d->fileName = "";
			d->byoTime = dlg.byoTimeSpin->value();
			d->style = 1;
			board->initGame(d);
		}
	}
	else
	{
		NewGameDialog dlg(this, tr("newgame"), true);
		
		if (dlg.exec() == QDialog::Accepted)
		{
			GameData *d = new GameData;
			d->size = dlg.boardSizeSpin->value();
			d->komi = (float)dlg.komiSpin->value() / 10.0;
			d->handicap = dlg.handicapSpin->value();
//			d->playerBlack = dlg.playerBlackEdit->text();
//			d->playerWhite = dlg.playerWhiteEdit->text();
			d->gameName = "";
			d->gameNumber = 0;
			d->fileName = "";
			d->byoTime = dlg.byoTimeSpin->value();
			d->style = 1;
			board->initGame(d);
		}
	}

	interfaceHandler->normalTools->komi->setText(QString::number(board->getGameData()->komi));
	interfaceHandler->normalTools->handicap->setText(QString::number(board->getGameData()->handicap));
	
	statusBar()->message(tr("New board prepared."));
}

void MainWindow::slotFileOpen()
{
	if (!checkModified())
		return;
	QString fileName(QFileDialog::getOpenFileName(setting->readEntry("LAST_DIR"),
		tr("SGF Files (*.sgf *.SGF);;MGT Files (*.mgt);;XML Files (*.xml);;All Files (*)"), this));
	if (fileName.isEmpty())
		return;
	doOpen(fileName, getFileExtension(fileName));
}

QString MainWindow::getFileExtension(const QString &fileName, bool defaultExt)
{
	QString filter;
	if (defaultExt)
		filter = tr("SGF");
	else
		filter = "";
	
	int pos=0, oldpos=-1, len = fileName.length();
	
	while ((pos = fileName.find('.', ++pos)) != -1 && pos < len)
		oldpos = pos;
	
	if (oldpos != -1)
		filter = fileName.mid(oldpos+1, fileName.length()-pos).upper();
	
	return filter;
}

void MainWindow::doOpen(const QString &fileName, const QString &filter, bool storedir)
{
	// qDebug("doOpen - fileName: %s - filter: %s", fileName.latin1(), filter.latin1());
	
	if (setting->readBoolEntry("REM_DIR") && storedir)
		rememberLastDir(fileName);
	
	if (board->openSGF(fileName, filter))
		statusBar()->message(fileName + " " + tr("loaded."));
}

bool MainWindow::startComputerPlay(QNewGameDlg * dlg, const QString &fileName, const QString &filter, const QString &computer_path)
{
	GameData *d = new GameData;
	d->size = dlg->getSize();
	d->komi = dlg->getKomi();
	d->handicap = dlg->getHandicap();
	d->playerBlack = dlg->getPlayerBlackName();
	//d->rankBlack = dlg.playerBlackRkEdit->text();
	d->playerWhite = dlg->getPlayerWhiteName();
	//d->rankWhite = dlg.playerWhiteRkEdit->text();
	d->gameName = "";
	d->gameNumber = 0;
	d->fileName = "";
	d->byoTime = dlg->getTime();
	d->style = 1;
	d->oneColorGo = dlg->getOneColorGo();

	blackPlayerType = dlg->getPlayerBlackType();
	whitePlayerType = dlg->getPlayerWhiteType();

	
	//if (fileName.isNull() || fileName.isEmpty())
	//	board->initGame(d);

	if (!board->startComputerPlay(dlg,fileName, filter, computer_path))
		return false;

	return true;
}

bool MainWindow::slotFileSave()
{
	QString fileName;
	if ((fileName = board->getGameData()->fileName).isEmpty())
	{
		if (setting->readBoolEntry("REM_DIR"))
			fileName = setting->readEntry("LAST_DIR");
		else
			fileName = QString::null;
		return doSave(fileName, false);
	}
	else
		return doSave(board->getGameData()->fileName, true);
}

bool MainWindow::slotFileSaveAs()
{
//	if (setting->readBoolEntry("REM_DIR"))
//		return doSave(setting->readEntry("LAST_DIR"), false);
	return doSave(0, false);
}

bool MainWindow::doSave(QString fileName, bool force)
{
	if (!force)
  	{
     		if  (fileName == NULL ||
			fileName.isNull() ||
          		fileName.isEmpty() ||
          		QDir(fileName).exists())
            	{
              		QString base = board->getCandidateFileName();
              		if (fileName == NULL || fileName.isNull() || fileName.isEmpty())
                		fileName = base;
              		else
                		fileName.append(base);

		}
		fileName = QFileDialog::getSaveFileName(fileName, tr("SGF Files (*.sgf);;All Files (*)"), this);
	}
	
	if (fileName.isEmpty())
		return false;
	
	if (getFileExtension(fileName, false).isEmpty())
		fileName.append(".sgf");
	
	// Confirm overwriting file.
	if (!force && QFile(fileName).exists())
		if (QMessageBox::information(this, PACKAGE,
			tr("This file already exists. Do you want to overwrite it?"),
			tr("Yes"), tr("No"), 0, 0, 1) == 1)
			return false;
		
	board->getGameData()->fileName = fileName;
		
	if (setting->readBoolEntry("REM_DIR"))
		rememberLastDir(fileName);
		
		if (!board->saveBoard(fileName))
		{
			QMessageBox::warning(this, PACKAGE, tr("Cannot save SGF file."));
			return false;
		}
		
	statusBar()->message(fileName + " " + tr("saved."));
	board->setModified(false);
	return true;
}

void MainWindow::slotFileClose()
{
	if (checkModified() == 1)
	{
		board->setModified(false);  // Prevent to ask a second time in qGo::quit()
		close();
	}
}

void MainWindow::slotFileImportSgfClipB()
{
	// check wheter it's an edit board during online game
	if (getInterfaceHandler()->refreshButton->text() != tr("Update") && !checkModified())
		return;
	
	if (!board->importSGFClipboard())
		QMessageBox::warning(this, PACKAGE, tr("Cannot load from clipboard. Is it empty?"));
	else
		statusBar()->message(tr("SGF imported."));
}

void MainWindow::slotFileExportSgfClipB()
{
	if (!board->exportSGFtoClipB())
		QMessageBox::warning(this, PACKAGE, tr("Failed to export SGF to clipboard."));
	else
		statusBar()->message(tr("SGF exported."));
}

void MainWindow::slotFileImportASCII()
{
	QString fileName(QFileDialog::getOpenFileName(QString::null,
		tr("Text Files (*.txt);;All Files (*)"),
		this));
	if (fileName.isEmpty())
		return;
	
	board->importASCII(fileName);
	statusBar()->message(tr("ASCII imported."));
}

void MainWindow::slotFileImportASCIIClipB()
{
	if (!board->importASCII(NULL, true))
		QMessageBox::warning(this, PACKAGE, tr("Importing ASCII failed. Clipboard empty?"));
	else
		statusBar()->message(tr("ASCII imported."));
}

void MainWindow::slotFileExportASCII()
{
	board->exportASCII();
	statusBar()->message(tr("Ready."));
}

void MainWindow::slotFileExportPic()
{
   QString *filter = new QString("");
   QString fileName = QFileDialog::getSaveFileName(
    "",
		"PNG (*.png);;BMP (*.bmp);;XPM (*.xpm);;XBM (*.xbm);;PNM (*.pnm);;GIF (*.gif);;JPEG (*.jpeg);;MNG (*.mng)",
		this,
    "qGo",
    tr("Export image as"),
    filter,
    true);


		if (fileName.isEmpty())
			return;

    //fileName.append(".").append(filter->left(3).lower());
    
		// Confirm overwriting file.
		if ( QFile::exists( fileName ) )
			if (QMessageBox::information(this, PACKAGE,
				tr("This file already exists. Do you want to overwrite it?"),
				tr("Yes"), tr("No"), 0, 0, 1) == 1)
				return;
			
			//QString filter = dlg.selectedFilter().left(3);
			board->exportPicture(fileName, filter->left(3));
//	}
}

void MainWindow::slotFileExportPicClipB()
{
	board->exportPicture(NULL, NULL, true);	
}

void MainWindow::slotEditCut()
{
	board->cutNode();
}

void MainWindow::slotEditPaste()
{
	board->pasteNode();
}

void MainWindow::slotEditPasteBrother()
{
	board->pasteNode(true);
}

void MainWindow::slotEditDelete()
{
	board->deleteNode();
}

void MainWindow::slotEditHideStones() // QQQ
{
	board->hideStones();
}

void MainWindow::slotEditNumberMoves()
{
	board->numberMoves();
}

void MainWindow::slotEditMarkBrothers()
{
	board->markVariations(false);
}

void MainWindow::slotEditMarkSons()
{
	board->markVariations(true);
}

void MainWindow::slotNavBackward()
{
	board->previousMove();
}

void MainWindow::slotNavForward()
{
	board->nextMove();
}

void MainWindow::slotNavFirst()
{
	board->gotoFirstMove();
}

void MainWindow::slotNavLast()
{
	board->gotoLastMove();
}

// this slot is used for edit window to navigate to last made move
void MainWindow::slotNavLastByTime()
{
	board->gotoLastMoveByTime();
}

void MainWindow::slotNavNextVar()
{
	board->nextVariation();
}

void MainWindow::slotNavPrevVar()
{
	board->previousVariation();
}

void MainWindow::slotNavNextComment()    //added eb
{
	board->nextComment();
}

void MainWindow::slotNavPrevComment()
{
	board->previousComment();
}                                        //end add eb

void MainWindow::slotNavStartVar()
{
	board->gotoVarStart();
}

void MainWindow::slotNavMainBranch()
{
	board->gotoMainBranch();
}

void MainWindow::slotNavNextBranch()
{
	board->gotoNextBranch();
}

void MainWindow::slotNavIntersection()       // added eb 11
{
    board->navIntersection();
}
                                     // end add eb 11


void MainWindow::slotNavNthMove()
{
	NthMoveDialog dlg(this, tr("entermove"), true);
	dlg.moveSpinBox->setValue(board->getCurrentMoveNumber());
	dlg.moveSpinBox->setFocus();
	
	if (dlg.exec() == QDialog::Accepted)
		board->gotoNthMove(dlg.moveSpinBox->value());
}

void MainWindow::slotNavAutoplay(bool toggle)
{
	if (!toggle)
	{
		timer->stop();
		statusBar()->message(tr("Autoplay stopped."));
	}
	else
	{
		if (setting->readIntEntry("TIMER_INTERVAL") < 0)
			setting->writeIntEntry("TIMER_INTERVAL", 0);
		else if (setting->readIntEntry("TIMER_INTERVAL") > 10)
			setting->writeIntEntry("TIMER_INTERVAL", 10);
		// check if time info available from sgf file
		if (setting->readBoolEntry("SGF_TIME_TAGS") && board->getGameData()->timeSystem != none)
			// set time to 1 sec
			timer->start(1000);
		else
			// set time interval as selected
			timer->start(int(timerIntervals[setting->readIntEntry("TIMER_INTERVAL")] * 1000));
		statusBar()->message(tr("Autoplay started."));
	}
}

void MainWindow::slotNavEmptyBranch()
{
	board->clearNode();
}

void MainWindow::slotNavCloneNode()
{
	board->duplicateNode();
	statusBar()->message(tr("Variation duplicated."));
}

void MainWindow::slotNavSwapVariations()
{
	if (board->swapVariations())
		statusBar()->message(tr("Variations swapped."));
	else
		statusBar()->message(tr("No previous variation available."));
}

void MainWindow::slotSetPreferences()
{
	// default tab
	dlgSetPreferences(-1);
}

void MainWindow::dlgSetPreferences(int tab)
{
	PreferencesDialog dlg(this, tr("preferences"), true);

	if (tab >= 0)
	{
		// set to default tab - no check for Qt 2.3.x
		if (dlg.tabWidget->count() <= tab+1)
			dlg.tabWidget->setCurrentPage(tab);
	}

	// Interface tab
//	dlg.styleListBox->setCurrentItem(setting->readIntEntry("STYLE"));
//	dlg.woodListBox->setCurrentItem(setting->readIntEntry("SKIN"));
	dlg.LineEdit_goban->setText(setting->readEntry("SKIN"));
	dlg.LineEdit_Table->setText(setting->readEntry("SKIN_TABLE"));
	dlg.languageComboBox->insertStringList(setting->getAvailableLanguages());
	dlg.languageComboBox->setCurrentItem(setting->convertLanguageCodeToNumber());
	dlg.commentComboBox->setCurrentItem(setting->readIntEntry("VIEW_COMMENT"));
//	dlg.stonesShadowCheckBox->setChecked(setting->readBoolEntry("STONES_SHADOW"));
	dlg.radioButtonStones_2D->setChecked((setting->readIntEntry("STONES_LOOK")==1));
	dlg.radioButtonStones_3D->setChecked((setting->readIntEntry("STONES_LOOK")==2));
	dlg.radioButtonStone_real->setChecked((setting->readIntEntry("STONES_LOOK")==3));

//	dlg.stonesShellsCheckBox->setChecked(setting->readBoolEntry("STONES_SHELLS"));
	dlg.stoneSoundCheckBox->setChecked(setting->readBoolEntry("SOUND_STONE"));
	dlg.autoplaySoundCheckBox->setChecked(setting->readBoolEntry("SOUND_AUTOPLAY"));
	dlg.talkSoundCheckBox->setChecked(setting->readBoolEntry("SOUND_TALK"));
	dlg.matchSoundCheckBox->setChecked(setting->readBoolEntry("SOUND_MATCH"));
	dlg.passSoundCheckBox->setChecked(setting->readBoolEntry("SOUND_PASS"));
	dlg.gameEndSoundCheckBox->setChecked(setting->readBoolEntry("SOUND_GAMEEND"));
	dlg.timeSoundCheckBox->setChecked(setting->readBoolEntry("SOUND_TIME"));
	dlg.saySoundCheckBox->setChecked(setting->readBoolEntry("SOUND_SAY"));
	dlg.enterSoundCheckBox->setChecked(setting->readBoolEntry("SOUND_ENTER"));
	dlg.leaveSoundCheckBox->setChecked(setting->readBoolEntry("SOUND_LEAVE"));
	dlg.disConnectSoundCheckBox->setChecked(setting->readBoolEntry("SOUND_DISCONNECT"));
	dlg.connectSoundCheckBox->setChecked(setting->readBoolEntry("SOUND_CONNECT"));
	dlg.variationComboBox->setCurrentItem(setting->readIntEntry("VAR_GHOSTS"));
	dlg.coordsCheckBox->setChecked(setting->readBoolEntry("BOARD_COORDS"));
	dlg.sgfCoordsCheckBox->setChecked(setting->readBoolEntry("SGF_BOARD_COORDS"));
	dlg.toolTipCoordsCheckBox->setChecked(setting->readBoolEntry("BOARD_COORDS_TIP"));
	dlg.cursorCheckBox->setChecked(setting->readBoolEntry("CURSOR"));
	dlg.smallerMarksCheckBox->setChecked(setting->readBoolEntry("SMALL_MARKS"));
	dlg.boldMarksCheckBox->setChecked(setting->readBoolEntry("BOLD_MARKS"));
	dlg.adjustFontSizeCheckBox->setChecked(setting->readBoolEntry("ADJ_FONT"));
	//dlg.smallerStonesCheckBox->setChecked(setting->readBoolEntry("SMALL_STONES"));
	dlg.tooltipsCheckBox->setChecked(!(setting->readBoolEntry("TOOLTIPS")));
	dlg.timerComboBox->setCurrentItem(setting->readIntEntry("TIMER_INTERVAL"));
	dlg.BYTimeSpin->setValue(setting->readIntEntry("BY_TIMER"));
	dlg.sgfTimeTagsCheckBox->setChecked(setting->readBoolEntry("SGF_TIME_TAGS"));
	dlg.sliderCheckBox->setChecked(setting->readBoolEntry("SLIDER"));
	dlg.sidebarCheckBox->setChecked(setting->readBoolEntry("SIDEBAR"));
	dlg.sidebarLeftCheckBox->setChecked(setting->readBoolEntry("SIDEBAR_LEFT"));
//	dlg.rememberFontCheckBox->setChecked(setting->readBoolEntry("REM_FONT"));
	dlg.variableFontCheckBox->setChecked(setting->readBoolEntry("VAR_FONT"));
	dlg.antiClickoCheckBox->setChecked(setting->readBoolEntry("ANTICLICKO"));
	
	// Import tab
	dlg.blackStoneEdit->setText(QString(QChar(setting->charset->blackStone)));
	dlg.whiteStoneEdit->setText(QString(QChar(setting->charset->whiteStone)));
	dlg.starPointEdit->setText(QString(QChar(setting->charset->starPoint)));
	dlg.emptyPointEdit->setText(QString(QChar(setting->charset->emptyPoint)));
	dlg.hBorderEdit->setText(QString(QChar(setting->charset->hBorder)));
	dlg.vBorderEdit->setText(QString(QChar(setting->charset->vBorder)));
	dlg.addBrotherCheckBox->setChecked(setting->addImportAsBrother);
	
	// SGF Loading tab
	dlg.fastLoadCheckBox->setChecked(board->fastLoad);
	dlg.rememberDirCheckBox->setChecked(setting->readBoolEntry("REM_DIR"));
	dlg.codecListBox->setCurrentItem(setting->readIntEntry("CODEC"));

	// Client Window tab
	dlg.LineEdit_watch->setText(setting->readEntry("WATCH"));
	dlg.LineEdit_exclude->setText(setting->readEntry("EXCLUDE"));
	dlg.CheckBox_extUserInfo->setChecked(setting->readBoolEntry("EXTUSERINFO"));
//	dlg.CheckBox_useNmatch->setChecked(setting->readBoolEntry("USE_NMATCH"));
	dlg.checkBox_Nmatch_Black->setChecked(setting->readBoolEntry("NMATCH_BLACK"));
	dlg.checkBox_Nmatch_White->setChecked(setting->readBoolEntry("NMATCH_WHITE"));
	dlg.checkBox_Nmatch_Nigiri->setChecked(setting->readBoolEntry("NMATCH_NIGIRI"));
	dlg.HandicapSpin_Nmatch->setValue(setting->readIntEntry("NMATCH_HANDICAP"));	
	dlg.timeSpin_Nmatch->setValue(setting->readIntEntry("NMATCH_MAIN_TIME"));
	dlg.BYSpin_Nmatch->setValue(setting->readIntEntry("NMATCH_BYO_TIME"));

	dlg.LineEdit_computer->setText(setting->readEntry("COMPUTER_PATH")); //SL added eb 12
	dlg.computerButtonWhite->setChecked(setting->readBoolEntry("COMPUTER_WHITE"));
	dlg.computerButtonBlack->setChecked(setting->readBoolEntry("COMPUTER_BLACK"));
	dlg.humanButtonWhite->setChecked(!setting->readBoolEntry("COMPUTER_WHITE"));
	dlg.humanButtonBlack->setChecked(!setting->readBoolEntry("COMPUTER_BLACK"));
	dlg.computerSizeSpin->setValue(setting->readIntEntry("COMPUTER_SIZE"));
	dlg.computerHandicapSpin->setValue(setting->readIntEntry("COMPUTER_HANDICAP"));	
	
	
	
	// Go Server tab
	dlg.boardSizeSpin->setValue(setting->readIntEntry("DEFAULT_SIZE"));
	dlg.timeSpin->setValue(setting->readIntEntry("DEFAULT_TIME"));
	dlg.BYSpin->setValue(setting->readIntEntry("DEFAULT_BY"));
	dlg.komiSpinDefault->setValue(setting->readIntEntry("DEFAULT_KOMI"));
	dlg.automaticNegotiationCheckBox->setChecked(setting->readBoolEntry("DEFAULT_AUTONEGO"));
	dlg.CheckBox_autoSave->setChecked(setting->readBoolEntry("AUTOSAVE"));
	dlg.CheckBox_autoSave_Played->setChecked(setting->readBoolEntry("AUTOSAVE_PLAYED"));
	/*
	// do some size changes
	QSize qs = dlg.pb_add->minimumSizeHint();
	if (dlg.pb_new->minimumSizeHint().width() > qs.width())
		qs = dlg.pb_new->minimumSizeHint();
	if (dlg.pb_delete->minimumSizeHint().width() > qs.width())
		qs = dlg.pb_delete->minimumSizeHint();

	if (qs.width() > 0)
	{
		dlg.pb_add->setMaximumSize(qs);
		dlg.pb_new->setMaximumSize(qs);
		dlg.pb_delete->setMaximumSize(qs);
	}
	dlg.pb_add->resize( QSize().expandedTo(qs));
	dlg.pb_new->resize( QSize().expandedTo(qs));
	dlg.pb_delete->resize( QSize().expandedTo(qs));
*/
	if (dlg.exec() == QDialog::Accepted)
	{
		preferencesSave(&dlg);
		preferencesAccept();
	}
}

bool MainWindow::preferencesSave(PreferencesDialog *dlg)
{
	ASSERT (dlg);

//	setting->writeIntEntry("STYLE", dlg->styleListBox->currentItem());
//	setting->writeIntEntry("SKIN", dlg->woodListBox->currentItem());
	setting->writeEntry("SKIN", dlg->LineEdit_goban->text()); 
	setting->writeEntry("SKIN_TABLE", dlg->LineEdit_Table->text()); 
	setting->writeEntry("LANG", setting->convertNumberToLanguage(dlg->languageComboBox->currentItem()));
	setting->writeIntEntry("VIEW_COMMENT", dlg->commentComboBox->currentItem());
//	setting->writeBoolEntry("STONES_SHADOW", dlg->stonesShadowCheckBox->isChecked());
//	setting->writeBoolEntry("STONES_SHELLS", dlg->stonesShellsCheckBox->isChecked());
	int i = 3;
	if ( dlg->radioButtonStones_2D->isChecked())
		i=1;
	else if ( dlg->radioButtonStones_3D->isChecked())
		i=2;
	setting->writeIntEntry("STONES_LOOK", i);

	setting->writeBoolEntry("SOUND_STONE", dlg->stoneSoundCheckBox->isChecked());
	setting->writeBoolEntry("SOUND_AUTOPLAY", dlg->autoplaySoundCheckBox->isChecked());
	setting->writeBoolEntry("SOUND_TALK", dlg->talkSoundCheckBox->isChecked());
	setting->writeBoolEntry("SOUND_MATCH", dlg->matchSoundCheckBox->isChecked());
	setting->writeBoolEntry("SOUND_GAMEEND", dlg->passSoundCheckBox->isChecked());
	setting->writeBoolEntry("SOUND_PASS", dlg->gameEndSoundCheckBox->isChecked());
	setting->writeBoolEntry("SOUND_TIME", dlg->timeSoundCheckBox->isChecked());
	setting->writeBoolEntry("SOUND_SAY", dlg->saySoundCheckBox->isChecked());
	setting->writeBoolEntry("SOUND_ENTER", dlg->enterSoundCheckBox->isChecked());
	setting->writeBoolEntry("SOUND_LEAVE", dlg->leaveSoundCheckBox->isChecked());
	setting->writeBoolEntry("SOUND_DISCONNECT", dlg->disConnectSoundCheckBox->isChecked());
	setting->writeBoolEntry("SOUND_CONNECT", dlg->connectSoundCheckBox->isChecked());
	setting->writeIntEntry("VAR_GHOSTS", dlg->variationComboBox->currentItem());
	setting->writeBoolEntry("BOARD_COORDS", dlg->coordsCheckBox->isChecked());
	setting->writeBoolEntry("SGF_BOARD_COORDS", dlg->sgfCoordsCheckBox->isChecked());
	setting->writeBoolEntry("SLIDER", dlg->sliderCheckBox->isChecked());
	setting->writeBoolEntry("SIDEBAR", dlg->sidebarCheckBox->isChecked());
	setting->writeBoolEntry("SIDEBAR_LEFT", dlg->sidebarLeftCheckBox->isChecked());
	setting->writeBoolEntry("BOARD_COORDS_TIP", dlg->toolTipCoordsCheckBox->isChecked());
	setting->writeBoolEntry("CURSOR", dlg->cursorCheckBox->isChecked());
	setting->writeBoolEntry("SMALL_MARKS", dlg->smallerMarksCheckBox->isChecked());
	setting->writeBoolEntry("BOLD_MARKS", dlg->boldMarksCheckBox->isChecked());
	setting->writeBoolEntry("ADJ_FONT", dlg->adjustFontSizeCheckBox->isChecked());
	//setting->writeBoolEntry("SMALL_STONES", dlg->smallerStonesCheckBox->isChecked());
	setting->writeBoolEntry("TOOLTIPS", !(dlg->tooltipsCheckBox->isChecked()));
	setting->writeIntEntry("BY_TIMER", dlg->BYTimeSpin->text().toInt());
	setting->writeIntEntry("TIMER_INTERVAL", dlg->timerComboBox->currentItem());
	setting->writeBoolEntry("SGF_TIME_TAGS", dlg->sgfTimeTagsCheckBox->isChecked());
	setting->charset->blackStone = dlg->blackStoneEdit->text().at(0).latin1();
	setting->charset->whiteStone = dlg->whiteStoneEdit->text().at(0).latin1();
	setting->charset->starPoint = dlg->starPointEdit->text().at(0).latin1();
	setting->charset->emptyPoint = dlg->emptyPointEdit->text().at(0).latin1();
	setting->charset->hBorder = dlg->hBorderEdit->text().at(0).latin1();
	setting->charset->vBorder = dlg->vBorderEdit->text().at(0).latin1();
	setting->addImportAsBrother = dlg->addBrotherCheckBox->isChecked();
	setting->fastLoad = dlg->fastLoadCheckBox->isChecked();
	setting->writeBoolEntry("REM_DIR", dlg->rememberDirCheckBox->isChecked());
	setting->writeBoolEntry("ANTICLICKO", dlg->antiClickoCheckBox->isChecked());
	setting->writeBoolEntry("VAR_FONT", dlg->variableFontCheckBox->isChecked());
	setting->writeIntEntry("CODEC", dlg->codecListBox->currentItem());

	// Client Window Tab
	setting->writeEntry("WATCH", dlg->LineEdit_watch->text());
	setting->writeEntry("EXCLUDE", dlg->LineEdit_exclude->text());
	setting->writeBoolEntry("EXTUSERINFO", dlg->CheckBox_extUserInfo->isChecked());
//	setting->writeBoolEntry("USE_NMATCH", dlg->CheckBox_useNmatch->isChecked());

	//Checks wether the nmatch parameters have been modified, in order to send a new nmatchrange command
	if( 	(setting->readBoolEntry("NMATCH_BLACK") != dlg->checkBox_Nmatch_Black->isChecked()) || 
		(setting->readBoolEntry("NMATCH_WHITE") != dlg->checkBox_Nmatch_White->isChecked()) ||
		(setting->readBoolEntry("NMATCH_NIGIRI") != dlg->checkBox_Nmatch_Nigiri->isChecked()) ||
		(setting->readIntEntry("NMATCH_MAIN_TIME") != dlg->timeSpin_Nmatch->text().toInt()) ||
		(setting->readIntEntry("NMATCH_BYO_TIME") != dlg->BYSpin_Nmatch->text().toInt()) ||
		(setting->readIntEntry("NMATCH_HANDICAP") != dlg->HandicapSpin_Nmatch->text().toInt()) ||
		(setting->readIntEntry("DEFAULT_SIZE") != dlg->boardSizeSpin->text().toInt()) ||
		(setting->readIntEntry("DEFAULT_TIME") != dlg->timeSpin->text().toInt()) ||
		(setting->readIntEntry("DEFAULT_BY") != dlg->BYSpin->text().toInt()) )
			setting->nmatch_settings_modified = true;

	setting->writeBoolEntry("NMATCH_BLACK", dlg->checkBox_Nmatch_Black->isChecked());
	setting->writeBoolEntry("NMATCH_WHITE", dlg->checkBox_Nmatch_White->isChecked());
	setting->writeBoolEntry("NMATCH_NIGIRI", dlg->checkBox_Nmatch_Nigiri->isChecked());
	setting->writeIntEntry("NMATCH_MAIN_TIME", dlg->timeSpin_Nmatch->text().toInt());
	setting->writeIntEntry("NMATCH_BYO_TIME", dlg->BYSpin_Nmatch->text().toInt());
	setting->writeIntEntry("NMATCH_HANDICAP", dlg->HandicapSpin_Nmatch->text().toInt());


	setting->writeIntEntry("DEFAULT_SIZE", dlg->boardSizeSpin->text().toInt());
	setting->writeIntEntry("DEFAULT_TIME", dlg->timeSpin->text().toInt());
	setting->writeIntEntry("DEFAULT_BY", dlg->BYSpin->text().toInt());
	setting->writeIntEntry("DEFAULT_KOMI", dlg->komiSpinDefault->text().toFloat());
	setting->writeBoolEntry("DEFAULT_AUTONEGO", dlg->automaticNegotiationCheckBox->isChecked());
	setting->writeBoolEntry("AUTOSAVE", dlg->CheckBox_autoSave->isChecked());
	setting->writeBoolEntry("AUTOSAVE_PLAYED", dlg->CheckBox_autoSave_Played->isChecked());
	
	// Computer Tab
	setting->writeEntry("COMPUTER_PATH", dlg->LineEdit_computer->text()); 
	setting->writeBoolEntry("COMPUTER_WHITE", dlg->computerButtonWhite->isChecked());
	setting->writeBoolEntry("COMPUTER_BLACK", dlg->computerButtonBlack->isChecked());
	setting->writeIntEntry("COMPUTER_SIZE", dlg->computerSizeSpin->text().toInt());
	setting->writeIntEntry("COMPUTER_HANDICAP", dlg->computerHandicapSpin->text().toInt());
	
	return true;
}

void MainWindow::updateBoard()
{

	viewSlider->setOn(setting->readBoolEntry("SLIDER"));
	viewSidebar->setOn(setting->readBoolEntry("SIDEBAR"));
	viewCoords->setOn(setting->readBoolEntry("BOARD_COORDS"));
	board->setShowSGFCoords(setting->readBoolEntry("SGF_BOARD_COORDS"));
	board->set_antiClicko(setting->readBoolEntry("ANTICLICKO"));
	viewComment->setOn(setting->readIntEntry("VIEW_COMMENT"));

	if (setting->readIntEntry("VIEW_COMMENT"))
	{
//		viewVertComment->setEnabled(true);
		viewVertComment->setOn(setting->readIntEntry("VIEW_COMMENT") == 2);
	}

	
	QToolTip::setEnabled(setting->readBoolEntry("TOOLTIPS"));

	if (timer->isActive())
	{
		if (setting->readBoolEntry("SGF_TIME_TAGS") && board->getGameData()->timeSystem != none)
			timer->changeInterval(1000);
		else
			timer->changeInterval(int(timerIntervals[setting->readIntEntry("TIMER_INVERVAL")] * 1000));
	}
	
	// SGF Loading tab
	board->fastLoad = setting->fastLoad;

	slotViewLeftSidebar();
	board->setVariationDisplay(static_cast<VariationDisplay>(setting->readIntEntry("VAR_GHOSTS")));
	board->setShowCursor(setting->readBoolEntry("CURSOR"));
	board->changeSize();  // For smaller stones
}

bool MainWindow::preferencesAccept()
{
	// Interface tab
	//setApplicationStyle();

	// Update all boards with settings
	setting->qgo->updateAllBoardSettings();
	setting->qgo->updateFont();
	
	if (setting->nmatch_settings_modified)
	{
		setting->cw->send_nmatch_range_parameters();
		setting->nmatch_settings_modified = false ;
	}

	return true;//result;
}

void MainWindow::slotSetGameInfo()
{
	GameInfoDialog dlg(this, "gameinfo", true);
	
	dlg.playerWhiteEdit->setText(board->getGameData()->playerWhite);
	
	dlg.playerBlackEdit->setText(board->getGameData()->playerBlack);
	dlg.whiteRankEdit->setText(board->getGameData()->rankWhite);
	dlg.blackRankEdit->setText(board->getGameData()->rankBlack);
	dlg.komiSpin->setValue((int)(board->getGameData()->komi * 10.0));
	dlg.handicapSpin->setValue(board->getGameData()->handicap);
	dlg.resultEdit->setText(board->getGameData()->result);
	dlg.dateEdit->setText(board->getGameData()->date);
	dlg.placeEdit->setText(board->getGameData()->place);
	dlg.copyrightEdit->setText(board->getGameData()->copyright);
	dlg.gameNameEdit->setText(board->getGameData()->gameName);

	if (dlg.exec() == QDialog::Accepted)
	{
		board->getGameData()->playerWhite = dlg.playerWhiteEdit->text();
		board->getGameData()->playerBlack = dlg.playerBlackEdit->text();
		board->getGameData()->rankWhite = dlg.whiteRankEdit->text();
		board->getGameData()->rankBlack = dlg.blackRankEdit->text();
		board->getGameData()->komi = (float)dlg.komiSpin->value() / 10.0;
		board->getGameData()->handicap = dlg.handicapSpin->value();
		board->getGameData()->result = dlg.resultEdit->text();
		board->getGameData()->date = dlg.dateEdit->text();
		board->getGameData()->place = dlg.placeEdit->text();
		board->getGameData()->copyright = dlg.copyrightEdit->text();
		board->getGameData()->gameName = dlg.gameNameEdit->text();
		
		board->isModified = true;
		board->updateCaption();  // Update caption in any case
	}

	interfaceHandler->normalTools->komi->setText(QString::number(board->getGameData()->komi));
	interfaceHandler->normalTools->handicap->setText(QString::number(board->getGameData()->handicap));
}

void MainWindow::slotViewFileBar(bool toggle)
{
	if (!toggle)
		fileBar->hide();
	else
		fileBar->show();
	
	setting->writeBoolEntry("FILEBAR", toggle);
	
	statusBar()->message(tr("Ready."));
}

void MainWindow::slotViewToolBar(bool toggle)
{

	if (!toggle)
		toolBar->hide();
	else
		toolBar->show();

	setting->writeBoolEntry("TOOLBAR", toggle);
	
	statusBar()->message(tr("Ready."));
}

void MainWindow::slotViewEditBar(bool toggle)
{
	if (!toggle)
		editBar->hide();
	else
		editBar->show();
	
	setting->writeBoolEntry("EDITBAR", toggle);
	
	statusBar()->message(tr("Ready."));
}

void MainWindow::slotViewMenuBar(bool toggle)
{
	if (!toggle)
		menuBar()->hide();
	else
		menuBar()->show();
	
	setting->writeBoolEntry("MENUBAR", toggle);
			
	statusBar()->message(tr("Ready."));
}

void MainWindow::slotViewStatusBar(bool toggle)
{
	if (!toggle)
	{
		statusBar()->hide();
		// Disconnect this signal, if the statusbar is hidden, we dont need it
		//disconnect(board, SIGNAL(coordsChanged(int, int, int)), statusTip, SLOT(slotStatusTipCoords(int, int, int)));
	}
	else
	{
		statusBar()->show();
		// Connect the mouseMove event of the board with the status bar coords widget
		connect(board, SIGNAL(coordsChanged(int, int, int,bool)), statusTip, SLOT(slotStatusTipCoords(int, int, int,bool)));
	}
	
	setting->writeBoolEntry("STATUSBAR", toggle);
	
	statusBar()->message(tr("Ready."));
}

void MainWindow::slotViewCoords(bool toggle)
{
	if (!toggle)
		board->setShowCoords(false);
	else
		board->setShowCoords(true);
	
	statusBar()->message(tr("Ready."));
}

void MainWindow::slotViewSlider(bool toggle)
{
	if (!toggle)
		mainWidget->toggleSlider(false);
	else
		mainWidget->toggleSlider(true);
	
	statusBar()->message(tr("Ready."));
}

void MainWindow::slotViewComment(bool toggle)
{
	setting->writeIntEntry("VIEW_COMMENT", toggle ? viewVertComment->isOn() ? 2 : 1 : 0);
	if (!toggle)
	{
		commentEdit->hide();
		commentEdit2->hide();
		viewVertComment->setEnabled(false);

		ListView_observers->hide();

		setFocus();
	}
	else
	{
		commentEdit->show();
		commentEdit2->show();
		viewVertComment->setEnabled(true);

		ListView_observers->show();

		setFocus();
	}
	
	statusBar()->message(tr("Ready."));
}

void MainWindow::slotViewVertComment(bool toggle)
{
	setting->writeIntEntry("VIEW_COMMENT", toggle ? 2 : 1);
	splitter->setOrientation(toggle ? Horizontal : Vertical);
	splitter->setResizeMode(mainWidget, QSplitter::KeepSize);
	splitter_comment->setOrientation(!toggle ? Horizontal : Vertical);
	splitter_comment->setResizeMode(ListView_observers, QSplitter::KeepSize);
}

// set sidbar left or right
void MainWindow::slotViewLeftSidebar()
{
	mainWidgetGuiLayout->remove(mainWidget->boardFrame);
	mainWidgetGuiLayout->remove(mainWidget->toolsFrame);

	if (setting->readBoolEntry("SIDEBAR_LEFT"))
	{
		mainWidgetGuiLayout->addWidget(mainWidget->toolsFrame, 0, 0);
		mainWidgetGuiLayout->addWidget(mainWidget->boardFrame, 0, 1);

	}
	else
	{
		mainWidgetGuiLayout->addWidget(mainWidget->toolsFrame, 0, 1);
		mainWidgetGuiLayout->addWidget(mainWidget->boardFrame, 0, 0);
	}
}

void MainWindow::slotViewSidebar(bool toggle)
{
	interfaceHandler->toggleSidebar(toggle);
	setting->writeBoolEntry("SIDEBAR", toggle);

	statusBar()->message(tr("Ready."));
}

void MainWindow::slotViewPinComment(bool toggle)
{
	if (!toggle)
	{
		commentEdit->reparent(splitter, QPoint(0, 0), true);
		viewComment->setOn(true);
		viewVertComment->setEnabled(true);
	}
	else
	{
		commentEdit->reparent(this, WType_TopLevel, QPoint(0, 0), true);
		commentEdit->setGeometry(200, 100, 400, 200);
		viewComment->setOn(true);
		viewVertComment->setEnabled(false);
	}
	statusBar()->message(tr("Ready."));
}

void MainWindow::slotViewIncreaseSize()
{
	board->increaseSize();
}

void MainWindow::slotViewDecreaseSize()
{
	board->decreaseSize();
}

void MainWindow::slotViewSaveSize()
{
	reStoreWindowSize("0", true);
}

void MainWindow::slotViewFullscreen(bool toggle)
{
	if (!toggle)
		showNormal();
	else
		showFullScreen();
	
	isFullScreen = toggle;
}

void MainWindow::slotHelpManual()
{
	setting->qgo->openManual();
}

void MainWindow::slotHelpSoundInfo()
{
	// show info
	setting->qgo->testSound(true);
}

void MainWindow::slotHelpAbout()
{
	setting->qgo->slotHelpAbout();
}

void MainWindow::slotHelpAboutQt()
{
	QMessageBox::aboutQt(this);
}

void MainWindow::slotToggleMarks()
{
	interfaceHandler->toggleMarks();
}

void MainWindow::slotTimerForward()
{
	static int eventCounter = 0;
	static int moveHasTimeInfo = 0;

	if (timer->isActive() && setting->readBoolEntry("SGF_TIME_TAGS") && board->getGameData()->timeSystem != none)
	{
		bool isBlacksTurn = board->getBoardHandler()->getBlackTurn();

		// decrease time info
		QString tmp;
		int seconds;

		if (isBlacksTurn)
			tmp = interfaceHandler->normalTools->pb_timeBlack->text();
		else
			tmp = interfaceHandler->normalTools->pb_timeWhite->text();

		int pos1 = 0;
		int pos2;
		seconds = 0;
		switch (tmp.contains(":"))
		{
			case 2:
				// case: 0:23:56
				pos1 = tmp.find(":") ;
				seconds += tmp.left(pos1).toInt()*3600;
				pos1++;
			case 1:
				pos2 = tmp.findRev(":", -1);
				seconds += tmp.mid(pos1, pos2-pos1).toInt()*60;
				seconds += tmp.mid(pos2+1, 2).toInt();
				break;
		}
		if (tmp.contains("-"))
			seconds = -seconds;
		seconds--;

		int openMoves = ((pos1 = tmp.find("/")) != -1 ? tmp.right(tmp.length() - pos1 - 1).toInt() : -1);

		// set stones using sgf's time info
		Move *m = board->getBoardHandler()->getTree()->getCurrent();

		interfaceHandler->setTimes(isBlacksTurn, seconds, openMoves);

		if (m->getMoveNumber() == 0)
			board->nextMove(setting->readBoolEntry("SOUND_AUTOPLAY"));
		else if (m->son == 0)
		{
			timer->stop();
			navAutoplay->setOn(false);
			statusBar()->message(tr("Autoplay stopped."));
		}
		else if (!m->son->getTimeinfo())
		{
			// no time info at this node; use settings
			int time = int(timerIntervals[setting->readIntEntry("TIMER_INTERVAL")]);
			if ((time > 1 && (++eventCounter%time == 0) || time <= 1) &&
				!board->nextMove(setting->readBoolEntry("SOUND_AUTOPLAY")))
			{
				timer->stop();
				navAutoplay->setOn(false);
				statusBar()->message(tr("Autoplay stopped."));
			}

			// indicate move to have time Info
			moveHasTimeInfo = 2;
		}
		else if (m->son->getTimeLeft() >= seconds || moveHasTimeInfo > 0)
		{
			// check if byoyomi period changed
			if (board->getGameData()->timeSystem == canadian &&
				m->son->getOpenMoves() > openMoves+1 && moveHasTimeInfo == 0)
			{
				if (seconds > (m->son->getTimeLeft() - board->getGameData()->byoTime))
					return;
			}

			if (!board->nextMove(setting->readBoolEntry("SOUND_AUTOPLAY")))
			{
				timer->stop();
				navAutoplay->setOn(false);
				statusBar()->message(tr("Autoplay stopped."));
			}

			if (moveHasTimeInfo > 0)
				moveHasTimeInfo--;
		}
	}
	else if ((!board->nextMove(setting->readBoolEntry("SOUND_AUTOPLAY")) || !isActiveWindow())
		&& timer->isActive())
	{
		timer->stop();
		navAutoplay->setOn(false);
		statusBar()->message(tr("Autoplay stopped."));
	}
}
/*
void MainWindow::setApplicationStyle()
{
	if (setting->readIntEntry("STYLE") < 0 || setting->readIntEntry("STYLE") > 6)
		setting->writeEntry("STYLE", "0");

	switch (setting->readIntEntry("STYLE"))
	{
	case 0:
    //qApp->setStyle(NULL);
    qApp->setStyle(style);
		break;
    
	case 1:
		qApp->setStyle(new QWindowsStyle);
		break;
		
	case 2:
		qApp->setStyle(new QPlatinumStyle);
		break;
		
	case 3:
		qApp->setStyle(new QMotifStyle);
		break;
		
	case 4:
		qApp->setStyle(new QMotifPlusStyle);
		break;
		
	case 5:
		//qApp->setStyle(new QCDEStyle);
		break;
		
	case 6:
		//qApp->setStyle(new QSGIStyle);
		break;
		
	default:
		qWarning("Unrecognized style!");
	}
}
*/
// store and restore window properties
bool MainWindow::reStoreWindowSize(QString strKey, bool store)
{
	if (store)
	{
		// store window size, format, comment format
		setting->writeIntEntry("BOARDVERTCOMMENT_" + strKey, !viewComment->isOn() ? 2 : viewVertComment->isOn());
		setting->writeBoolEntry("BOARDFULLSCREEN_" + strKey, isFullScreen);
		
		setting->writeEntry("BOARDWINDOW_" + strKey,
			QString::number(pos().x()) + DELIMITER +
			QString::number(pos().y()) + DELIMITER +
			QString::number(size().width()) + DELIMITER +
			QString::number(size().height()));
		
		setting->writeEntry("BOARDSPLITTER_" + strKey,
			QString::number(splitter->sizes().first()) + DELIMITER +
			QString::number(splitter->sizes().last()) + DELIMITER +
			QString::number(splitter_comment->sizes().first()) + DELIMITER +
			QString::number(splitter_comment->sizes().last()));
		
		statusBar()->message(tr("Window size saved.") + " (" + strKey + ")");
	}
	else
	{
		// restore board window
		QString s = setting->readEntry("BOARDWINDOW_" + strKey);
		if (s.length() > 5)
		{
			// do not resize until end of this procedure
			board->lockResize = true;

			if (setting->readBoolEntry("BOARDFULLSCREEN_" + strKey))
				viewFullscreen->setOn(true);
			else
			{
				viewFullscreen->setOn(false);
				QPoint p;
				p.setX(element(s, 0, DELIMITER).toInt());
				p.setY(element(s, 1, DELIMITER).toInt());
				QSize sz;
				sz.setWidth(element(s, 2, DELIMITER).toInt());
				sz.setHeight(element(s, 3, DELIMITER).toInt());
				resize(sz);
				move(p);
			}

			if (setting->readIntEntry("BOARDVERTCOMMENT_" + strKey) == 2)
			{
				// do not view comment
				viewComment->setOn(false);
			}
			else
			{
				// view comment
				viewComment->setOn(true);

				viewVertComment->setOn(setting->readIntEntry("VIEW_COMMENT") == 2 ||
					setting->readIntEntry("VIEW_COMMENT") == 0 && setting->readIntEntry("BOARDVERTCOMMENT_" + strKey));
				
				// restore splitter in board window
				s = setting->readEntry("BOARDSPLITTER_" + strKey);
				if (s.length() > 5)
				{
					int i, j;

					i = element(s, 2, DELIMITER).toInt();
					j = element(s, 3, DELIMITER).toInt();
					QValueList<int> w1;
					w1 << i << j;
					splitter_comment->setSizes(w1);

					w1.clear();
					i = element(s, 0, DELIMITER).toInt();
					j = element(s, 1, DELIMITER).toInt();
					if (i && j)
						w1 << i << j;
					splitter->setSizes(w1);
				}
			}

			// do some other stuff
			// maybe not correct set at startup time
			slotViewCoords(viewCoords->isOn());

			// ok, resize
			board->lockResize = false;
			board->changeSize();

			statusBar()->message(tr("Window size restored.") + " (" + strKey + ")");

			// update current move
			board->refreshDisplay();
		}
		else
			// window sizes not found
			return false;
	}

	return true;
}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
	// check for window resize command = number button
	if (e->key() >= Key_0 && e->key() <= Key_9)
	{
		QString strKey = QString::number(e->key() - Key_0);
		
		if (e->state() & AltButton)
		{
			// true -> store
			reStoreWindowSize(strKey, true);
			return;
		}
		else if (e->state() & ControlButton)
		{
			// false -> restore
			if (!reStoreWindowSize(strKey, false))
			{
				// sizes not found -> leave
				e->ignore();
				return;
			}
			
			return;
		}
	}
	
	bool localGame = true;
	// don't view last moves while observing or playing
	if (getBoard()->getGameMode() == modeObserve ||
		getBoard()->getGameMode() == modeMatch ||
		getBoard()->getGameMode() == modeTeach)
		localGame = false;
	
	switch (e->key())
	{
/*
		// TODO: DEBUG
#ifndef NO_DEBUG
	case Key_W:
		board->debug();
		break;
		
	case Key_L:
		board->openSGF("foo.sgf");
		break;
		
	case Key_S:
		board->saveBoard("foo.sgf");
		break;
		
	case Key_X:
		board->openSGF("foo.xml", "XML");
		break;
		// /DEBUG
#endif
*/
		
	case Key_Left:
		if (localGame || (getBoard()->getGameMode() == modeObserve))
			slotNavBackward();
		break;
		
	case Key_Right:
		if (localGame || (getBoard()->getGameMode() == modeObserve))
			slotNavForward();
		break;
		
	case Key_Up:
		if (localGame)
			slotNavPrevVar();
		break;
		
	case Key_Down:
		if (localGame)
			slotNavNextVar();
		break;
		
	case Key_Home:
		if (localGame || (getBoard()->getGameMode() == modeObserve))
			slotNavFirst();
		break;
		
	case Key_End:
		if (localGame || (getBoard()->getGameMode() == modeObserve))
			slotNavLast();
		break;

	default:
		e->ignore();
	}

	e->accept();
}

void MainWindow::closeEvent(QCloseEvent *e)
{
	// qDebug("MainWindow::closeEvent(QCloseEvent *e)");
	if (getBoard()->getGameMode() == modeObserve || checkModified() == 1)
	{
		emit signal_closeevent();
		//qGo::removeBoardWindow(this);
		if (parent_)
			QTimer::singleShot(1000, (QWidget*)parent_, SLOT(slot_closeevent()));
		else
			qWarning("*** BOARD CANNOT BE DELETED");
		e->accept();
	}
	else
		e->ignore();
}

int MainWindow::checkModified(bool interactive)
{
	if (!board->isModified)
		return 1;
	
	if (!interactive)
		return 0;
	
	switch (QMessageBox::warning(this, PACKAGE,
		tr("You modified the game.\nDo you want to save your changes?"),
		tr("Yes"), tr("No"), tr("Cancel"),
		0, 2))
	{
	case 0:
		return slotFileSave() && !board->isModified;
		
	case 1:
		return 1;
		
	case 2:
		return 2;
		
	default:
		qWarning("Unknown messagebox input.");
		return 0;
	}
	
	return 1;
}

void MainWindow::rememberLastDir(const QString &file)
{
	int pos = 0, lastpos = -1;
	
	while ((pos =  file.find('/', pos)) != -1 && pos++ < static_cast<int>(file.length()))
		lastpos = pos;
	
	if (lastpos == -1)
	{
		setting->writeEntry("LAST_DIR", "");
	}
	else
		setting->writeEntry("LAST_DIR", file.left(lastpos));
	
	// qDebug("LAST DIR: %s", qGo::getSettings()->lastDir.latin1());
}

void MainWindow::updateFont()
{
	// editable fields
	setFont(setting->fontComments);

	// observer
	ListView_observers->setFont(setting->fontLists);

	// rest: standard font
	mainWidget->setFont(setting->fontStandard);
	mainWidget->normalTools->pb_timeWhite->setFont(setting->fontClocks);
	mainWidget->normalTools->pb_timeBlack->setFont(setting->fontClocks);

	// set some colors
	QPalette pal = commentEdit2->palette();
	pal.setColor(QColorGroup::Base, setting->colorBackground);
	commentEdit2->setPalette(pal);
	ListView_observers->setPalette(pal);
	pal = commentEdit->palette();
	pal.setColor(QColorGroup::Base, setting->colorBackground);
	commentEdit->setPalette(pal);
}

// used in slot_editBoardInNewWindow()
void MainWindow::slot_animateClick()
{
	getInterfaceHandler()->refreshButton->animateClick();
}

void MainWindow::slot_editBoardInNewWindow()
{
	// online mode -> don't score, open new Window instead
	MainWindow *w = setting->qgo->addBoardWindow();
	w->reStoreWindowSize("9", false);
	
	CHECK_PTR(w);
	w->getInterfaceHandler()->toggleMode();
	w->getInterfaceHandler()->toggleMode();
	// create update button
	w->getInterfaceHandler()->refreshButton->setText(tr("Update"));
	QToolTip::add(w->getInterfaceHandler()->refreshButton, tr("Update from online game"));
	QWhatsThis::add(w->getInterfaceHandler()->refreshButton, tr("Update from online game to local board and supersede own changes."));
	w->getInterfaceHandler()->refreshButton->setEnabled(true);
	connect(w->getInterfaceHandler()->refreshButton, SIGNAL(clicked()), this, SLOT(slotFileExportSgfClipB()));
	connect(w->getInterfaceHandler()->refreshButton, SIGNAL(clicked()), w, SLOT(slotFileImportSgfClipB()));
	connect(w->getInterfaceHandler()->refreshButton, SIGNAL(clicked()), w, SLOT(slotNavLastByTime()));
	QTimer::singleShot(100, w, SLOT(slot_animateClick()));
}

void MainWindow::updateObserverCnt()
{
	ListView_observers->setColumnText(0, tr("Observers") + " (" + QString::number(ListView_observers->childCount()) + ")");
	ListView_observers->setSorting(2);
	ListView_observers->sort();
	ListView_observers->setSorting(-1);
}

void MainWindow::addObserver(const QString &name)
{
	QString name_without_rank = element(name, 0);
	QString rank = element(name, 1);
	QString rankkey = rkToKey(rank) + name_without_rank;
	
	new QListViewItem(ListView_observers, name_without_rank, rank, rankkey);
//	ListView_observer->addItem
}

void MainWindow::slotSoundToggle(bool toggle)
{
	board->getBoardHandler()->local_stone_sound = !toggle ;
}



