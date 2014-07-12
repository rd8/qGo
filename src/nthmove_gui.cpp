/****************************************************************************
** Form implementation generated from reading ui file './nthmove_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "nthmove_gui.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qspinbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a NthMoveDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
NthMoveDialog::NthMoveDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "NthMoveDialog" );
    setMinimumSize( QSize( 210, 90 ) );
    setMaximumSize( QSize( 210, 90 ) );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setGeometry( QRect( 110, 50, 80, 32 ) );
    buttonCancel->setAutoDefault( TRUE );

    TextLabel1 = new QLabel( this, "TextLabel1" );
    TextLabel1->setGeometry( QRect( 10, 10, 120, 20 ) );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setGeometry( QRect( 20, 50, 80, 32 ) );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );

    moveSpinBox = new QSpinBox( this, "moveSpinBox" );
    moveSpinBox->setGeometry( QRect( 140, 10, 50, 20 ) );
    moveSpinBox->setMaxValue( 999 );
    languageChange();
    resize( QSize(210, 90).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );

    // tab order
    setTabOrder( moveSpinBox, buttonOk );
    setTabOrder( buttonOk, buttonCancel );
}

/*
 *  Destroys the object and frees any allocated resources
 */
NthMoveDialog::~NthMoveDialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void NthMoveDialog::languageChange()
{
    setCaption( tr( "Move Number" ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    TextLabel1->setText( tr( "Enter move number:" ) );
    buttonOk->setText( tr( "&OK" ) );
}

#include "nthmove_gui.moc"
