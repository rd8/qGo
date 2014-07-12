/****************************************************************************
** Form implementation generated from reading ui file './newlocalgame_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "newlocalgame_gui.h"

#include <qvariant.h>
#include <komispinbox.h>
#include <qpushbutton.h>
#include <qframe.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qspinbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a NewLocalGameDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
NewLocalGameDialog::NewLocalGameDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "NewLocalGameDialog" );
    setProperty( "maximumSize", QSize( 300, 380 ) );
    NewLocalGameDialogLayout = new QGridLayout( this, 1, 1, 0, 6, "NewLocalGameDialogLayout"); 

    Frame13 = new QFrame( this, "Frame13" );
    Frame13->setProperty( "frameShape", "StyledPanel" );
    Frame13->setProperty( "frameShadow", "Raised" );
    Frame13Layout = new QGridLayout( Frame13, 1, 1, 11, 6, "Frame13Layout"); 

    TextLabel2 = new QLabel( Frame13, "TextLabel2" );

    Frame13Layout->addWidget( TextLabel2, 1, 0 );

    TextLabel1 = new QLabel( Frame13, "TextLabel1" );

    Frame13Layout->addWidget( TextLabel1, 2, 0 );

    playerBlackEdit = new QLineEdit( Frame13, "playerBlackEdit" );

    Frame13Layout->addWidget( playerBlackEdit, 2, 1 );

    TextLabel2_2 = new QLabel( Frame13, "TextLabel2_2" );

    Frame13Layout->addWidget( TextLabel2_2, 0, 1 );

    playerWhiteEdit = new QLineEdit( Frame13, "playerWhiteEdit" );

    Frame13Layout->addWidget( playerWhiteEdit, 1, 1 );

    playerWhiteRkEdit = new QLineEdit( Frame13, "playerWhiteRkEdit" );

    Frame13Layout->addWidget( playerWhiteRkEdit, 1, 2 );

    playerBlackRkEdit = new QLineEdit( Frame13, "playerBlackRkEdit" );

    Frame13Layout->addWidget( playerBlackRkEdit, 2, 2 );

    TextLabel2_3 = new QLabel( Frame13, "TextLabel2_3" );

    Frame13Layout->addWidget( TextLabel2_3, 0, 2 );

    NewLocalGameDialogLayout->addWidget( Frame13, 0, 0 );

    Layout7 = new QHBoxLayout( 0, 0, 6, "Layout7"); 
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout7->addItem( Horizontal_Spacing2 );

    buttonOk = new QPushButton( this, "buttonOk" );
    Layout7->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    Layout7->addWidget( buttonCancel );

    NewLocalGameDialogLayout->addLayout( Layout7, 3, 0 );

    Frame14 = new QFrame( this, "Frame14" );
    Frame14->setProperty( "frameShape", "StyledPanel" );
    Frame14->setProperty( "frameShadow", "Raised" );
    Frame14Layout = new QGridLayout( Frame14, 1, 1, 11, 6, "Frame14Layout"); 

    Layout10 = new QHBoxLayout( 0, 0, 6, "Layout10"); 

    TextLabel3 = new QLabel( Frame14, "TextLabel3" );
    Layout10->addWidget( TextLabel3 );

    boardSizeSpin = new QSpinBox( Frame14, "boardSizeSpin" );
    boardSizeSpin->setProperty( "maximumSize", QSize( 60, 32767 ) );
    boardSizeSpin->setProperty( "maxValue", 36 );
    boardSizeSpin->setProperty( "minValue", 4 );
    boardSizeSpin->setProperty( "value", 19 );
    Layout10->addWidget( boardSizeSpin );

    Frame14Layout->addLayout( Layout10, 0, 0 );

    Layout14 = new QHBoxLayout( 0, 0, 6, "Layout14"); 

    TextLabel5 = new QLabel( Frame14, "TextLabel5" );
    Layout14->addWidget( TextLabel5 );

    handicapSpin = new QSpinBox( Frame14, "handicapSpin" );
    handicapSpin->setProperty( "maximumSize", QSize( 60, 32767 ) );
    handicapSpin->setProperty( "maxValue", 13 );
    Layout14->addWidget( handicapSpin );

    Frame14Layout->addLayout( Layout14, 2, 0 );

    Layout15 = new QHBoxLayout( 0, 0, 6, "Layout15"); 

    TextLabel4 = new QLabel( Frame14, "TextLabel4" );
    Layout15->addWidget( TextLabel4 );

    komiSpin = new KomiSpinBox( Frame14, "komiSpin" );
    komiSpin->setProperty( "minimumSize", QSize( 20, 20 ) );
    komiSpin->setProperty( "maximumSize", QSize( 60, 32767 ) );
    komiSpin->setProperty( "focusPolicy", "StrongFocus" );
    komiSpin->setProperty( "acceptDrops", QVariant( TRUE, 0 ) );
    Layout15->addWidget( komiSpin );

    Frame14Layout->addLayout( Layout15, 1, 0 );

    NewLocalGameDialogLayout->addWidget( Frame14, 1, 0 );

    Frame14_2 = new QFrame( this, "Frame14_2" );
    Frame14_2->setProperty( "frameShape", "StyledPanel" );
    Frame14_2->setProperty( "frameShadow", "Raised" );
    Frame14_2Layout = new QGridLayout( Frame14_2, 1, 1, 11, 6, "Frame14_2Layout"); 

    Layout12 = new QHBoxLayout( 0, 0, 6, "Layout12"); 

    TextLabel7 = new QLabel( Frame14_2, "TextLabel7" );
    Layout12->addWidget( TextLabel7 );

    byoTimeSpin = new QSpinBox( Frame14_2, "byoTimeSpin" );
    byoTimeSpin->setProperty( "maximumSize", QSize( 60, 32767 ) );
    byoTimeSpin->setProperty( "value", 10 );
    Layout12->addWidget( byoTimeSpin );

    Frame14_2Layout->addLayout( Layout12, 1, 0 );

    Layout13 = new QHBoxLayout( 0, 0, 6, "Layout13"); 

    TextLabel6 = new QLabel( Frame14_2, "TextLabel6" );
    Layout13->addWidget( TextLabel6 );

    timeSpin = new QSpinBox( Frame14_2, "timeSpin" );
    timeSpin->setProperty( "maximumSize", QSize( 60, 32767 ) );
    timeSpin->setProperty( "value", 10 );
    Layout13->addWidget( timeSpin );

    Frame14_2Layout->addLayout( Layout13, 0, 0 );

    NewLocalGameDialogLayout->addWidget( Frame14_2, 2, 0 );
    languageChange();
    resize( QSize(259, 359).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );

    // tab order
    setTabOrder( playerWhiteEdit, playerBlackEdit );
    setTabOrder( playerBlackEdit, boardSizeSpin );
    setTabOrder( boardSizeSpin, komiSpin );
    setTabOrder( komiSpin, handicapSpin );
    setTabOrder( handicapSpin, buttonOk );
    setTabOrder( buttonOk, buttonCancel );
}

/*
 *  Destroys the object and frees any allocated resources
 */
