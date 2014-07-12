/****************************************************************************
** Form implementation generated from reading ui file './normaltools_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "normaltools_gui.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a NormalTools as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
NormalTools::NormalTools( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "NormalTools" );
    setMinimumSize( QSize( 138, 260 ) );
    NormalToolsLayout = new QVBoxLayout( this, 0, 6, "NormalToolsLayout"); 

    whiteFrame = new QGroupBox( this, "whiteFrame" );
    whiteFrame->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)5, 0, 0, whiteFrame->sizePolicy().hasHeightForWidth() ) );
    whiteFrame->setColumnLayout(0, Qt::Vertical );
    whiteFrame->layout()->setSpacing( 6 );
    whiteFrame->layout()->setMargin( 11 );
    whiteFrameLayout = new QGridLayout( whiteFrame->layout() );
    whiteFrameLayout->setAlignment( Qt::AlignTop );

    TextLabel2 = new QLabel( whiteFrame, "TextLabel2" );

    whiteFrameLayout->addWidget( TextLabel2, 1, 0 );

    capturesWhite = new QLabel( whiteFrame, "capturesWhite" );
    capturesWhite->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    whiteFrameLayout->addWidget( capturesWhite, 1, 1 );

    pb_timeWhite = new QPushButton( whiteFrame, "pb_timeWhite" );
    QFont pb_timeWhite_font(  pb_timeWhite->font() );
    pb_timeWhite_font.setPointSize( 13 );
    pb_timeWhite->setFont( pb_timeWhite_font ); 
    pb_timeWhite->setFlat( TRUE );

    whiteFrameLayout->addMultiCellWidget( pb_timeWhite, 0, 0, 0, 1 );
    NormalToolsLayout->addWidget( whiteFrame );

    blackFrame = new QGroupBox( this, "blackFrame" );
    blackFrame->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)5, 0, 0, blackFrame->sizePolicy().hasHeightForWidth() ) );
    blackFrame->setColumnLayout(0, Qt::Vertical );
    blackFrame->layout()->setSpacing( 6 );
    blackFrame->layout()->setMargin( 8 );
    blackFrameLayout = new QGridLayout( blackFrame->layout() );
    blackFrameLayout->setAlignment( Qt::AlignTop );

    TextLabel1 = new QLabel( blackFrame, "TextLabel1" );

    blackFrameLayout->addWidget( TextLabel1, 1, 0 );

    capturesBlack = new QLabel( blackFrame, "capturesBlack" );
    capturesBlack->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    blackFrameLayout->addWidget( capturesBlack, 1, 1 );

    pb_timeBlack = new QPushButton( blackFrame, "pb_timeBlack" );
    QFont pb_timeBlack_font(  pb_timeBlack->font() );
    pb_timeBlack_font.setPointSize( 13 );
    pb_timeBlack->setFont( pb_timeBlack_font ); 
    pb_timeBlack->setFlat( TRUE );

    blackFrameLayout->addMultiCellWidget( pb_timeBlack, 0, 0, 0, 1 );
    NormalToolsLayout->addWidget( blackFrame );

    layout17 = new QGridLayout( 0, 1, 1, 0, 6, "layout17"); 

    layout11 = new QHBoxLayout( 0, 0, 6, "layout11"); 

    TextLabel_Handicap = new QLabel( this, "TextLabel_Handicap" );
    TextLabel_Handicap->setMaximumSize( QSize( 15, 32767 ) );
    layout11->addWidget( TextLabel_Handicap );

    handicap = new QLabel( this, "handicap" );
    layout11->addWidget( handicap );

    layout17->addLayout( layout11, 0, 2 );

    TextLabel_free = new QLabel( this, "TextLabel_free" );
    TextLabel_free->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignLeft ) );

    layout17->addWidget( TextLabel_free, 2, 1 );

    layout10 = new QHBoxLayout( 0, 0, 6, "layout10"); 

    TextLabel_komi = new QLabel( this, "TextLabel_komi" );
    layout10->addWidget( TextLabel_komi );

    komi = new QLabel( this, "komi" );
    layout10->addWidget( komi );

    layout17->addLayout( layout10, 0, 1 );
    spacer7 = new QSpacerItem( 43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout17->addItem( spacer7, 1, 3 );

    layout12 = new QHBoxLayout( 0, 0, 6, "layout12"); 

    TextLabel_Byo = new QLabel( this, "TextLabel_Byo" );
    layout12->addWidget( TextLabel_Byo );

    byoyomi = new QLabel( this, "byoyomi" );
    layout12->addWidget( byoyomi );

    layout17->addLayout( layout12, 1, 1 );
    spacer6 = new QSpacerItem( 44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout17->addItem( spacer6, 1, 0 );
    NormalToolsLayout->addLayout( layout17 );
    spacer8 = new QSpacerItem( 20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding );
    NormalToolsLayout->addItem( spacer8 );
    languageChange();
    resize( QSize(164, 304).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );
}

/*
 *  Destroys the object and frees any allocated resources
 */
