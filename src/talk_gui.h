/****************************************************************************
** Form interface generated from reading ui file './talk_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef TALKGUI_H
#define TALKGUI_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLineEdit;
class QPushButton;
class QTextEdit;
class QFrame;
class QLabel;

class TalkGui : public QDialog
{
    Q_OBJECT

public:
    TalkGui( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~TalkGui();

    QLineEdit* LineEdit1;
    QPushButton* pb_match;
    QPushButton* pb_releaseTalkTab;
    QTextEdit* MultiLineEdit1;
    QFrame* stats_layout;
    QLabel* stats_rating;
    QLabel* stats_idle;
    QLabel* Label_Idle;
    QLabel* textLabel1;
    QLabel* textLabel1_2;
    QLabel* stats_rated;
    QLabel* textLabel1_2_2_2;
    QLabel* stats_country;
    QLabel* textLabel1_3;
    QLabel* stats_wins;
    QLabel* textLabel1_3_2;
    QLabel* stats_loss;
    QLabel* textLabel1_2_2_2_2_2;
    QLabel* stats_playing;
    QLabel* textLabel1_2_2;
    QLineEdit* stats_address;
    QLabel* stats_info;
    QLabel* stats_default;

public slots:
    virtual void slot_pbRelTab();
    virtual void slot_match();

protected:
    QGridLayout* TalkGuiLayout;
    QHBoxLayout* layout7;
    QGridLayout* stats_layoutLayout;
    QHBoxLayout* layout21;
    QGridLayout* layout13;
    QHBoxLayout* layout12;
    QVBoxLayout* layout20;
    QHBoxLayout* layout17;
    QHBoxLayout* layout18;
    QHBoxLayout* layout9;
    QHBoxLayout* layout8;
    QHBoxLayout* layout6;
    QHBoxLayout* layout46;

protected slots:
    virtual void languageChange();

private:
    QPixmap image0;
    QPixmap image1;

};

#endif // TALKGUI_H
