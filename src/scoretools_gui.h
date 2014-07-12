/****************************************************************************
** Form interface generated from reading ui file './scoretools_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SCORETOOLS_H
#define SCORETOOLS_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QFrame;
class QGroupBox;
class QLabel;

class ScoreTools : public QWidget
{
    Q_OBJECT

public:
    ScoreTools( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~ScoreTools();

    QFrame* Frame1;
    QGroupBox* whiteFrame;
    QLabel* TextLabel3;
    QLabel* totalWhite;
    QLabel* TextLabel2;
    QLabel* capturesWhite;
    QLabel* TextLabel1;
    QLabel* terrWhite;
    QLabel* TextLabel0;
    QLabel* komi;
    QGroupBox* blackFrame;
    QLabel* TextLabel4;
    QLabel* terrBlack;
    QLabel* TextLabel5;
    QLabel* capturesBlack;
    QLabel* TextLabel6;
    QLabel* totalBlack;

protected:
    QGridLayout* ScoreToolsLayout;
    QGridLayout* Frame1Layout;
    QGridLayout* whiteFrameLayout;
    QHBoxLayout* Layout7;
    QHBoxLayout* Layout3;
    QHBoxLayout* Layout2;
    QHBoxLayout* Layout2_2;
    QGridLayout* blackFrameLayout;
    QHBoxLayout* Layout6;
    QHBoxLayout* Layout15;
    QHBoxLayout* Layout14;

protected slots:
    virtual void languageChange();

};

#endif // SCORETOOLS_H
