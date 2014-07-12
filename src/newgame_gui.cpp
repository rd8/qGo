/****************************************************************************
** Form implementation generated from reading ui file './newgame_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "newgame_gui.h"

#include <qvariant.h>
#include <komispinbox.h>
#include <qpushbutton.h>
#include <qframe.h>
#include <qlabel.h>
#include <qspinbox.h>
#include <qcombobox.h>
#include <qlineedit.h>
#include <qbuttongroup.h>
#include <qradiobutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "komispinbox.h"

/*
 *  Constructs a NewGameDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
NewGameDialog::NewGameDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "NewGameDialog" );
    setMaximumSize( QSize( 300, 380 ) );
    NewGameDialogLayout = new QGridLayout( this, 1, 1, 0, 6, "NewGameDialogLayout"); 

    Frame14 = new QFrame( this, "Frame14" );
    Frame14->setFrameShape( QFrame::StyledPanel );
    Frame14->setFrameShadow( QFrame::Raised );
    Frame14Layout = new QGridLayout( Frame14, 1, 1, 11, 6, "Frame14Layout"); 

    Layout10 = new QHBoxLayout( 0, 0, 6, "Layout10"); 

    TextLabel3 = new QLabel( Frame14, "TextLabel3" );
    Layout10->addWidget( TextLabel3 );

    boardSizeSpin = new QSpinBox( Frame14, "boardSizeSpin" );
    boardSizeSpin->setMaximumSize( QSize( 60, 32767 ) );
    boardSizeSpin->setMaxValue( 36 );
    boardSizeSpin->setMinValue( 4 );
    boardSizeSpin->setValue( 19 );
    Layout10->addWidget( boardSizeSpin );

    Frame14Layout->addLayout( Layout10, 0, 0 );

    HandicapLayout = new QHBoxLayout( 0, 0, 6, "HandicapLayout"); 

    TextLabel5 = new QLabel( Frame14, "TextLabel5" );
    HandicapLayout->addWidget( TextLabel5 );

    handicapSpin = new QSpinBox( Frame14, "handicapSpin" );
    handicapSpin->setMaximumSize( QSize( 60, 32767 ) );
    handicapSpin->setMaxValue( 13 );
    HandicapLayout->addWidget( handicapSpin );

    Frame14Layout->addLayout( HandicapLayout, 2, 0 );

    Layout15 = new QHBoxLayout( 0, 0, 6, "Layout15"); 

    TextLabel4 = new QLabel( Frame14, "TextLabel4" );
    Layout15->addWidget( TextLabel4 );

    komiSpin = new KomiSpinBox( Frame14, "komiSpin" );
    komiSpin->setMinimumSize( QSize( 20, 20 ) );
    komiSpin->setMaximumSize( QSize( 60, 32767 ) );
    komiSpin->setFocusPolicy( KomiSpinBox::StrongFocus );
    komiSpin->setAcceptDrops( TRUE );
    Layout15->addWidget( komiSpin );

    Frame14Layout->addLayout( Layout15, 1, 0 );

    NewGameDialogLayout->addWidget( Frame14, 1, 0 );

    Frame14_2 = new QFrame( this, "Frame14_2" );
    Frame14_2->setFrameShape( QFrame::StyledPanel );
    Frame14_2->setFrameShadow( QFrame::Raised );
    Frame14_2Layout = new QGridLayout( Frame14_2, 1, 1, 11, 6, "Frame14_2Layout"); 

    Layout11 = new QHBoxLayout( 0, 0, 6, "Layout11"); 

    TextLabel8 = new QLabel( Frame14_2, "TextLabel8" );
    Layout11->addWidget( TextLabel8 );

    ComboBox_free = new QComboBox( FALSE, Frame14_2, "ComboBox_free" );
    ComboBox_free->setMaximumSize( QSize( 60, 32767 ) );
    Layout11->addWidget( ComboBox_free );

    Frame14_2Layout->addLayout( Layout11, 2, 0 );

    Layout12 = new QHBoxLayout( 0, 0, 6, "Layout12"); 

    BY_label = new QLabel( Frame14_2, "BY_label" );
    Layout12->addWidget( BY_label );

    byoTimeSpin = new QSpinBox( Frame14_2, "byoTimeSpin" );
    byoTimeSpin->setMaximumSize( QSize( 60, 32767 ) );
    byoTimeSpin->setValue( 10 );
    Layout12->addWidget( byoTimeSpin );

    Frame14_2Layout->addLayout( Layout12, 1, 0 );

    Layout13 = new QHBoxLayout( 0, 0, 6, "Layout13"); 

    TextLabel6 = new QLabel( Frame14_2, "TextLabel6" );
    Layout13->addWidget( TextLabel6 );

    timeSpin = new QSpinBox( Frame14_2, "timeSpin" );
    timeSpin->setMaximumSize( QSize( 60, 32767 ) );
    timeSpin->setValue( 10 );
    Layout13->addWidget( timeSpin );

    Frame14_2Layout->addLayout( Layout13, 0, 0 );

    NewGameDialogLayout->addWidget( Frame14_2, 2, 0 );

    Layout7 = new QHBoxLayout( 0, 0, 6, "Layout7"); 
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout7->addItem( Horizontal_Spacing2 );

    buttonDecline = new QPushButton( this, "buttonDecline" );
    Layout7->addWidget( buttonDecline );

    buttonOffer = new QPushButton( this, "buttonOffer" );
    buttonOffer->setToggleButton( TRUE );
    buttonOffer->setAutoDefault( TRUE );
    buttonOffer->setDefault( FALSE );
    Layout7->addWidget( buttonOffer );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    Layout7->addWidget( buttonCancel );

    NewGameDialogLayout->addLayout( Layout7, 3, 0 );

    Frame13 = new QFrame( this, "Frame13" );
    Frame13->setFrameShape( QFrame::StyledPanel );
    Frame13->setFrameShadow( QFrame::Raised );
    Frame13Layout = new QGridLayout( Frame13, 1, 1, 11, 6, "Frame13Layout"); 

    playerOpponentRkEdit = new QLineEdit( Frame13, "playerOpponentRkEdit" );
    playerOpponentRkEdit->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, playerOpponentRkEdit->sizePolicy().hasHeightForWidth() ) );
    playerOpponentRkEdit->setMaximumSize( QSize( 40, 32767 ) );

    Frame13Layout->addWidget( playerOpponentRkEdit, 0, 3 );

    playerOpponentEdit = new QLineEdit( Frame13, "playerOpponentEdit" );

    Frame13Layout->addMultiCellWidget( playerOpponentEdit, 0, 0, 1, 2 );

    TextLabel2 = new QLabel( Frame13, "TextLabel2" );
    TextLabel2->setMaximumSize( QSize( 90, 32767 ) );

    Frame13Layout->addWidget( TextLabel2, 0, 0 );

    pb_stats = new QPushButton( Frame13, "pb_stats" );

    Frame13Layout->addWidget( pb_stats, 1, 0 );

    buttonGroup1 = new QButtonGroup( Frame13, "buttonGroup1" );
    buttonGroup1->setFrameShadow( QButtonGroup::Plain );
    buttonGroup1->setLineWidth( 0 );
    buttonGroup1->setFlat( TRUE );
    buttonGroup1->setCheckable( FALSE );
    buttonGroup1->setExclusive( TRUE );
    buttonGroup1->setColumnLayout(0, Qt::Vertical );
    buttonGroup1->layout()->setSpacing( 6 );
    buttonGroup1->layout()->setMargin( 11 );
    buttonGroup1Layout = new QGridLayout( buttonGroup1->layout() );
    buttonGroup1Layout->setAlignment( Qt::AlignTop );

    play_white_button = new QRadioButton( buttonGroup1, "play_white_button" );

    buttonGroup1Layout->addWidget( play_white_button, 0, 1 );

    play_nigiri_button = new QRadioButton( buttonGroup1, "play_nigiri_button" );

    buttonGroup1Layout->addWidget( play_nigiri_button, 0, 2 );

    play_black_button = new QRadioButton( buttonGroup1, "play_black_button" );
    play_black_button->setChecked( TRUE );

    buttonGroup1Layout->addWidget( play_black_button, 0, 0 );

    Frame13Layout->addMultiCellWidget( buttonGroup1, 2, 2, 0, 3 );

    pb_suggest = new QPushButton( Frame13, "pb_suggest" );

    Frame13Layout->addMultiCellWidget( pb_suggest, 1, 1, 2, 3 );
    spacer3 = new QSpacerItem( 71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Frame13Layout->addItem( spacer3, 1, 1 );

    NewGameDialogLayout->addWidget( Frame13, 0, 0 );
    languageChange();
    resize( QSize(274, 380).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( slot_cancel() ) );
    connect( pb_suggest, SIGNAL( clicked() ), this, SLOT( slot_pbsuggest() ) );
    connect( buttonDecline, SIGNAL( clicked() ), this, SLOT( slot_decline() ) );
    connect( byoTimeSpin, SIGNAL( valueChanged(int) ), this, SLOT( slot_changed() ) );
    connect( timeSpin, SIGNAL( valueChanged(int) ), this, SLOT( slot_changed() ) );
    connect( handicapSpin, SIGNAL( valueChanged(int) ), this, SLOT( slot_changed() ) );
    connect( boardSizeSpin, SIGNAL( valueChanged(int) ), this, SLOT( slot_changed() ) );
    connect( buttonOffer, SIGNAL( toggled(bool) ), this, SLOT( slot_offer(bool) ) );
    connect( pb_stats, SIGNAL( clicked() ), this, SLOT( slot_stats_opponent() ) );

    // tab order
    setTabOrder( playerOpponentEdit, boardSizeSpin );
    setTabOrder( boardSizeSpin, komiSpin );
    setTabOrder( komiSpin, handicapSpin );
    setTabOrder( handicapSpin, buttonOffer );
    setTabOrder( buttonOffer, buttonCancel );
}

/*
 *  Destroys the object and frees any allocated resources
 */
