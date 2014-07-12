/****************************************************************************
** Form implementation generated from reading ui file './scoretools_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "scoretools_gui.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qframe.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a ScoreTools as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
ScoreTools::ScoreTools( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "ScoreTools" );
    setProperty( "sizePolicy", QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, sizePolicy().hasHeightForWidth() ) );
    ScoreToolsLayout = new QGridLayout( this, 1, 1, 0, 6, "ScoreToolsLayout"); 

    Frame1 = new QFrame( this, "Frame1" );
    Frame1->setProperty( "sizePolicy", QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, Frame1->sizePolicy().hasHeightForWidth() ) );
    Frame1->setProperty( "frameShape", "StyledPanel" );
    Frame1->setProperty( "frameShadow", "Raised" );
    Frame1Layout = new QGridLayout( Frame1, 1, 1, 6, 6, "Frame1Layout"); 

    whiteFrame = new QGroupBox( Frame1, "whiteFrame" );
    whiteFrame->setProperty( "alignment", int( QGroupBox::AlignTop | QGroupBox::AlignLeft ) );
    whiteFrame->setColumnLayout(0, Qt::Vertical );
    whiteFrame->layout()->setSpacing( 6 );
    whiteFrame->layout()->setMargin( 11 );
    whiteFrameLayout = new QGridLayout( whiteFrame->layout() );
    whiteFrameLayout->setAlignment( Qt::AlignTop );

    Layout7 = new QHBoxLayout( 0, 0, 6, "Layout7"); 

    TextLabel3 = new QLabel( whiteFrame, "TextLabel3" );
    Layout7->addWidget( TextLabel3 );

    totalWhite = new QLabel( whiteFrame, "totalWhite" );
    totalWhite->setProperty( "alignment", int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout7->addWidget( totalWhite );

    whiteFrameLayout->addLayout( Layout7, 3, 0 );

    Layout3 = new QHBoxLayout( 0, 0, 6, "Layout3"); 

    TextLabel2 = new QLabel( whiteFrame, "TextLabel2" );
    Layout3->addWidget( TextLabel2 );

    capturesWhite = new QLabel( whiteFrame, "capturesWhite" );
    capturesWhite->setProperty( "alignment", int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout3->addWidget( capturesWhite );

    whiteFrameLayout->addLayout( Layout3, 2, 0 );

    Layout2 = new QHBoxLayout( 0, 0, 6, "Layout2"); 

    TextLabel1 = new QLabel( whiteFrame, "TextLabel1" );
    Layout2->addWidget( TextLabel1 );

    terrWhite = new QLabel( whiteFrame, "terrWhite" );
    terrWhite->setProperty( "alignment", int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout2->addWidget( terrWhite );

    whiteFrameLayout->addLayout( Layout2, 1, 0 );

    Layout2_2 = new QHBoxLayout( 0, 0, 6, "Layout2_2"); 

    TextLabel0 = new QLabel( whiteFrame, "TextLabel0" );
    Layout2_2->addWidget( TextLabel0 );

    komi = new QLabel( whiteFrame, "komi" );
    komi->setProperty( "alignment", int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout2_2->addWidget( komi );

    whiteFrameLayout->addLayout( Layout2_2, 0, 0 );

    Frame1Layout->addWidget( whiteFrame, 0, 0 );

    blackFrame = new QGroupBox( Frame1, "blackFrame" );
    blackFrame->setColumnLayout(0, Qt::Vertical );
    blackFrame->layout()->setSpacing( 6 );
    blackFrame->layout()->setMargin( 11 );
    blackFrameLayout = new QGridLayout( blackFrame->layout() );
    blackFrameLayout->setAlignment( Qt::AlignTop );

    Layout6 = new QHBoxLayout( 0, 0, 6, "Layout6"); 

    TextLabel4 = new QLabel( blackFrame, "TextLabel4" );
    Layout6->addWidget( TextLabel4 );

    terrBlack = new QLabel( blackFrame, "terrBlack" );
    terrBlack->setProperty( "alignment", int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout6->addWidget( terrBlack );

    blackFrameLayout->addLayout( Layout6, 0, 0 );

    Layout15 = new QHBoxLayout( 0, 0, 6, "Layout15"); 

    TextLabel5 = new QLabel( blackFrame, "TextLabel5" );
    TextLabel5->setProperty( "alignment", int( QLabel::AlignVCenter | QLabel::AlignLeft ) );
    Layout15->addWidget( TextLabel5 );

    capturesBlack = new QLabel( blackFrame, "capturesBlack" );
    capturesBlack->setProperty( "alignment", int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout15->addWidget( capturesBlack );

    blackFrameLayout->addLayout( Layout15, 1, 0 );

    Layout14 = new QHBoxLayout( 0, 0, 6, "Layout14"); 

    TextLabel6 = new QLabel( blackFrame, "TextLabel6" );
    Layout14->addWidget( TextLabel6 );

    totalBlack = new QLabel( blackFrame, "totalBlack" );
    totalBlack->setProperty( "alignment", int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout14->addWidget( totalBlack );

    blackFrameLayout->addLayout( Layout14, 2, 0 );

    Frame1Layout->addWidget( blackFrame, 1, 0 );

    ScoreToolsLayout->addWidget( Frame1, 0, 0 );
    languageChange();
    resize( QSize(126, 233).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );
}

/*
 *  Destroys the object and frees any allocated resources
 */
ScoreTools::~ScoreTools()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ScoreTools::languageChange()
{
    setProperty( "caption", tr( "ScoreTools" ) );
    whiteFrame->setProperty( "title", tr( "White" ) );
    TextLabel3->setProperty( "text", tr( "Total:" ) );
    totalWhite->setProperty( "text", tr( "0" ) );
    TextLabel2->setProperty( "text", tr( "Cap:" ) );
    capturesWhite->setProperty( "text", tr( "0" ) );
    TextLabel1->setProperty( "text", tr( "Terr.:" ) );
    terrWhite->setProperty( "text", tr( "0" ) );
    TextLabel0->setProperty( "text", tr( "Komi:" ) );
    komi->setProperty( "text", tr( "0" ) );
    blackFrame->setProperty( "title", tr( "Black" ) );
    TextLabel4->setProperty( "text", tr( "Terr.:" ) );
    terrBlack->setProperty( "text", tr( "0" ) );
    TextLabel5->setProperty( "text", tr( "Cap:" ) );
    capturesBlack->setProperty( "text", tr( "0" ) );
    TextLabel6->setProperty( "text", tr( "Total:" ) );
    totalBlack->setProperty( "text", tr( "0" ) );
}

#include "scoretools_gui.moc"
