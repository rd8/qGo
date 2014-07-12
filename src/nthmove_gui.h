/****************************************************************************
** Form interface generated from reading ui file './nthmove_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef NTHMOVEDIALOG_H
#define NTHMOVEDIALOG_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QPushButton;
class QLabel;
class QSpinBox;

class NthMoveDialog : public QDialog
{
    Q_OBJECT

public:
    NthMoveDialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~NthMoveDialog();

    QPushButton* buttonCancel;
    QLabel* TextLabel1;
    QPushButton* buttonOk;
    QSpinBox* moveSpinBox;

protected:

protected slots:
    virtual void languageChange();

};

#endif // NTHMOVEDIALOG_H
