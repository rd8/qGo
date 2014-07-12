/****************************************************************************
** Form interface generated from reading ui file './gui_dialog.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef DEBUG_DIALOG_H
#define DEBUG_DIALOG_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QTextEdit;

class Debug_Dialog : public QDialog
{
    Q_OBJECT

public:
    Debug_Dialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~Debug_Dialog();

    QTextEdit* TextView1;

protected:
    QGridLayout* Debug_DialogLayout;

protected slots:
    virtual void languageChange();

};

#endif // DEBUG_DIALOG_H