NormalTools::~NormalTools()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void NormalTools::languageChange()
{
    setCaption( tr( "NormalTools" ) );
    whiteFrame->setTitle( tr( "White" ) );
    TextLabel2->setText( tr( "Captures:" ) );
    capturesWhite->setText( tr( "0" ) );
    pb_timeWhite->setText( tr( "00:00" ) );
    QToolTip::add( pb_timeWhite, tr( "remaining time / stones" ) );
    QWhatsThis::add( pb_timeWhite, tr( "Clock\n"
"\n"
"shows remaining time or byoyomi time / remaining stones.\n"
"\n"
"Click on\n"
"- your own clock for pause request (NNGS) or\n"
"- the opponent's clock to give him additional time of one minute." ) );
    blackFrame->setTitle( tr( "Black" ) );
    TextLabel1->setText( tr( "Captures:" ) );
    capturesBlack->setText( tr( "0" ) );
    pb_timeBlack->setText( tr( "00:00" ) );
    QToolTip::add( pb_timeBlack, tr( "remaining time / stones" ) );
    QWhatsThis::add( pb_timeBlack, tr( "Clock\n"
"\n"
"shows remaining time or byoyomi time / remaining stones.\n"
"\n"
"Click on\n"
"- your own clock for pause request (NNGS) or\n"
"- the opponent's clock to give him additional time of one minute." ) );
    TextLabel_Handicap->setText( tr( "H:" ) );
    QToolTip::add( TextLabel_Handicap, tr( "Handicap" ) );
    QWhatsThis::add( TextLabel_Handicap, tr( "Handicap\n"
"\n"
"Number of stones placed by black as his first move." ) );
    handicap->setText( tr( "0" ) );
    TextLabel_free->setText( tr( "free" ) );
    QToolTip::add( TextLabel_free, tr( "free/rated game" ) );
    QWhatsThis::add( TextLabel_free, tr( "free game:\n"
"\n"
"use \"free\" command to make game rated or unrated (free)" ) );
    TextLabel_komi->setText( tr( "Komi:" ) );
    QToolTip::add( TextLabel_komi, tr( "komi points" ) );
    QWhatsThis::add( TextLabel_komi, tr( "komi:\n"
"\n"
"Add komi points to white because black has the advantage to set the first stone.\n"
"Use \"komi x\" to request a komi of x (number)." ) );
    komi->setText( tr( "5.5" ) );
    TextLabel_Byo->setText( tr( "Byo:" ) );
    QToolTip::add( TextLabel_Byo, tr( "byoyomi time (minutes)" ) );
    QWhatsThis::add( TextLabel_Byo, tr( "Byoyomi time\n"
"\n"
"Additional time to place a number of stones.\n"
"If time reaches zero before all stones are placed, the game ends immediately: \"... forfeits on time.\"\n"
"\n"
"Time Systems (offline):\n"
"\n"
"Absolute: Byo = 0, no additional time after main time is zero.\n"
"\n"
"Canadian: e.g. Byo = 6/25, 25 stones to place in 6 minutes; if all stones are placed. The byoyomi period is reset to this value and the same number of stones have to be placed until the game ends.\n"
"\n"
"byo-yomi: e.g. Byo: 7x30s, 7 periods at 30 seconds; if a stone is placed within 30 seconds, time is reset to 30 seconds, if not placed within 30 seconds, period will be decreased by one, a new period of 30 seconds starts; if period is zero and last time interval is over then game ends." ) );
    byoyomi->setText( tr( "0" ) );
}

#include "normaltools_gui.moc"
