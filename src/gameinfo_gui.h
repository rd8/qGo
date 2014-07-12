/****************************************************************************
** Form interface generated from reading ui file './gameinfo_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef GAMEINFODIALOG_H
#define GAMEINFODIALOG_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class KomiSpinBox;
class QPushButton;
class QFrame;
class QLabel;
class QLineEdit;
class QSpinBox;

class GameInfoDialog : public QDialog
{
    Q_OBJECT

public:
    GameInfoDialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~GameInfoDialog();

    QPushButton* buttonOk;
    QPushButton* buttonCancel;
    QFrame* Frame1;
    QLabel* TextLabel2;
    QLabel* TextLabel1;
    QLineEdit* playerBlackEdit;
    QLabel* TextLabe4;
    QLineEdit* blackRankEdit;
    QLineEdit* whiteRankEdit;
    QLineEdit* playerWhiteEdit;
    QLabel* TextLabel3;
    QFrame* Frame2;
    QLabel* TextLabel4;
    KomiSpinBox* komiSpin;
    QLabel* TextLabel5;
    QSpinBox* handicapSpin;
    QLabel* TextLabel6;
    QLineEdit* resultEdit;
    QLabel* TextLabel10;
    QLineEdit* gameNameEdit;
    QLabel* TextLabel7;
    QLineEdit* dateEdit;
    QLabel* TextLabel9;
    QLineEdit* placeEdit;
    QLabel* TextLabel8;
    QLineEdit* copyrightEdit;

protected:
    QGridLayout* GameInfoDialogLayout;
    QHBoxLayout* Layout1;
    QSpacerItem* Horizontal_Spacing2;
    QGridLayout* Frame1Layout;
    QVBoxLayout* Frame2Layout;
    QHBoxLayout* Layout57;
    QHBoxLayout* Layout12;
    QHBoxLayout* Layout12_2;
    QHBoxLayout* Layout8;
    QHBoxLayout* Layout13;
    QHBoxLayout* Layout13_2;
    QHBoxLayout* Layout19;

protected slots:
    virtual void languageChange();

private:
    QPixmap image0;

};

#endif // GAMEINFODIALOG_H
