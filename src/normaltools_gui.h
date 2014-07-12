/****************************************************************************
** Form interface generated from reading ui file './normaltools_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef NORMALTOOLS_H
#define NORMALTOOLS_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QGroupBox;
class QLabel;
class QPushButton;

class NormalTools : public QWidget
{
    Q_OBJECT

public:
    NormalTools( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~NormalTools();

    QGroupBox* whiteFrame;
    QLabel* TextLabel2;
    QLabel* capturesWhite;
    QPushButton* pb_timeWhite;
    QGroupBox* blackFrame;
    QLabel* TextLabel1;
    QLabel* capturesBlack;
    QPushButton* pb_timeBlack;
    QLabel* TextLabel_Handicap;
    QLabel* handicap;
    QLabel* TextLabel_free;
    QLabel* TextLabel_komi;
    QLabel* komi;
    QLabel* TextLabel_Byo;
    QLabel* byoyomi;

protected:
    QVBoxLayout* NormalToolsLayout;
    QSpacerItem* spacer8;
    QGridLayout* whiteFrameLayout;
    QGridLayout* blackFrameLayout;
    QGridLayout* layout17;
    QSpacerItem* spacer7;
    QSpacerItem* spacer6;
    QHBoxLayout* layout11;
    QHBoxLayout* layout10;
    QHBoxLayout* layout12;

protected slots:
    virtual void languageChange();

};

#endif // NORMALTOOLS_H
