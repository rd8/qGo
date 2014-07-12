/****************************************************************************
** Form interface generated from reading ui file './mainwidget_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef MAINWIDGETGUI_H
#define MAINWIDGETGUI_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class Board;
class NormalTools;
class GameTree;
class QFrame;
class QLabel;
class QSlider;
class QSplitter;
class QPushButton;
class QTabWidget;
class QButtonGroup;
class QComboBox;

class MainWidgetGui : public QWidget
{
    Q_OBJECT

public:
    MainWidgetGui( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~MainWidgetGui();

    QFrame* boardFrame;
    Board* board;
    QLabel* sliderLeftLabel;
    QSlider* slider;
    QLabel* sliderRightLabel;
    QFrame* toolsFrame;
    QLabel* moveNumLabel;
    QLabel* turnLabel;
    QLabel* varLabel;
    QSplitter* splitter1;
    QPushButton* refreshButton;
    QPushButton* passButton;
    QPushButton* undoButton;
    QPushButton* adjournButton;
    QPushButton* scoreButton;
    QPushButton* resignButton;
    QTabWidget* toolsTabWidget;
    QWidget* tab_ns;
    NormalTools* normalTools;
    QWidget* tab_e;
    QButtonGroup* editButtonGroup;
    QPushButton* squareButton;
    QPushButton* circleButton;
    QPushButton* labelLetterButton;
    QPushButton* crossButton;
    QPushButton* triangleButton;
    QPushButton* labelNumberButton;
    QPushButton* stoneButton;
    QPushButton* colorButton;
    QWidget* tab_tg;
    QFrame* Frame9_2;
    GameTree* GameTree1;
    QLabel* TextLabel_opponent;
    QComboBox* cb_opponent;
    QPushButton* pb_controls;
    QPushButton* pb_mark;

public slots:
    virtual void doAdjourn();
    virtual void doPass();
    virtual void doRefresh();
    virtual void doResign();
    virtual void doScore(bool);
    virtual void doUndo();
    virtual void setMarkType(int);
    virtual void sliderChanged(int);

protected:
    QGridLayout* boardFrameLayout;
    QVBoxLayout* Layout7;
    QVBoxLayout* Layout9;
    QHBoxLayout* Layout5;
    QVBoxLayout* toolsFrameLayout;
    QVBoxLayout* Layout6;
    QVBoxLayout* layout14;
    QVBoxLayout* tab_nsLayout;
    QGridLayout* tab_tgLayout;
    QGridLayout* Frame9_2Layout;
    QVBoxLayout* Layout25;
    QHBoxLayout* Layout24;

protected slots:
    virtual void languageChange();

private:
    QPixmap image0;
    QPixmap image1;
    QPixmap image2;
    QPixmap image3;
    QPixmap image4;
    QPixmap image5;
    QPixmap image6;
    QPixmap image7;
    QPixmap image8;

};

#endif // MAINWIDGETGUI_H