NewLocalGameDialog::~NewLocalGameDialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void NewLocalGameDialog::languageChange()
{
    setProperty( "caption", tr( "New Game" ) );
    TextLabel2->setProperty( "text", tr( "White:" ) );
    TextLabel1->setProperty( "text", tr( "Black:" ) );
    playerBlackEdit->setProperty( "text", tr( "Black" ) );
    TextLabel2_2->setProperty( "text", tr( "Player Name:" ) );
    playerWhiteEdit->setProperty( "text", tr( "White" ) );
    TextLabel2_3->setProperty( "text", tr( "Rank:" ) );
    buttonOk->setProperty( "text", tr( "&Ok" ) );
    buttonCancel->setProperty( "text", tr( "&Cancel" ) );
    TextLabel3->setProperty( "text", tr( "Board size:" ) );
    TextLabel5->setProperty( "text", tr( "Handicap:" ) );
    TextLabel4->setProperty( "text", tr( "Komi:" ) );
    TextLabel7->setProperty( "text", tr( "Byoyomi Time:" ) );
    QToolTip::add( byoTimeSpin, tr( "Additional time for 25 moves; after 25 moves the byoyomi time starts again and again" ) );
    TextLabel6->setProperty( "text", tr( "Time:" ) );
    QToolTip::add( timeSpin, tr( "Playing time" ) );
}

#include "newlocalgame_gui.moc"
