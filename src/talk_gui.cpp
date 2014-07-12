/****************************************************************************
** Form implementation generated from reading ui file './talk_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "talk_gui.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlineedit.h>
#include <qtextedit.h>
#include <qframe.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

static const unsigned char image0_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 0x61, 0x00, 0x00, 0x01,
    0x68, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xa5, 0x93, 0x4b, 0xae, 0xe2,
    0x30, 0x10, 0x45, 0x8f, 0x3f, 0x89, 0x48, 0x40, 0x08, 0x10, 0x16, 0x7b,
    0x61, 0x0f, 0xcc, 0x11, 0x12, 0xdb, 0xcd, 0x5a, 0xf8, 0x04, 0x89, 0x49,
    0x9c, 0x60, 0xc7, 0xf6, 0x9b, 0x74, 0x22, 0x1e, 0x34, 0xdd, 0x7a, 0xdd,
    0x77, 0x64, 0x59, 0x55, 0xf7, 0x53, 0x76, 0x89, 0xaa, 0xaa, 0x78, 0xc6,
    0x7e, 0xbf, 0x4f, 0x7d, 0xdf, 0xe3, 0xbd, 0xe7, 0xf1, 0x78, 0xe0, 0x9c,
    0xc3, 0x7b, 0x4f, 0x08, 0x01, 0x80, 0xaa, 0xaa, 0xc4, 0x73, 0xbd, 0x1e,
    0x0e, 0xc7, 0xe3, 0x31, 0x49, 0x29, 0x99, 0x4c, 0x26, 0x00, 0x78, 0xef,
    0x51, 0x4a, 0x01, 0x10, 0x63, 0x24, 0xc6, 0x48, 0x4a, 0x89, 0xed, 0x76,
    0x9b, 0x9e, 0x89, 0x24, 0xc0, 0xe1, 0x70, 0x48, 0x52, 0x4a, 0x8a, 0xa2,
    0x60, 0xb5, 0x5a, 0x61, 0x8c, 0xc1, 0x18, 0xc3, 0x62, 0xb1, 0xa0, 0x2c,
    0x4b, 0xb4, 0xd6, 0x08, 0xf1, 0x4d, 0x78, 0x24, 0xd2, 0x83, 0x42, 0x96,
    0x65, 0xcc, 0xe7, 0x73, 0x96, 0xcb, 0x25, 0x65, 0x59, 0x12, 0x42, 0xa0,
    0xae, 0x6b, 0x62, 0x8c, 0x74, 0x5d, 0x87, 0x73, 0x8e, 0x18, 0x23, 0xaf,
    0xd0, 0xbb, 0xdd, 0x2e, 0x15, 0x45, 0x81, 0x52, 0x8a, 0xa2, 0x28, 0x58,
    0xaf, 0xd7, 0x18, 0x63, 0x90, 0x52, 0x32, 0x9d, 0x4e, 0x69, 0xdb, 0x96,
    0xfb, 0xfd, 0xfe, 0xe6, 0x60, 0x70, 0xa1, 0xfb, 0xbe, 0x27, 0x84, 0x40,
    0x8c, 0x91, 0x21, 0xc6, 0x66, 0xb3, 0x61, 0x36, 0x9b, 0x91, 0x65, 0x19,
    0xa7, 0xd3, 0x09, 0xad, 0xf5, 0x5b, 0xf3, 0x00, 0xe9, 0xbd, 0xc7, 0x39,
    0x47, 0xdb, 0xb6, 0x34, 0x4d, 0x83, 0xb5, 0x16, 0xef, 0x3d, 0x5a, 0x6b,
    0xf2, 0x3c, 0x1f, 0x87, 0x98, 0x52, 0xfa, 0x2d, 0x81, 0xf6, 0xde, 0x23,
    0x84, 0x40, 0x29, 0x45, 0x5d, 0xd7, 0xe4, 0x79, 0x8e, 0x10, 0x82, 0xeb,
    0xf5, 0x4a, 0x5d, 0xd7, 0x5c, 0x2e, 0x17, 0xac, 0xb5, 0xe3, 0x33, 0xbe,
    0x11, 0x84, 0x10, 0x70, 0xce, 0x91, 0x52, 0x22, 0x84, 0x40, 0xd7, 0x75,
    0xdc, 0x6e, 0x37, 0xf2, 0x3c, 0xa7, 0x69, 0x1a, 0xce, 0xe7, 0x33, 0xd6,
    0xda, 0x8f, 0x0e, 0x04, 0x90, 0x84, 0x10, 0x48, 0x29, 0x51, 0x4a, 0xa1,
    0xb5, 0x1e, 0x33, 0x0f, 0xf1, 0x3e, 0xa9, 0x8f, 0x04, 0xdf, 0x2e, 0x9e,
    0xa6, 0xfd, 0x49, 0xf5, 0x8f, 0x04, 0x3f, 0x85, 0x7c, 0xfd, 0xdb, 0x3f,
    0x41, 0x55, 0x55, 0x42, 0xfe, 0x8f, 0x3a, 0xfc, 0xda, 0x85, 0x7f, 0x71,
    0x31, 0xf4, 0x88, 0xd7, 0x75, 0x1e, 0x96, 0xe4, 0x6f, 0x8d, 0x03, 0xbe,
    0x00, 0x76, 0x31, 0xc2, 0x27, 0xf0, 0xd0, 0xfa, 0xfa, 0x00, 0x00, 0x00,
    0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

static const unsigned char image1_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x10,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xf0, 0x31, 0x94, 0x5f, 0x00, 0x00, 0x00,
    0xc4, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xc5, 0x93, 0xbb, 0x11, 0xc4,
    0x20, 0x0c, 0x44, 0x97, 0xab, 0x48, 0xb1, 0x72, 0x0a, 0xa0, 0x0d, 0x72,
    0x57, 0xe1, 0xdc, 0x6d, 0xa8, 0x00, 0x72, 0xc5, 0x74, 0xc4, 0x45, 0xcb,
    0x18, 0x83, 0x6f, 0xee, 0x13, 0xdc, 0x86, 0xda, 0x9d, 0x27, 0x21, 0x20,
    0xb8, 0x3b, 0x7e, 0xd5, 0xe3, 0x67, 0xc2, 0x3b, 0x10, 0x55, 0x6d, 0xaa,
    0xda, 0xfe, 0x33, 0xc9, 0xab, 0xce, 0x2b, 0x6f, 0x82, 0xe4, 0x9c, 0xdb,
    0x5d, 0x98, 0x35, 0x66, 0x96, 0x10, 0x33, 0x6b, 0xb5, 0x56, 0x00, 0x80,
    0xbb, 0x87, 0x2b, 0x84, 0xb5, 0x5a, 0x2b, 0xcc, 0xac, 0x83, 0x06, 0x48,
    0x29, 0x05, 0x00, 0xb0, 0x6d, 0xdb, 0xdd, 0x69, 0xba, 0xc7, 0xec, 0x04,
    0xe1, 0x14, 0x29, 0xa5, 0x69, 0x0a, 0x8a, 0x1e, 0xb3, 0x13, 0xe4, 0x5b,
    0x0d, 0x10, 0x11, 0x01, 0x80, 0xe1, 0xbc, 0x57, 0xd1, 0x63, 0x76, 0x82,
    0xc4, 0x18, 0x01, 0x00, 0xfb, 0xbe, 0xf7, 0x9a, 0xbb, 0x87, 0xf3, 0x92,
    0xe9, 0x31, 0x3b, 0x41, 0x52, 0x4a, 0x81, 0x1d, 0x54, 0xb5, 0x9d, 0x27,
    0x32, 0xb3, 0xfe, 0x72, 0x45, 0x64, 0xd8, 0x5b, 0x58, 0x7d, 0xc0, 0x9c,
    0x73, 0x3b, 0x2f, 0xee, 0x2c, 0x11, 0xc1, 0x71, 0x1c, 0xc3, 0xe2, 0x97,
    0x10, 0x76, 0x2e, 0xa5, 0xf4, 0x5b, 0x10, 0x11, 0xc4, 0x18, 0x97, 0x37,
    0x77, 0x0b, 0xf9, 0x44, 0x4f, 0x08, 0x15, 0x63, 0xab, 0xa4, 0xfa, 0x97,
    0x13, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60,
    0x82
};


/*
 *  Constructs a TalkGui as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
TalkGui::TalkGui( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    QImage img;
    img.loadFromData( image0_data, sizeof( image0_data ), "PNG" );
    image0 = img;
    img.loadFromData( image1_data, sizeof( image1_data ), "PNG" );
    image1 = img;
    if ( !name )
	setName( "TalkGui" );
    TalkGuiLayout = new QGridLayout( this, 1, 1, 1, 6, "TalkGuiLayout"); 

    layout7 = new QHBoxLayout( 0, 0, 6, "layout7"); 

    LineEdit1 = new QLineEdit( this, "LineEdit1" );
    LineEdit1->setFrameShape( QLineEdit::LineEditPanel );
    LineEdit1->setFrameShadow( QLineEdit::Sunken );
    layout7->addWidget( LineEdit1 );

    pb_match = new QPushButton( this, "pb_match" );
    pb_match->setMaximumSize( QSize( 28, 28 ) );
    pb_match->setIconSet( QIconSet( image0 ) );
    layout7->addWidget( pb_match );

    pb_releaseTalkTab = new QPushButton( this, "pb_releaseTalkTab" );
    pb_releaseTalkTab->setMaximumSize( QSize( 28, 28 ) );
    pb_releaseTalkTab->setIconSet( QIconSet( image1 ) );
    layout7->addWidget( pb_releaseTalkTab );

    TalkGuiLayout->addLayout( layout7, 2, 0 );

    MultiLineEdit1 = new QTextEdit( this, "MultiLineEdit1" );
    MultiLineEdit1->setReadOnly( TRUE );

    TalkGuiLayout->addWidget( MultiLineEdit1, 1, 0 );

    stats_layout = new QFrame( this, "stats_layout" );
    stats_layout->setFrameShape( QFrame::StyledPanel );
    stats_layout->setFrameShadow( QFrame::Raised );
    stats_layout->setLineWidth( 0 );
    stats_layoutLayout = new QGridLayout( stats_layout, 1, 1, 0, 0, "stats_layoutLayout"); 

    layout21 = new QHBoxLayout( 0, 0, 0, "layout21"); 

    layout13 = new QGridLayout( 0, 1, 1, 0, 0, "layout13"); 

    stats_rating = new QLabel( stats_layout, "stats_rating" );
    stats_rating->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)5, 0, 0, stats_rating->sizePolicy().hasHeightForWidth() ) );
    QFont stats_rating_font(  stats_rating->font() );
    stats_rating_font.setBold( TRUE );
    stats_rating->setFont( stats_rating_font ); 
    stats_rating->setAlignment( int( QLabel::AlignCenter ) );

    layout13->addWidget( stats_rating, 0, 2 );

    stats_idle = new QLabel( stats_layout, "stats_idle" );
    stats_idle->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)5, 0, 0, stats_idle->sizePolicy().hasHeightForWidth() ) );
    QFont stats_idle_font(  stats_idle->font() );
    stats_idle_font.setBold( TRUE );
    stats_idle->setFont( stats_idle_font ); 
    stats_idle->setAlignment( int( QLabel::AlignCenter ) );

    layout13->addMultiCellWidget( stats_idle, 2, 2, 1, 2 );

    Label_Idle = new QLabel( stats_layout, "Label_Idle" );
    Label_Idle->setMinimumSize( QSize( 80, 0 ) );

    layout13->addWidget( Label_Idle, 2, 0 );

    textLabel1 = new QLabel( stats_layout, "textLabel1" );
    textLabel1->setMinimumSize( QSize( 80, 0 ) );
    textLabel1->setMaximumSize( QSize( 80, 32767 ) );

    layout13->addMultiCellWidget( textLabel1, 0, 0, 0, 1 );

    layout12 = new QHBoxLayout( 0, 0, 0, "layout12"); 

    textLabel1_2 = new QLabel( stats_layout, "textLabel1_2" );
    textLabel1_2->setMinimumSize( QSize( 80, 0 ) );
    layout12->addWidget( textLabel1_2 );

    stats_rated = new QLabel( stats_layout, "stats_rated" );
    stats_rated->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)5, 0, 0, stats_rated->sizePolicy().hasHeightForWidth() ) );
    QFont stats_rated_font(  stats_rated->font() );
    stats_rated_font.setBold( TRUE );
    stats_rated->setFont( stats_rated_font ); 
    stats_rated->setAlignment( int( QLabel::AlignCenter ) );
    layout12->addWidget( stats_rated );

    layout13->addMultiCellLayout( layout12, 1, 1, 0, 2 );
    layout21->addLayout( layout13 );

    layout20 = new QVBoxLayout( 0, 0, 0, "layout20"); 

    layout17 = new QHBoxLayout( 0, 0, 0, "layout17"); 

    textLabel1_2_2_2 = new QLabel( stats_layout, "textLabel1_2_2_2" );
    layout17->addWidget( textLabel1_2_2_2 );

    stats_country = new QLabel( stats_layout, "stats_country" );
    stats_country->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)5, 0, 0, stats_country->sizePolicy().hasHeightForWidth() ) );
    QFont stats_country_font(  stats_country->font() );
    stats_country_font.setBold( TRUE );
    stats_country->setFont( stats_country_font ); 
    stats_country->setAlignment( int( QLabel::AlignCenter ) );
    layout17->addWidget( stats_country );
    layout20->addLayout( layout17 );

    layout18 = new QHBoxLayout( 0, 0, 0, "layout18"); 

    layout9 = new QHBoxLayout( 0, 0, 6, "layout9"); 

    textLabel1_3 = new QLabel( stats_layout, "textLabel1_3" );
    layout9->addWidget( textLabel1_3 );

    stats_wins = new QLabel( stats_layout, "stats_wins" );
    QFont stats_wins_font(  stats_wins->font() );
    stats_wins_font.setBold( TRUE );
    stats_wins->setFont( stats_wins_font ); 
    stats_wins->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignLeft ) );
    layout9->addWidget( stats_wins );
    layout18->addLayout( layout9 );

    layout8 = new QHBoxLayout( 0, 0, 6, "layout8"); 

    textLabel1_3_2 = new QLabel( stats_layout, "textLabel1_3_2" );
    layout8->addWidget( textLabel1_3_2 );

    stats_loss = new QLabel( stats_layout, "stats_loss" );
    QFont stats_loss_font(  stats_loss->font() );
    stats_loss_font.setBold( TRUE );
    stats_loss->setFont( stats_loss_font ); 
    stats_loss->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignLeft ) );
    layout8->addWidget( stats_loss );
    layout18->addLayout( layout8 );
    layout20->addLayout( layout18 );

    layout6 = new QHBoxLayout( 0, 0, 0, "layout6"); 

    textLabel1_2_2_2_2_2 = new QLabel( stats_layout, "textLabel1_2_2_2_2_2" );
    layout6->addWidget( textLabel1_2_2_2_2_2 );

    stats_playing = new QLabel( stats_layout, "stats_playing" );
    QFont stats_playing_font(  stats_playing->font() );
    stats_playing_font.setBold( TRUE );
    stats_playing->setFont( stats_playing_font ); 
    layout6->addWidget( stats_playing );
    layout20->addLayout( layout6 );
    layout21->addLayout( layout20 );

    stats_layoutLayout->addLayout( layout21, 0, 0 );

    layout46 = new QHBoxLayout( 0, 0, 6, "layout46"); 

    textLabel1_2_2 = new QLabel( stats_layout, "textLabel1_2_2" );
    textLabel1_2_2->setMinimumSize( QSize( 92, 0 ) );
    layout46->addWidget( textLabel1_2_2 );

    stats_address = new QLineEdit( stats_layout, "stats_address" );
    stats_address->setPaletteBackgroundColor( QColor( 220, 220, 220 ) );
    QFont stats_address_font(  stats_address->font() );
    stats_address_font.setBold( TRUE );
    stats_address->setFont( stats_address_font ); 
    stats_address->setFrame( FALSE );
    stats_address->setReadOnly( TRUE );
    layout46->addWidget( stats_address );

    stats_layoutLayout->addLayout( layout46, 1, 0 );

    stats_info = new QLabel( stats_layout, "stats_info" );

    stats_layoutLayout->addWidget( stats_info, 3, 0 );

    stats_default = new QLabel( stats_layout, "stats_default" );

    stats_layoutLayout->addWidget( stats_default, 2, 0 );

    TalkGuiLayout->addWidget( stats_layout, 0, 0 );
    languageChange();
    resize( QSize(259, 218).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( pb_releaseTalkTab, SIGNAL( pressed() ), this, SLOT( slot_pbRelTab() ) );
    connect( pb_match, SIGNAL( pressed() ), this, SLOT( slot_match() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
TalkGui::~TalkGui()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void TalkGui::languageChange()
{
    setCaption( tr( "Form1" ) );
    QToolTip::add( this, QString::null );
    QWhatsThis::add( this, tr( "dialog\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"in this box you see the conversation with the player whose name appears on the tab label" ) );
    pb_match->setText( QString::null );
    QToolTip::add( pb_match, tr( "match" ) );
    QWhatsThis::add( pb_match, tr( "match\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"proposes a match to this player" ) );
    pb_releaseTalkTab->setText( QString::null );
    QToolTip::add( pb_releaseTalkTab, tr( "close" ) );
    QWhatsThis::add( pb_releaseTalkTab, tr( "close\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"closes the tab (and dialog)" ) );
    QToolTip::add( MultiLineEdit1, tr( "dialog with this player" ) );
    QWhatsThis::add( MultiLineEdit1, tr( "dialog\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"in this box you see the conversation with the player whose name appears on the tab label" ) );
    stats_rating->setText( tr( "--" ) );
    stats_idle->setText( tr( "--" ) );
    Label_Idle->setText( tr( "Idle :" ) );
    textLabel1->setText( tr( "Rating :" ) );
    textLabel1_2->setText( tr( "Rated games :" ) );
    stats_rated->setText( tr( "--" ) );
    textLabel1_2_2_2->setText( tr( "Country :" ) );
    stats_country->setText( tr( "--" ) );
    textLabel1_3->setText( tr( "Wins :" ) );
    stats_wins->setText( tr( "--" ) );
    textLabel1_3_2->setText( tr( "Loss :" ) );
    stats_loss->setText( tr( "--" ) );
    textLabel1_2_2_2_2_2->setText( tr( "playing game :" ) );
    stats_playing->setText( tr( "--" ) );
    textLabel1_2_2->setText( tr( "Address :" ) );
    stats_address->setText( tr( "--" ) );
    stats_info->setText( tr( "--" ) );
    stats_default->setText( tr( "--" ) );
}

void TalkGui::slot_pbRelTab()
{
    qWarning( "TalkGui::slot_pbRelTab(): Not implemented yet" );
}

void TalkGui::slot_match()
{
    qWarning( "TalkGui::slot_match(): Not implemented yet" );
}

#include "talk_gui.moc"
