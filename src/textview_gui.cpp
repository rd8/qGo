/****************************************************************************
** Form implementation generated from reading ui file './textview_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "textview_gui.h"

#include <qvariant.h>
#include <qmultilineedit.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a TextViewGUI as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
TextViewGUI::TextViewGUI( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "TextViewGUI" );
    TextViewGUILayout = new QVBoxLayout( this, 11, 6, "TextViewGUILayout"); 

    textEdit = new QMultiLineEdit( this, "textEdit" );
    textEdit->setMinimumSize( QSize( 350, 350 ) );
    TextViewGUILayout->addWidget( textEdit );

    Layout2 = new QHBoxLayout( 0, 0, 6, "Layout2"); 
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout2->addItem( Horizontal_Spacing2 );

    buttonToClip = new QPushButton( this, "buttonToClip" );
    Layout2->addWidget( buttonToClip );

    buttonSave = new QPushButton( this, "buttonSave" );
    Layout2->addWidget( buttonSave );

    buttonClose = new QPushButton( this, "buttonClose" );
    buttonClose->setAutoDefault( TRUE );
    buttonClose->setDefault( TRUE );
    Layout2->addWidget( buttonClose );
    TextViewGUILayout->addLayout( Layout2 );
    languageChange();
    resize( QSize(372, 411).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonClose, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonSave, SIGNAL( clicked() ), this, SLOT( saveMe() ) );
    connect( buttonToClip, SIGNAL( clicked() ), this, SLOT( toClipboard() ) );

    // tab order
    setTabOrder( textEdit, buttonToClip );
    setTabOrder( buttonToClip, buttonSave );
    setTabOrder( buttonSave, buttonClose );
}

/*
 *  Destroys the object and frees any allocated resources
 */
TextViewGUI::~TextViewGUI()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void TextViewGUI::languageChange()
{
    setCaption( tr( "Text View" ) );
    buttonToClip->setText( tr( "&To clipboard" ) );
    QToolTip::add( buttonToClip, tr( "Copy position to clipboard" ) );
    buttonSave->setText( tr( "&Save" ) );
    QToolTip::add( buttonSave, tr( "Save position to file" ) );
    buttonClose->setText( tr( "&Close" ) );
    QToolTip::add( buttonClose, tr( "Close this window" ) );
}

void TextViewGUI::toClipboard()
{
    qWarning( "TextViewGUI::toClipboard(): Not implemented yet" );
}

void TextViewGUI::saveMe()
{
    qWarning( "TextViewGUI::saveMe(): Not implemented yet" );
}

#include "textview_gui.moc"
