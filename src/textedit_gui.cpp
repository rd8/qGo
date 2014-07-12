/****************************************************************************
** Form implementation generated from reading ui file './textedit_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "textedit_gui.h"

#include <qvariant.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a TextEditDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
TextEditDialog::TextEditDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "TextEditDialog" );
    setMinimumSize( QSize( 190, 100 ) );
    setMaximumSize( QSize( 190, 100 ) );

    TextLabel1 = new QLabel( this, "TextLabel1" );
    TextLabel1->setGeometry( QRect( 10, 10, 148, 15 ) );

    textLineEdit = new QLineEdit( this, "textLineEdit" );
    textLineEdit->setGeometry( QRect( 10, 30, 170, 23 ) );
    textLineEdit->setMaxLength( 20 );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setGeometry( QRect( 10, 60, 80, 32 ) );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setGeometry( QRect( 100, 60, 80, 32 ) );
    buttonCancel->setAutoDefault( TRUE );
    languageChange();
    resize( QSize(190, 100).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );

    // tab order
    setTabOrder( textLineEdit, buttonOk );
    setTabOrder( buttonOk, buttonCancel );
}

/*
 *  Destroys the object and frees any allocated resources
 */
TextEditDialog::~TextEditDialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void TextEditDialog::languageChange()
{
    setCaption( tr( "Text Label" ) );
    TextLabel1->setText( tr( "Enter the text for this label:" ) );
    buttonOk->setText( tr( "&OK" ) );
    buttonCancel->setText( tr( "&Cancel" ) );
}

#include "textedit_gui.moc"
