/****************************************************************************
** Form interface generated from reading ui file './textedit_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef TEXTEDITDIALOG_H
#define TEXTEDITDIALOG_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QLineEdit;
class QPushButton;

class TextEditDialog : public QDialog
{
    Q_OBJECT

public:
    TextEditDialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~TextEditDialog();

    QLabel* TextLabel1;
    QLineEdit* textLineEdit;
    QPushButton* buttonOk;
    QPushButton* buttonCancel;

protected:

protected slots:
    virtual void languageChange();

};

#endif // TEXTEDITDIALOG_H
