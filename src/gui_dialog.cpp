/****************************************************************************
** Form implementation generated from reading ui file './gui_dialog.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "gui_dialog.h"

#include <qvariant.h>
#include <qtextedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a Debug_Dialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
Debug_Dialog::Debug_Dialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "Debug_Dialog" );
    Debug_DialogLayout = new QGridLayout( this, 1, 1, 0, 0, "Debug_DialogLayout"); 

    TextView1 = new QTextEdit( this, "TextView1" );
    TextView1->setReadOnly( TRUE );

    Debug_DialogLayout->addWidget( TextView1, 0, 0 );
    languageChange();
    resize( QSize(336, 680).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );
}

/*
 *  Destroys the object and frees any allocated resources
 */
Debug_Dialog::~Debug_Dialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Debug_Dialog::languageChange()
{
    setCaption( tr( "Debug" ) );
}

#include "gui_dialog.moc"