NewGameDialog::~NewGameDialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void NewGameDialog::languageChange()
{
    setCaption( tr( "New Game" ) );
    TextLabel3->setText( tr( "Board size:" ) );
    TextLabel5->setText( tr( "Handicap:" ) );
    TextLabel4->setText( tr( "Komi:" ) );
    TextLabel8->setText( tr( "Free game" ) );
    ComboBox_free->clear();
    ComboBox_free->insertItem( tr( "no" ) );
    ComboBox_free->insertItem( tr( "yes" ) );
    BY_label->setText( tr( "Byoyomi Time:" ) );
    QToolTip::add( byoTimeSpin, tr( "Additional time for 25 moves; after 25 moves the byoyomi time starts again and again" ) );
    TextLabel6->setText( tr( "Time:" ) );
    QToolTip::add( timeSpin, tr( "Playing time" ) );
    buttonDecline->setText( tr( "&Decline" ) );
    buttonOffer->setText( tr( "&Offer" ) );
    buttonOffer->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    playerOpponentEdit->setText( tr( "Opponent" ) );
    TextLabel2->setText( tr( "Game against :" ) );
    pb_stats->setText( tr( "S&tats" ) );
    pb_stats->setAccel( QKeySequence( tr( "Alt+T" ) ) );
    QToolTip::add( pb_stats, tr( "query the other players stats" ) );
    buttonGroup1->setTitle( tr( "You play" ) );
    play_white_button->setText( tr( "White" ) );
    play_nigiri_button->setText( tr( "Nigiri" ) );
    play_black_button->setText( tr( "Black" ) );
    pb_suggest->setText( tr( "&suggest" ) );
    pb_suggest->setAccel( QKeySequence( tr( "Alt+S" ) ) );
    QToolTip::add( pb_suggest, tr( "suggest proper handicap according to players ranks" ) );
}

void NewGameDialog::slot_changed()
{
    qWarning( "NewGameDialog::slot_changed(): Not implemented yet" );
}

void NewGameDialog::slot_decline()
{
    qWarning( "NewGameDialog::slot_decline(): Not implemented yet" );
}

void NewGameDialog::slot_offer(bool)
{
    qWarning( "NewGameDialog::slot_offer(bool): Not implemented yet" );
}

void NewGameDialog::slot_pbsuggest()
{
    qWarning( "NewGameDialog::slot_pbsuggest(): Not implemented yet" );
}

void NewGameDialog::slot_swapcolors()
{
    qWarning( "NewGameDialog::slot_swapcolors(): Not implemented yet" );
}

void NewGameDialog::slot_stats_opponent()
{
    qWarning( "NewGameDialog::slot_stats_opponent(): Not implemented yet" );
}

void NewGameDialog::slot_cancel()
{
    qWarning( "NewGameDialog::slot_cancel(): Not implemented yet" );
}

#include "newgame_gui.moc"
