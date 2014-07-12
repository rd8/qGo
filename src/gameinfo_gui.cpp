/****************************************************************************
** Form implementation generated from reading ui file './gameinfo_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "gameinfo_gui.h"

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
 *  Constructs a GameInfoDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
GameInfoDialog::GameInfoDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "GameInfoDialog" );
    setProperty( "maximumSize", QSize( 500, 400 ) );
    GameInfoDialogLayout = new QGridLayout( this, 1, 1, 0, 6, "GameInfoDialogLayout"); 

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Horizontal_Spacing2 );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setProperty( "minimumSize", QSize( 0, 0 ) );
    buttonOk->setProperty( "autoDefault", QVariant( TRUE, 0 ) );
    buttonOk->setProperty( "default", QVariant( TRUE, 0 ) );
    Layout1->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setProperty( "autoDefault", QVariant( TRUE, 0 ) );
    Layout1->addWidget( buttonCancel );

    GameInfoDialogLayout->addLayout( Layout1, 2, 0 );

    Frame1 = new QFrame( this, "Frame1" );
    Frame1->setProperty( "sizePolicy", QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)0, 0, 0, Frame1->sizePolicy().hasHeightForWidth() ) );
    Frame1->setProperty( "frameShape", "StyledPanel" );
    Frame1->setProperty( "frameShadow", "Raised" );
    Frame1Layout = new QGridLayout( Frame1, 1, 1, 11, 6, "Frame1Layout"); 

    TextLabel2 = new QLabel( Frame1, "TextLabel2" );

    Frame1Layout->addWidget( TextLabel2, 2, 0 );

    TextLabel1 = new QLabel( Frame1, "TextLabel1" );

    Frame1Layout->addWidget( TextLabel1, 1, 0 );

    playerBlackEdit = new QLineEdit( Frame1, "playerBlackEdit" );

    Frame1Layout->addWidget( playerBlackEdit, 2, 1 );

    TextLabe4 = new QLabel( Frame1, "TextLabe4" );

    Frame1Layout->addWidget( TextLabe4, 0, 2 );

    blackRankEdit = new QLineEdit( Frame1, "blackRankEdit" );
    blackRankEdit->setProperty( "maximumSize", QSize( 40, 32767 ) );

    Frame1Layout->addWidget( blackRankEdit, 2, 2 );

    whiteRankEdit = new QLineEdit( Frame1, "whiteRankEdit" );
    whiteRankEdit->setProperty( "maximumSize", QSize( 40, 32767 ) );

    Frame1Layout->addWidget( whiteRankEdit, 1, 2 );

    playerWhiteEdit = new QLineEdit( Frame1, "playerWhiteEdit" );
    playerWhiteEdit->setProperty( "minimumSize", QSize( 0, 0 ) );

    Frame1Layout->addWidget( playerWhiteEdit, 1, 1 );

    TextLabel3 = new QLabel( Frame1, "TextLabel3" );

    Frame1Layout->addWidget( TextLabel3, 0, 1 );

    GameInfoDialogLayout->addWidget( Frame1, 0, 0 );

    Frame2 = new QFrame( this, "Frame2" );
    Frame2->setProperty( "frameShape", "StyledPanel" );
    Frame2->setProperty( "frameShadow", "Raised" );
    Frame2Layout = new QVBoxLayout( Frame2, 11, 6, "Frame2Layout"); 

    Layout57 = new QHBoxLayout( 0, 0, 6, "Layout57"); 

    TextLabel4 = new QLabel( Frame2, "TextLabel4" );
    TextLabel4->setProperty( "minimumSize", QSize( 80, 0 ) );
    Layout57->addWidget( TextLabel4 );

    komiSpin = new KomiSpinBox( Frame2, "komiSpin" );
    komiSpin->setProperty( "minimumSize", QSize( 20, 20 ) );
    komiSpin->setProperty( "maximumSize", QSize( 60, 32767 ) );
    komiSpin->setProperty( "focusPolicy", "StrongFocus" );
    komiSpin->setProperty( "acceptDrops", QVariant( TRUE, 0 ) );
    Layout57->addWidget( komiSpin );
    Frame2Layout->addLayout( Layout57 );

    Layout12 = new QHBoxLayout( 0, 0, 6, "Layout12"); 

    TextLabel5 = new QLabel( Frame2, "TextLabel5" );
    TextLabel5->setProperty( "minimumSize", QSize( 80, 0 ) );
    Layout12->addWidget( TextLabel5 );

    handicapSpin = new QSpinBox( Frame2, "handicapSpin" );
    handicapSpin->setProperty( "minimumSize", QSize( 0, 0 ) );
    handicapSpin->setProperty( "maximumSize", QSize( 60, 32767 ) );
    handicapSpin->setProperty( "maxValue", 13 );
    Layout12->addWidget( handicapSpin );
    Frame2Layout->addLayout( Layout12 );

    Layout12_2 = new QHBoxLayout( 0, 0, 6, "Layout12_2"); 

    TextLabel6 = new QLabel( Frame2, "TextLabel6" );
    TextLabel6->setProperty( "minimumSize", QSize( 80, 0 ) );
    Layout12_2->addWidget( TextLabel6 );

    resultEdit = new QLineEdit( Frame2, "resultEdit" );
    Layout12_2->addWidget( resultEdit );
    Frame2Layout->addLayout( Layout12_2 );

    Layout8 = new QHBoxLayout( 0, 0, 6, "Layout8"); 

    TextLabel10 = new QLabel( Frame2, "TextLabel10" );
    TextLabel10->setProperty( "minimumSize", QSize( 80, 0 ) );
    Layout8->addWidget( TextLabel10 );

    gameNameEdit = new QLineEdit( Frame2, "gameNameEdit" );
    Layout8->addWidget( gameNameEdit );
    Frame2Layout->addLayout( Layout8 );

    Layout13 = new QHBoxLayout( 0, 0, 6, "Layout13"); 

    TextLabel7 = new QLabel( Frame2, "TextLabel7" );
    TextLabel7->setProperty( "minimumSize", QSize( 80, 0 ) );
    Layout13->addWidget( TextLabel7 );

    dateEdit = new QLineEdit( Frame2, "dateEdit" );
    Layout13->addWidget( dateEdit );
    Frame2Layout->addLayout( Layout13 );

    Layout13_2 = new QHBoxLayout( 0, 0, 6, "Layout13_2"); 

    TextLabel9 = new QLabel( Frame2, "TextLabel9" );
    TextLabel9->setProperty( "minimumSize", QSize( 80, 0 ) );
    Layout13_2->addWidget( TextLabel9 );

    placeEdit = new QLineEdit( Frame2, "placeEdit" );
    Layout13_2->addWidget( placeEdit );
    Frame2Layout->addLayout( Layout13_2 );

    Layout19 = new QHBoxLayout( 0, 0, 6, "Layout19"); 

    TextLabel8 = new QLabel( Frame2, "TextLabel8" );
    TextLabel8->setProperty( "minimumSize", QSize( 80, 0 ) );
    Layout19->addWidget( TextLabel8 );

    copyrightEdit = new QLineEdit( Frame2, "copyrightEdit" );
    Layout19->addWidget( copyrightEdit );
    Frame2Layout->addLayout( Layout19 );

    GameInfoDialogLayout->addWidget( Frame2, 1, 0 );
    languageChange();
    resize( QSize(238, 393).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );

    // tab order
    setTabOrder( playerWhiteEdit, whiteRankEdit );
    setTabOrder( whiteRankEdit, playerBlackEdit );
    setTabOrder( playerBlackEdit, blackRankEdit );
    setTabOrder( blackRankEdit, komiSpin );
    setTabOrder( komiSpin, handicapSpin );
    setTabOrder( handicapSpin, resultEdit );
    setTabOrder( resultEdit, gameNameEdit );
    setTabOrder( gameNameEdit, dateEdit );
    setTabOrder( dateEdit, placeEdit );
    setTabOrder( placeEdit, copyrightEdit );
    setTabOrder( copyrightEdit, buttonOk );
    setTabOrder( buttonOk, buttonCancel );
}

/*
 *  Destroys the object and frees any allocated resources
 */
GameInfoDialog::~GameInfoDialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void GameInfoDialog::languageChange()
{
    setProperty( "caption", tr( "Game Information" ) );
    buttonOk->setProperty( "text", tr( "&OK" ) );
    buttonCancel->setProperty( "text", tr( "&Cancel" ) );
    TextLabel2->setProperty( "text", tr( "Black" ) );
    TextLabel1->setProperty( "text", tr( "White" ) );
    playerBlackEdit->setProperty( "text", tr( "Black" ) );
    TextLabe4->setProperty( "text", tr( "Rank" ) );
    playerWhiteEdit->setProperty( "text", tr( "White" ) );
    TextLabel3->setProperty( "text", tr( "Name" ) );
    TextLabel4->setProperty( "text", tr( "Komi:" ) );
    TextLabel5->setProperty( "text", tr( "Handicap:" ) );
    TextLabel6->setProperty( "text", tr( "Result:" ) );
    TextLabel10->setProperty( "text", tr( "Game Name:" ) );
    TextLabel7->setProperty( "text", tr( "Date:" ) );
    TextLabel9->setProperty( "text", tr( "Played at:" ) );
    TextLabel8->setProperty( "text", tr( "Copyright:" ) );
}

#include "gameinfo_gui.moc"
