/****************************************************************************
** Form interface generated from reading ui file './preferences_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef PREFERENCESDIALOGGUI_H
#define PREFERENCESDIALOGGUI_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QPushButton;
class QTabWidget;
class QWidget;
class QButtonGroup;
class QLabel;
class QGroupBox;
class QLineEdit;
class QListView;
class QListViewItem;
class QCheckBox;
class QSpinBox;
class QComboBox;
class QRadioButton;
class QFrame;
class QListBox;
class QListBoxItem;

class PreferencesDialogGui : public QDialog
{
    Q_OBJECT

public:
    PreferencesDialogGui( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~PreferencesDialogGui();

    QPushButton* buttonHelp;
    QPushButton* buttonApply;
    QPushButton* buttonOk;
    QPushButton* buttonCancel;
    QTabWidget* tabWidget;
    QWidget* InterfaceTabWidget;
    QButtonGroup* ButtonGroup3;
    QLabel* fontLabel_standard;
    QPushButton* fontStandardButton;
    QLabel* fontLabel_marks;
    QPushButton* fontMarksButton;
    QLabel* fontLabel_comments;
    QPushButton* fontCommentsButton;
    QLabel* fontLabel_lists;
    QPushButton* fontListsButton;
    QLabel* fontLabel_lists_2;
    QPushButton* fontClocksButton;
    QLabel* fontLabel_console;
    QPushButton* fontConsoleButton;
    QGroupBox* groupBox27;
    QPushButton* pb_new_2;
    QPushButton* pb_add_2;
    QPushButton* pb_delete_2;
    QLabel* TextLabel2_4_2;
    QLineEdit* LineEdit_help;
    QLabel* TextLabel1_5_2;
    QLineEdit* LineEdit_command;
    QLabel* TextLabel3_2_2;
    QLineEdit* LineEdit_pixfile;
    QLabel* pixmapLabel;
    QPushButton* PixmapPathButton;
    QLabel* TextLabel1_title_2;
    QLineEdit* LineEdit_label;
    QListView* ListView_buttons;
    QButtonGroup* soundButtonGroups;
    QCheckBox* saySoundCheckBox;
    QCheckBox* autoplaySoundCheckBox;
    QCheckBox* stoneSoundCheckBox;
    QCheckBox* enterSoundCheckBox;
    QCheckBox* disConnectSoundCheckBox;
    QCheckBox* matchSoundCheckBox;
    QCheckBox* timeSoundCheckBox;
    QSpinBox* BYTimeSpin;
    QCheckBox* connectSoundCheckBox;
    QCheckBox* passSoundCheckBox;
    QCheckBox* leaveSoundCheckBox;
    QCheckBox* talkSoundCheckBox;
    QCheckBox* gameEndSoundCheckBox;
    QGroupBox* GroupBox8;
    QComboBox* languageComboBox;
    QButtonGroup* ButtonGroup4;
    QLabel* colorLabel;
    QPushButton* colorBackgroundButton;
    QLabel* colorLabel_2;
    QPushButton* colorAltBackgroundButton;
    QWidget* clientWindowTabWidget;
    QGroupBox* boardButtonGroup;
    QCheckBox* coordsCheckBox;
    QCheckBox* sgfCoordsCheckBox;
    QCheckBox* sliderCheckBox;
    QCheckBox* cursorCheckBox;
    QCheckBox* toolTipCoordsCheckBox;
    QCheckBox* variableFontCheckBox;
    QCheckBox* tooltipsCheckBox;
    QCheckBox* smallerMarksCheckBox;
    QCheckBox* adjustFontSizeCheckBox;
    QCheckBox* boldMarksCheckBox;
    QCheckBox* sidebarCheckBox;
    QCheckBox* sidebarLeftCheckBox;
    QGroupBox* GoEnginegroup_box_2;
    QLabel* textLabel1;
    QLineEdit* LineEdit_goban;
    QPushButton* GobanPicturePathButton;
    QLabel* textLabel1_2;
    QLineEdit* LineEdit_Table;
    QPushButton* TablePicturePathButton;
    QGroupBox* antiClickoGroup;
    QCheckBox* antiClickoCheckBox;
    QGroupBox* autoplayGroup;
    QLabel* TextLabel2;
    QComboBox* timerComboBox;
    QCheckBox* sgfTimeTagsCheckBox;
    QGroupBox* GroupBox76;
    QComboBox* commentComboBox;
    QGroupBox* GroupBox7;
    QComboBox* variationComboBox;
    QButtonGroup* buttonGroup6;
    QRadioButton* radioButtonStones_2D;
    QRadioButton* radioButtonStones_3D;
    QRadioButton* radioButtonStone_real;
    QWidget* ComputerGoTabWidget;
    QGroupBox* GoEnginegroup_box;
    QLineEdit* LineEdit_computer;
    QPushButton* ComputerPathButton;
    QButtonGroup* buttonGroup4;
    QRadioButton* computerButtonWhite;
    QRadioButton* humanButtonWhite;
    QButtonGroup* buttonGroup5;
    QRadioButton* computerButtonBlack;
    QRadioButton* humanButtonBlack;
    QGroupBox* groupBox25_3;
    QLabel* TextLabel6_2;
    QSpinBox* computerHandicapSpin;
    QLabel* TextLabel3_3_3;
    QSpinBox* computerSizeSpin;
    QWidget* SGFTabWidget;
    QFrame* Frame6;
    QLabel* TextLabel1_4;
    QListBox* codecListBox;
    QFrame* Frame5;
    QCheckBox* fastLoadCheckBox;
    QLabel* TextLabel1_2;
    QGroupBox* groupBox26;
    QCheckBox* addBrotherCheckBox;
    QFrame* Frame4;
    QCheckBox* rememberDirCheckBox;
    QGroupBox* GroupBox4;
    QLabel* TextLabel1;
    QLineEdit* blackStoneEdit;
    QLabel* TextLabel2_2;
    QLineEdit* whiteStoneEdit;
    QLabel* TextLabel3;
    QLineEdit* starPointEdit;
    QLabel* TextLabel4;
    QLineEdit* emptyPointEdit;
    QLabel* TextLabel1_3;
    QLineEdit* hBorderEdit;
    QLabel* TextLabel2_3;
    QLineEdit* vBorderEdit;
    QWidget* goServerTabWidget;
    QLabel* textLabel1_3;
    QComboBox* ComboBox_codec;
    QLabel* TextLabel1_title;
    QLineEdit* LineEdit_title;
    QLabel* TextLabel1_5;
    QLineEdit* LineEdit_host;
    QLabel* TextLabel2_4;
    QLineEdit* LineEdit_port;
    QLabel* TextLabel3_2;
    QLineEdit* LineEdit_login;
    QLabel* TextLabel4_2;
    QLineEdit* LineEdit_pass;
    QFrame* Line4;
    QPushButton* pb_new;
    QPushButton* pb_add;
    QPushButton* pb_delete;
    QListView* ListView_hosts;
    QGroupBox* IGSgroup_box;
    QCheckBox* CheckBox_extUserInfo;
    QGroupBox* IGSgroup_box_2;
    QCheckBox* CheckBox_autoSave;
    QCheckBox* CheckBox_autoSave_Played;
    QGroupBox* special_players;
    QLabel* TextLabel_watch;
    QLineEdit* LineEdit_watch;
    QLineEdit* LineEdit_exclude;
    QLabel* TextLabel_exclude;
    QGroupBox* groupBox25;
    QLabel* textLabel1_4;
    QLabel* TextLabel3_3;
    QSpinBox* boardSizeSpin;
    QLabel* TextLabel3_3_2;
    QSpinBox* komiSpinDefault;
    QCheckBox* automaticNegotiationCheckBox;
    QFrame* line2;
    QLabel* TextLabel6;
    QSpinBox* timeSpin;
    QLabel* TextLabel7;
    QSpinBox* BYSpin;
    QFrame* line2_2;
    QLabel* textLabel1_4_2;
    QLabel* TextLabel6_3;
    QSpinBox* timeSpin_Nmatch;
    QLabel* TextLabel7_2;
    QSpinBox* BYSpin_Nmatch;
    QFrame* line2_3;
    QLabel* textLabel2;
    QCheckBox* checkBox_Nmatch_Black;
    QCheckBox* checkBox_Nmatch_White;
    QCheckBox* checkBox_Nmatch_Nigiri;
    QLabel* TextLabel3_3_4;
    QSpinBox* HandicapSpin_Nmatch;

public slots:
    virtual void doAdjourn();
    virtual void doPass();
    virtual void doRefresh();
    virtual void doResign();
    virtual void doScore(bool);
    virtual void doUndo();
    virtual void slot_clickedSoundCheckBox(int);
    virtual void selectColor();
    virtual void selectFont(int);
    virtual void setMarkType(int);
    virtual void sliderChanged(int);
    virtual void slot_accept();
    virtual void slot_add();
    virtual void slot_clickedListView(QListViewItem*, const QPoint&, int);
    virtual void slot_delete();
    virtual void slot_new();
    virtual void slot_reject();
    virtual void slot_getComputerPath();
    virtual void slot_textChanged(const QString&);
    virtual void startHelpMode();
    virtual void slot_add_button();
    virtual void slot_delete_button();
    virtual void slot_new_button();
    virtual void slot_getPixmapPath();
    virtual void slot_text_buttonChanged(const QString&);
    virtual void slot_clicked_buttonListView(QListViewItem*, const QPoint&,int);
    virtual void apply();
    virtual void slot_apply();
    virtual void slot_getGobanPicturePath();
    virtual void selectAltColor();
    virtual void slot_getTablePicturePath();
    virtual void slot_main_time_changed(int);
    virtual void slot_BY_time_changed(int);

protected:
    QGridLayout* PreferencesDialogGuiLayout;
    QHBoxLayout* Layout1;
    QSpacerItem* Horizontal_Spacing2;
    QGridLayout* InterfaceTabWidgetLayout;
    QSpacerItem* spacer10_2;
    QSpacerItem* spacer11;
    QGridLayout* ButtonGroup3Layout;
    QHBoxLayout* Layout17_2;
    QHBoxLayout* Layout17;
    QHBoxLayout* Layout18;
    QHBoxLayout* Layout19;
    QHBoxLayout* Layout19_2;
    QHBoxLayout* Layout19_2_2;
    QGridLayout* groupBox27Layout;
    QHBoxLayout* Layout39_2;
    QSpacerItem* Spacer3_2;
    QVBoxLayout* Layout35_2;
    QHBoxLayout* Layout34_2;
    QHBoxLayout* Layout16_2;
    QHBoxLayout* Layout14_2;
    QHBoxLayout* layout83;
    QHBoxLayout* layout81;
    QGridLayout* soundButtonGroupsLayout;
    QHBoxLayout* GroupBox8Layout;
    QHBoxLayout* ButtonGroup4Layout;
    QHBoxLayout* layout45;
    QHBoxLayout* layout45_2;
    QGridLayout* clientWindowTabWidgetLayout;
    QSpacerItem* Spacer8_2;
    QGridLayout* boardButtonGroupLayout;
    QHBoxLayout* Layout20_2;
    QGridLayout* GoEnginegroup_box_2Layout;
    QHBoxLayout* layout46;
    QHBoxLayout* layout46_2;
    QVBoxLayout* antiClickoGroupLayout;
    QVBoxLayout* autoplayGroupLayout;
    QHBoxLayout* Layout3;
    QHBoxLayout* Layout12;
    QGridLayout* GroupBox76Layout;
    QGridLayout* GroupBox7Layout;
    QHBoxLayout* buttonGroup6Layout;
    QGridLayout* ComputerGoTabWidgetLayout;
    QSpacerItem* Spacer8;
    QGridLayout* GoEnginegroup_boxLayout;
    QHBoxLayout* Layout37;
    QHBoxLayout* layout42;
    QGridLayout* buttonGroup4Layout;
    QHBoxLayout* layout41;
    QGridLayout* buttonGroup5Layout;
    QHBoxLayout* layout40;
    QGridLayout* groupBox25_3Layout;
    QHBoxLayout* Layout13_2;
    QHBoxLayout* Layout10_3_3;
    QGridLayout* SGFTabWidgetLayout;
    QSpacerItem* spacer10;
    QHBoxLayout* Frame6Layout;
    QSpacerItem* Spacer7_2;
    QVBoxLayout* Frame5Layout;
    QGridLayout* Frame4Layout;
    QVBoxLayout* GroupBox4Layout;
    QHBoxLayout* Layout4;
    QHBoxLayout* Layout5;
    QHBoxLayout* Layout6;
    QHBoxLayout* Layout7;
    QHBoxLayout* Layout11;
    QHBoxLayout* Layout10;
    QGridLayout* goServerTabWidgetLayout;
    QHBoxLayout* layout47;
    QHBoxLayout* Layout9_2;
    QHBoxLayout* Layout14;
    QHBoxLayout* Layout16;
    QHBoxLayout* Layout17_3;
    QHBoxLayout* Layout18_3;
    QHBoxLayout* Layout39;
    QSpacerItem* Spacer3;
    QVBoxLayout* Layout35;
    QHBoxLayout* Layout34;
    QGridLayout* IGSgroup_boxLayout;
    QHBoxLayout* IGSgroup_box_2Layout;
    QSpacerItem* spacer12;
    QGridLayout* special_playersLayout;
    QHBoxLayout* groupBox25Layout;
    QVBoxLayout* layout61;
    QHBoxLayout* layout60;
    QVBoxLayout* layout47_2;
    QHBoxLayout* Layout10_3;
    QHBoxLayout* Layout10_3_2;
    QVBoxLayout* layout48;
    QHBoxLayout* Layout13;
    QHBoxLayout* Layout12_2;
    QVBoxLayout* layout127;
    QHBoxLayout* layout126;
    QVBoxLayout* layout48_2;
    QHBoxLayout* Layout13_3;
    QHBoxLayout* Layout12_2_2;
    QVBoxLayout* layout125;
    QHBoxLayout* layout124;
    QVBoxLayout* layout123;
    QHBoxLayout* Layout10_3_4;

protected slots:
    virtual void languageChange();

private:
    QPixmap image0;
    QPixmap image1;

};

#endif // PREFERENCESDIALOGGUI_H