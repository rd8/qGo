/****************************************************************************
** Form interface generated from reading ui file './textview_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef TEXTVIEWGUI_H
#define TEXTVIEWGUI_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QMultiLineEdit;
class QPushButton;

class TextViewGUI : public QDialog
{
    Q_OBJECT

public:
    TextViewGUI( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~TextViewGUI();

    QMultiLineEdit* textEdit;
    QPushButton* buttonToClip;
    QPushButton* buttonSave;
    QPushButton* buttonClose;

public slots:
    virtual void toClipboard();
    virtual void saveMe();

protected:
    QVBoxLayout* TextViewGUILayout;
    QHBoxLayout* Layout2;
    QSpacerItem* Horizontal_Spacing2;

protected slots:
    virtual void languageChange();

};

#endif // TEXTVIEWGUI_H
