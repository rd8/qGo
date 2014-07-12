/****************************************************************************
** Form interface generated from reading ui file './noderesults_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef NODERESULTSGUI_H
#define NODERESULTSGUI_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QIconView;
class QIconViewItem;
class QPushButton;

class NodeResultsGUI : public QWidget
{
    Q_OBJECT

public:
    NodeResultsGUI( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~NodeResultsGUI();

    QIconView* IconView;
    QPushButton* closeButton;

public slots:
    virtual void fump(QIconViewItem*);
    virtual void doHide();

protected:
    QVBoxLayout* NodeResultsGUILayout;
    QHBoxLayout* Layout1;
    QSpacerItem* Spacer1;

protected slots:
    virtual void languageChange();

};

#endif // NODERESULTSGUI_H
