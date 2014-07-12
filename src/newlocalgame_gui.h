/****************************************************************************
** Form interface generated from reading ui file './newlocalgame_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef NEWLOCALGAMEDIALOG_H
#define NEWLOCALGAMEDIALOG_H

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
class QLineEdit;
class QPushButton;
class QSpinBox;

class NewLocalGameDialog : public QDialog
{
    Q_OBJECT

public:
    NewLocalGameDialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~NewLocalGameDialog();

    QFrame* Frame13;
    QLabel* TextLabel2;
    QLabel* TextLabel1;
    QLineEdit* playerBlackEdit;
    QLabel* TextLabel2_2;
    QLineEdit* playerWhiteEdit;
    QLineEdit* playerWhiteRkEdit;
    QLineEdit* playerBlackRkEdit;
    QLabel* TextLabel2_3;
    QPushButton* buttonOk;
    QPushButton* buttonCancel;
    QFrame* Frame14;
    QLabel* TextLabel3;
    QSpinBox* boardSizeSpin;
    QLabel* TextLabel5;
    QSpinBox* handicapSpin;
    QLabel* TextLabel4;
    KomiSpinBox* komiSpin;
    QFrame* Frame14_2;
    QLabel* TextLabel7;
    QSpinBox* byoTimeSpin;
    QLabel* TextLabel6;
    QSpinBox* timeSpin;

protected:
    QGridLayout* NewLocalGameDialogLayout;
    QGridLayout* Frame13Layout;
    QHBoxLayout* Layout7;
    QSpacerItem* Horizontal_Spacing2;
    QGridLayout* Frame14Layout;
    QHBoxLayout* Layout10;
    QHBoxLayout* Layout14;
    QHBoxLayout* Layout15;
    QGridLayout* Frame14_2Layout;
    QHBoxLayout* Layout12;
    QHBoxLayout* Layout13;

protected slots:
    virtual void languageChange();

private:
    QPixmap image0;

};

#endif // NEWLOCALGAMEDIALOG_H
