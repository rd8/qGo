/****************************************************************************
** Form implementation generated from reading ui file './noderesults_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "noderesults_gui.h"

#include <qvariant.h>
#include <qiconview.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a NodeResultsGUI as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
NodeResultsGUI::NodeResultsGUI( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "NodeResultsGUI" );
    NodeResultsGUILayout = new QVBoxLayout( this, 11, 6, "NodeResultsGUILayout"); 

    IconView = new QIconView( this, "IconView" );
    IconView->setMinimumSize( QSize( 100, 100 ) );
    NodeResultsGUILayout->addWidget( IconView );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Spacer1 );

    closeButton = new QPushButton( this, "closeButton" );
    Layout1->addWidget( closeButton );
    NodeResultsGUILayout->addLayout( Layout1 );
    languageChange();
    resize( QSize(130, 161).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( closeButton, SIGNAL( clicked() ), this, SLOT( doHide() ) );
    connect( IconView, SIGNAL( selectionChanged(QIconViewItem*) ), this, SLOT( fump(QIconViewItem*) ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
NodeResultsGUI::~NodeResultsGUI()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void NodeResultsGUI::languageChange()
{
    setCaption( tr( "Results" ) );
    closeButton->setText( tr( "Close" ) );
}

void NodeResultsGUI::fump(QIconViewItem*)
{
    qWarning( "NodeResultsGUI::fump(QIconViewItem*): Not implemented yet" );
}

void NodeResultsGUI::doHide()
{
    qWarning( "NodeResultsGUI::doHide(): Not implemented yet" );
}

#include "noderesults_gui.moc"
