/****************************************************************************
** Form interface generated from reading ui file './newgame_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef NEWGAMEDIALOG_H
#define NEWGAMEDIALOG_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class KomiSpinBox;
class QFrame;
class QLabel;
class QSpinBox;
class QComboBox;
class QPushButton;
class QLineEdit;
class QButtonGroup;
class QRadioButton;

class NewGameDialog : public QDialog
{
    Q_OBJECT

public:
    NewGameDialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~NewGameDialog();

    QFrame* Frame14;
    QLabel* TextLabel3;
    QSpinBox* boardSizeSpin;
    QLabel* TextLabel5;
    QSpinBox* handicapSpin;
    QLabel* TextLabel4;
    KomiSpinBox* komiSpin;
    QFrame* Frame14_2;
    QLabel* TextLabel8;
    QComboBox* ComboBox_free;
    QLabel* BY_label;
    QSpinBox* byoTimeSpin;
    QLabel* TextLabel6;
    QSpinBox* timeSpin;
    QPushButton* buttonDecline;
    QPushButton* buttonOffer;
    QPushButton* buttonCancel;
    QFrame* Frame13;
    QLineEdit* playerOpponentRkEdit;
    QLineEdit* playerOpponentEdit;
    QLabel* TextLabel2;
    QPushButton* pb_stats;
    QButtonGroup* buttonGroup1;
    QRadioButton* play_white_button;
    QRadioButton* play_nigiri_button;
    QRadioButton* play_black_button;
    QPushButton* pb_suggest;

public slots:
    virtual void slot_changed();
    virtual void slot_decline();
    virtual void slot_offer(bool);
    virtual void slot_pbsuggest();
    virtual void slot_swapcolors();
    virtual void slot_stats_opponent();
    virtual void slot_cancel();

protected:
    QGridLayout* NewGameDialogLayout;
    QGridLayout* Frame14Layout;
    QHBoxLayout* Layout10;
    QHBoxLayout* HandicapLayout;
    QHBoxLayout* Layout15;
    QGridLayout* Frame14_2Layout;
    QHBoxLayout* Layout11;
    QHBoxLayout* Layout12;
    QHBoxLayout* Layout13;
    QHBoxLayout* Layout7;
    QSpacerItem* Horizontal_Spacing2;
    QGridLayout* Frame13Layout;
    QSpacerItem* spacer3;
    QGridLayout* buttonGroup1Layout;

protected slots:
    virtual void languageChange();

private:
    QPixmap image0;

};

#endif // NEWGAMEDIALOG_H
