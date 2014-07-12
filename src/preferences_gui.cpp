/****************************************************************************
** Form implementation generated from reading ui file './preferences_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "preferences_gui.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtabwidget.h>
#include <qwidget.h>
#include <qbuttongroup.h>
#include <qlabel.h>
#include <qgroupbox.h>
#include <qlineedit.h>
#include <qheader.h>
#include <qlistview.h>
#include <qcheckbox.h>
#include <qspinbox.h>
#include <qcombobox.h>
#include <qradiobutton.h>
#include <qframe.h>
#include <qlistbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

static const unsigned char image0_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 0x61, 0x00, 0x00, 0x00,
    0x99, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0x95, 0x93, 0xdb, 0x11, 0xc5,
    0x20, 0x08, 0x44, 0x0f, 0x29, 0x8b, 0x06, 0x52, 0x96, 0x93, 0xb2, 0xd2,
    0x00, 0x6d, 0x79, 0x3f, 0x1c, 0x75, 0x7c, 0x80, 0x37, 0xfb, 0x27, 0x03,
    0xec, 0xb2, 0xa0, 0x98, 0x19, 0x27, 0xa8, 0xbe, 0x79, 0x8c, 0x3c, 0x98,
    0x99, 0x00, 0x5c, 0xdf, 0x8b, 0x01, 0x12, 0xaa, 0x9a, 0x01, 0x04, 0xc8,
    0xb5, 0x9b, 0x5f, 0xdc, 0x19, 0xe7, 0xf8, 0x55, 0x02, 0xba, 0x61, 0x59,
    0xe5, 0x56, 0x98, 0xdd, 0xed, 0xdd, 0x46, 0xf0, 0x9b, 0xa4, 0x90, 0x60,
    0xf0, 0x60, 0x4e, 0xec, 0x4c, 0x89, 0x31, 0xaf, 0xfb, 0x22, 0xc0, 0xd2,
    0xdd, 0xf3, 0x64, 0x2c, 0x2e, 0xa3, 0x6d, 0xb7, 0xe0, 0x49, 0xde, 0x99,
    0xea, 0xae, 0x71, 0x6e, 0xe2, 0x6d, 0x24, 0xbc, 0x83, 0x78, 0x3b, 0x05,
    0x9f, 0x3c, 0x50, 0xd5, 0xe5, 0x66, 0x9a, 0x82, 0xc8, 0xb8, 0x28, 0x67,
    0xb9, 0xc4, 0x2a, 0x7b, 0x4e, 0x76, 0x3d, 0xf8, 0x87, 0x39, 0x82, 0xec,
    0x7e, 0xa3, 0xa7, 0x62, 0x87, 0xe3, 0x6f, 0x3c, 0xe1, 0x07, 0x87, 0xfa,
    0x5f, 0x66, 0x94, 0x30, 0x65, 0xa2, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45,
    0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

static const unsigned char image1_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 0x61, 0x00, 0x00, 0x01,
    0xd7, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0x95, 0x92, 0xcf, 0x6b, 0x13,
    0x41, 0x14, 0xc7, 0x3f, 0xb3, 0x59, 0x69, 0x42, 0xf0, 0xe4, 0xa9, 0xa8,
    0x20, 0x78, 0x2f, 0xa8, 0x15, 0x64, 0xff, 0x01, 0x0f, 0x42, 0x51, 0xa8,
    0x7f, 0x80, 0x20, 0x14, 0x85, 0x1e, 0xf4, 0xa4, 0x87, 0xdc, 0x44, 0xbc,
    0x44, 0x50, 0x21, 0xe2, 0xc1, 0x8b, 0xb4, 0x20, 0xed, 0xd1, 0xe4, 0x20,
    0xde, 0x8a, 0x2c, 0x54, 0x3d, 0x46, 0x6c, 0xf6, 0x64, 0x4e, 0x62, 0x83,
    0x18, 0xba, 0xd9, 0xce, 0xee, 0x64, 0x7e, 0x78, 0x68, 0xb2, 0x4d, 0xe2,
    0x46, 0xf0, 0xc1, 0x63, 0x78, 0x33, 0xf3, 0x3e, 0xef, 0xfb, 0xe6, 0x8d,
    0x08, 0xc3, 0x90, 0x22, 0x0b, 0x82, 0xc0, 0x4d, 0xc6, 0x61, 0x18, 0x8a,
    0xa2, 0x7b, 0xde, 0xbf, 0x92, 0x27, 0x93, 0x82, 0x20, 0x70, 0xe3, 0xfd,
    0x49, 0xb8, 0x98, 0x55, 0x10, 0x04, 0x81, 0x2b, 0xaa, 0x36, 0x4f, 0xd1,
    0x5f, 0x0a, 0xe6, 0x49, 0xfd, 0xaf, 0x16, 0x8a, 0x6c, 0x56, 0xc1, 0xd8,
    0x44, 0x18, 0x86, 0x3c, 0x59, 0xbf, 0x39, 0x75, 0xf8, 0xe0, 0xc5, 0x76,
    0x61, 0xb5, 0x42, 0xc0, 0xca, 0xa5, 0xd3, 0xee, 0xe5, 0xfd, 0x6b, 0x2c,
    0x2e, 0x2d, 0xc3, 0x41, 0x8f, 0x1f, 0xdf, 0xbb, 0xdc, 0x79, 0xda, 0x9a,
    0x9b, 0x30, 0x0b, 0xf7, 0x01, 0x16, 0x97, 0x96, 0x71, 0x07, 0xbf, 0x10,
    0xc6, 0x70, 0x6a, 0x41, 0xb3, 0xf5, 0xf0, 0xea, 0x5c, 0x40, 0x79, 0xe6,
    0x91, 0x7d, 0x00, 0x92, 0x3e, 0xc2, 0x0c, 0xb9, 0x7e, 0xef, 0x15, 0x27,
    0xce, 0x5e, 0x04, 0xc0, 0xf3, 0x3c, 0x16, 0xca, 0x65, 0x52, 0x29, 0xf3,
    0x18, 0x60, 0xf5, 0xc6, 0xca, 0xd4, 0x7b, 0x1c, 0x01, 0x54, 0x4a, 0xf8,
    0xf1, 0x0b, 0xfe, 0x99, 0x0b, 0xbc, 0xd9, 0x7c, 0x0b, 0x80, 0x94, 0x92,
    0x34, 0x4d, 0x73, 0x97, 0x52, 0x92, 0x65, 0x19, 0x69, 0x9a, 0x72, 0xeb,
    0xf6, 0x1a, 0xd6, 0x5a, 0x6a, 0xb5, 0xda, 0x08, 0x00, 0x3c, 0xde, 0xfe,
    0xcc, 0xb3, 0xad, 0x1d, 0xf6, 0xf7, 0x7f, 0x52, 0xa9, 0x54, 0xb0, 0xd6,
    0x30, 0x1c, 0x2a, 0x0e, 0x0f, 0x13, 0x92, 0x24, 0x21, 0x8e, 0xe3, 0xdc,
    0x07, 0x83, 0x01, 0xad, 0x56, 0x8b, 0x46, 0xa3, 0x21, 0x7c, 0x80, 0xf7,
    0x1f, 0x76, 0xa8, 0x9c, 0xbb, 0x8c, 0x73, 0x0e, 0xad, 0x35, 0x59, 0x96,
    0xe5, 0x6b, 0x96, 0x65, 0x28, 0xa5, 0xd0, 0x5a, 0xa3, 0xb5, 0x06, 0xa0,
    0xdd, 0x6e, 0xd3, 0xe9, 0x74, 0x8e, 0x5b, 0x78, 0xfe, 0xae, 0xcd, 0xa3,
    0xd7, 0x2d, 0xfa, 0xfd, 0xdf, 0x54, 0xab, 0x55, 0x94, 0x52, 0x18, 0xa3,
    0x51, 0x6a, 0x98, 0xb7, 0x32, 0x86, 0x25, 0x49, 0x42, 0xb7, 0xdb, 0x65,
    0x63, 0x63, 0x53, 0xe4, 0x80, 0x93, 0xe7, 0xaf, 0x20, 0x84, 0x60, 0x30,
    0x88, 0x51, 0x2a, 0xc3, 0xf3, 0x4a, 0x18, 0x63, 0xd0, 0x5a, 0xe7, 0x00,
    0x29, 0x25, 0x5a, 0x6b, 0xa2, 0x28, 0x62, 0x77, 0xf7, 0xd3, 0xf4, 0x18,
    0xd7, 0xee, 0xae, 0xb3, 0xb7, 0xf7, 0x0d, 0xdf, 0x2f, 0x51, 0x2a, 0x95,
    0x10, 0x42, 0x60, 0x8c, 0x45, 0x6b, 0x8d, 0x52, 0x6a, 0xd4, 0xc6, 0x91,
    0x82, 0x28, 0x8a, 0x68, 0x36, 0x9b, 0xc7, 0x63, 0xfc, 0xda, 0x2f, 0x53,
    0xaf, 0xd7, 0x01, 0x37, 0x1a, 0x95, 0x00, 0x1c, 0xce, 0x39, 0xac, 0xb5,
    0x18, 0x63, 0x31, 0xc6, 0x60, 0xad, 0x21, 0x8e, 0x63, 0x7a, 0xbd, 0xde,
    0xd4, 0xbf, 0xf8, 0x03, 0x85, 0xc5, 0x20, 0x9b, 0xf5, 0x59, 0x6d, 0x0b,
    0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};


/*
 *  Constructs a PreferencesDialogGui as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
PreferencesDialogGui::PreferencesDialogGui( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    QImage img;
    img.loadFromData( image0_data, sizeof( image0_data ), "PNG" );
    image0 = img;
    img.loadFromData( image1_data, sizeof( image1_data ), "PNG" );
    image1 = img;
    if ( !name )
	setName( "PreferencesDialogGui" );
    setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)1, 0, 0, sizePolicy().hasHeightForWidth() ) );
    PreferencesDialogGuiLayout = new QGridLayout( this, 1, 1, 2, 0, "PreferencesDialogGuiLayout"); 

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 

    buttonHelp = new QPushButton( this, "buttonHelp" );
    buttonHelp->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, buttonHelp->sizePolicy().hasHeightForWidth() ) );
    buttonHelp->setMinimumSize( QSize( 0, 0 ) );
    buttonHelp->setPixmap( image0 );
    buttonHelp->setAutoDefault( TRUE );
    Layout1->addWidget( buttonHelp );
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Horizontal_Spacing2 );

    buttonApply = new QPushButton( this, "buttonApply" );
    buttonApply->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, buttonApply->sizePolicy().hasHeightForWidth() ) );
    buttonApply->setMinimumSize( QSize( 0, 0 ) );
    buttonApply->setAutoDefault( TRUE );
    Layout1->addWidget( buttonApply );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setMaximumSize( QSize( 32767, 32767 ) );
    buttonOk->setToggleButton( FALSE );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout1->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setMaximumSize( QSize( 32767, 32767 ) );
    buttonCancel->setToggleButton( FALSE );
    buttonCancel->setAutoDefault( TRUE );
    Layout1->addWidget( buttonCancel );

    PreferencesDialogGuiLayout->addMultiCellLayout( Layout1, 1, 1, 0, 1 );

    tabWidget = new QTabWidget( this, "tabWidget" );
    tabWidget->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)1, 0, 0, tabWidget->sizePolicy().hasHeightForWidth() ) );
    tabWidget->setMinimumSize( QSize( 0, 0 ) );

    InterfaceTabWidget = new QWidget( tabWidget, "InterfaceTabWidget" );
    InterfaceTabWidgetLayout = new QGridLayout( InterfaceTabWidget, 1, 1, 11, 6, "InterfaceTabWidgetLayout"); 

    ButtonGroup3 = new QButtonGroup( InterfaceTabWidget, "ButtonGroup3" );
    ButtonGroup3->setColumnLayout(0, Qt::Vertical );
    ButtonGroup3->layout()->setSpacing( 0 );
    ButtonGroup3->layout()->setMargin( 6 );
    ButtonGroup3Layout = new QGridLayout( ButtonGroup3->layout() );
    ButtonGroup3Layout->setAlignment( Qt::AlignTop );

    Layout17_2 = new QHBoxLayout( 0, 0, 6, "Layout17_2"); 

    fontLabel_standard = new QLabel( ButtonGroup3, "fontLabel_standard" );
    fontLabel_standard->setMinimumSize( QSize( 100, 0 ) );
    Layout17_2->addWidget( fontLabel_standard );

    fontStandardButton = new QPushButton( ButtonGroup3, "fontStandardButton" );
    fontStandardButton->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, fontStandardButton->sizePolicy().hasHeightForWidth() ) );
    fontStandardButton->setMaximumSize( QSize( 32767, 32767 ) );
    fontStandardButton->setFocusPolicy( QPushButton::TabFocus );
    ButtonGroup3->insert( fontStandardButton, -1 );
    Layout17_2->addWidget( fontStandardButton );

    ButtonGroup3Layout->addLayout( Layout17_2, 0, 0 );

    Layout17 = new QHBoxLayout( 0, 0, 6, "Layout17"); 

    fontLabel_marks = new QLabel( ButtonGroup3, "fontLabel_marks" );
    fontLabel_marks->setMinimumSize( QSize( 100, 0 ) );
    Layout17->addWidget( fontLabel_marks );

    fontMarksButton = new QPushButton( ButtonGroup3, "fontMarksButton" );
    fontMarksButton->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, fontMarksButton->sizePolicy().hasHeightForWidth() ) );
    fontMarksButton->setMaximumSize( QSize( 32767, 32767 ) );
    fontMarksButton->setFocusPolicy( QPushButton::TabFocus );
    ButtonGroup3->insert( fontMarksButton, -1 );
    Layout17->addWidget( fontMarksButton );

    ButtonGroup3Layout->addLayout( Layout17, 1, 0 );

    Layout18 = new QHBoxLayout( 0, 0, 6, "Layout18"); 

    fontLabel_comments = new QLabel( ButtonGroup3, "fontLabel_comments" );
    fontLabel_comments->setMinimumSize( QSize( 100, 0 ) );
    Layout18->addWidget( fontLabel_comments );

    fontCommentsButton = new QPushButton( ButtonGroup3, "fontCommentsButton" );
    fontCommentsButton->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, fontCommentsButton->sizePolicy().hasHeightForWidth() ) );
    fontCommentsButton->setMaximumSize( QSize( 32767, 32767 ) );
    fontCommentsButton->setFocusPolicy( QPushButton::TabFocus );
    ButtonGroup3->insert( fontCommentsButton, -1 );
    Layout18->addWidget( fontCommentsButton );

    ButtonGroup3Layout->addLayout( Layout18, 2, 0 );

    Layout19 = new QHBoxLayout( 0, 0, 6, "Layout19"); 

    fontLabel_lists = new QLabel( ButtonGroup3, "fontLabel_lists" );
    fontLabel_lists->setMinimumSize( QSize( 100, 0 ) );
    Layout19->addWidget( fontLabel_lists );

    fontListsButton = new QPushButton( ButtonGroup3, "fontListsButton" );
    fontListsButton->setMaximumSize( QSize( 32767, 32767 ) );
    fontListsButton->setFocusPolicy( QPushButton::TabFocus );
    ButtonGroup3->insert( fontListsButton, -1 );
    Layout19->addWidget( fontListsButton );

    ButtonGroup3Layout->addLayout( Layout19, 3, 0 );

    Layout19_2 = new QHBoxLayout( 0, 0, 6, "Layout19_2"); 

    fontLabel_lists_2 = new QLabel( ButtonGroup3, "fontLabel_lists_2" );
    fontLabel_lists_2->setMinimumSize( QSize( 100, 0 ) );
    Layout19_2->addWidget( fontLabel_lists_2 );

    fontClocksButton = new QPushButton( ButtonGroup3, "fontClocksButton" );
    fontClocksButton->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, fontClocksButton->sizePolicy().hasHeightForWidth() ) );
    fontClocksButton->setMaximumSize( QSize( 32767, 32767 ) );
    fontClocksButton->setFocusPolicy( QPushButton::TabFocus );
    fontClocksButton->setToggleButton( FALSE );
    ButtonGroup3->insert( fontClocksButton, -1 );
    Layout19_2->addWidget( fontClocksButton );

    ButtonGroup3Layout->addLayout( Layout19_2, 4, 0 );

    Layout19_2_2 = new QHBoxLayout( 0, 0, 6, "Layout19_2_2"); 

    fontLabel_console = new QLabel( ButtonGroup3, "fontLabel_console" );
    fontLabel_console->setMinimumSize( QSize( 100, 0 ) );
    Layout19_2_2->addWidget( fontLabel_console );

    fontConsoleButton = new QPushButton( ButtonGroup3, "fontConsoleButton" );
    fontConsoleButton->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, fontConsoleButton->sizePolicy().hasHeightForWidth() ) );
    fontConsoleButton->setMaximumSize( QSize( 32767, 32767 ) );
    fontConsoleButton->setFocusPolicy( QPushButton::TabFocus );
    ButtonGroup3->insert( fontConsoleButton, -1 );
    Layout19_2_2->addWidget( fontConsoleButton );

    ButtonGroup3Layout->addLayout( Layout19_2_2, 5, 0 );

    InterfaceTabWidgetLayout->addWidget( ButtonGroup3, 0, 1 );

    groupBox27 = new QGroupBox( InterfaceTabWidget, "groupBox27" );
    groupBox27->setColumnLayout(0, Qt::Vertical );
    groupBox27->layout()->setSpacing( 6 );
    groupBox27->layout()->setMargin( 6 );
    groupBox27Layout = new QGridLayout( groupBox27->layout() );
    groupBox27Layout->setAlignment( Qt::AlignTop );

    Layout39_2 = new QHBoxLayout( 0, 0, 6, "Layout39_2"); 
    Spacer3_2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout39_2->addItem( Spacer3_2 );

    Layout35_2 = new QVBoxLayout( 0, 0, 6, "Layout35_2"); 

    pb_new_2 = new QPushButton( groupBox27, "pb_new_2" );
    pb_new_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)0, 0, 0, pb_new_2->sizePolicy().hasHeightForWidth() ) );
    Layout35_2->addWidget( pb_new_2 );

    Layout34_2 = new QHBoxLayout( 0, 0, 6, "Layout34_2"); 

    pb_add_2 = new QPushButton( groupBox27, "pb_add_2" );
    Layout34_2->addWidget( pb_add_2 );

    pb_delete_2 = new QPushButton( groupBox27, "pb_delete_2" );
    Layout34_2->addWidget( pb_delete_2 );
    Layout35_2->addLayout( Layout34_2 );
    Layout39_2->addLayout( Layout35_2 );

    groupBox27Layout->addLayout( Layout39_2, 4, 0 );

    Layout16_2 = new QHBoxLayout( 0, 0, 6, "Layout16_2"); 

    TextLabel2_4_2 = new QLabel( groupBox27, "TextLabel2_4_2" );
    TextLabel2_4_2->setMinimumSize( QSize( 70, 0 ) );
    Layout16_2->addWidget( TextLabel2_4_2 );

    LineEdit_help = new QLineEdit( groupBox27, "LineEdit_help" );
    LineEdit_help->setMaxLength( 100 );
    Layout16_2->addWidget( LineEdit_help );

    groupBox27Layout->addLayout( Layout16_2, 2, 0 );

    Layout14_2 = new QHBoxLayout( 0, 0, 6, "Layout14_2"); 

    TextLabel1_5_2 = new QLabel( groupBox27, "TextLabel1_5_2" );
    TextLabel1_5_2->setMinimumSize( QSize( 70, 0 ) );
    Layout14_2->addWidget( TextLabel1_5_2 );

    LineEdit_command = new QLineEdit( groupBox27, "LineEdit_command" );
    LineEdit_command->setMaxLength( 100 );
    Layout14_2->addWidget( LineEdit_command );

    groupBox27Layout->addLayout( Layout14_2, 1, 0 );

    layout83 = new QHBoxLayout( 0, 0, 6, "layout83"); 

    TextLabel3_2_2 = new QLabel( groupBox27, "TextLabel3_2_2" );
    TextLabel3_2_2->setMinimumSize( QSize( 70, 0 ) );
    layout83->addWidget( TextLabel3_2_2 );

    LineEdit_pixfile = new QLineEdit( groupBox27, "LineEdit_pixfile" );
    layout83->addWidget( LineEdit_pixfile );

    pixmapLabel = new QLabel( groupBox27, "pixmapLabel" );
    pixmapLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, pixmapLabel->sizePolicy().hasHeightForWidth() ) );
    pixmapLabel->setMinimumSize( QSize( 24, 24 ) );
    pixmapLabel->setMaximumSize( QSize( 24, 24 ) );
    pixmapLabel->setScaledContents( TRUE );
    layout83->addWidget( pixmapLabel );

    PixmapPathButton = new QPushButton( groupBox27, "PixmapPathButton" );
    PixmapPathButton->setPixmap( image1 );
    layout83->addWidget( PixmapPathButton );

    groupBox27Layout->addLayout( layout83, 3, 0 );

    layout81 = new QHBoxLayout( 0, 0, 6, "layout81"); 

    TextLabel1_title_2 = new QLabel( groupBox27, "TextLabel1_title_2" );
    TextLabel1_title_2->setMinimumSize( QSize( 70, 0 ) );
    layout81->addWidget( TextLabel1_title_2 );

    LineEdit_label = new QLineEdit( groupBox27, "LineEdit_label" );
    LineEdit_label->setMaxLength( 100 );
    layout81->addWidget( LineEdit_label );

    groupBox27Layout->addLayout( layout81, 0, 0 );

    ListView_buttons = new QListView( groupBox27, "ListView_buttons" );
    ListView_buttons->addColumn( tr( "Pixmap" ) );
    ListView_buttons->addColumn( tr( "Label" ) );
    ListView_buttons->addColumn( tr( "Command" ) );
    ListView_buttons->addColumn( tr( "Help Text" ) );
    ListView_buttons->addColumn( QString::null );
    ListView_buttons->header()->setClickEnabled( FALSE, ListView_buttons->header()->count() - 1 );
    ListView_buttons->header()->setResizeEnabled( FALSE, ListView_buttons->header()->count() - 1 );
    ListView_buttons->setMinimumSize( QSize( 250, 0 ) );
    ListView_buttons->setResizePolicy( QListView::AutoOneFit );
    ListView_buttons->setAllColumnsShowFocus( TRUE );

    groupBox27Layout->addMultiCellWidget( ListView_buttons, 0, 4, 1, 1 );

    InterfaceTabWidgetLayout->addMultiCellWidget( groupBox27, 3, 3, 0, 1 );

    soundButtonGroups = new QButtonGroup( InterfaceTabWidget, "soundButtonGroups" );
    soundButtonGroups->setFrameShape( QButtonGroup::Box );
    soundButtonGroups->setFrameShadow( QButtonGroup::Sunken );
    soundButtonGroups->setColumnLayout(0, Qt::Vertical );
    soundButtonGroups->layout()->setSpacing( 0 );
    soundButtonGroups->layout()->setMargin( 6 );
    soundButtonGroupsLayout = new QGridLayout( soundButtonGroups->layout() );
    soundButtonGroupsLayout->setAlignment( Qt::AlignTop );

    saySoundCheckBox = new QCheckBox( soundButtonGroups, "saySoundCheckBox" );

    soundButtonGroupsLayout->addWidget( saySoundCheckBox, 2, 0 );

    autoplaySoundCheckBox = new QCheckBox( soundButtonGroups, "autoplaySoundCheckBox" );
    soundButtonGroups->insert( autoplaySoundCheckBox, 3 );

    soundButtonGroupsLayout->addWidget( autoplaySoundCheckBox, 1, 0 );

    stoneSoundCheckBox = new QCheckBox( soundButtonGroups, "stoneSoundCheckBox" );
    soundButtonGroups->insert( stoneSoundCheckBox, 1 );

    soundButtonGroupsLayout->addWidget( stoneSoundCheckBox, 0, 0 );

    enterSoundCheckBox = new QCheckBox( soundButtonGroups, "enterSoundCheckBox" );
    soundButtonGroups->insert( enterSoundCheckBox, 8 );

    soundButtonGroupsLayout->addWidget( enterSoundCheckBox, 3, 0 );

    disConnectSoundCheckBox = new QCheckBox( soundButtonGroups, "disConnectSoundCheckBox" );
    soundButtonGroups->insert( disConnectSoundCheckBox, 11 );

    soundButtonGroupsLayout->addWidget( disConnectSoundCheckBox, 4, 0 );

    matchSoundCheckBox = new QCheckBox( soundButtonGroups, "matchSoundCheckBox" );
    soundButtonGroups->insert( matchSoundCheckBox, 7 );

    soundButtonGroupsLayout->addMultiCellWidget( matchSoundCheckBox, 5, 5, 0, 2 );

    timeSoundCheckBox = new QCheckBox( soundButtonGroups, "timeSoundCheckBox" );
    soundButtonGroups->insert( timeSoundCheckBox, 4 );

    soundButtonGroupsLayout->addMultiCellWidget( timeSoundCheckBox, 6, 7, 0, 2 );

    BYTimeSpin = new QSpinBox( soundButtonGroups, "BYTimeSpin" );
    BYTimeSpin->setMaximumSize( QSize( 60, 32767 ) );
    BYTimeSpin->setMaxValue( 99 );
    BYTimeSpin->setMinValue( 1 );
    BYTimeSpin->setValue( 10 );

    soundButtonGroupsLayout->addWidget( BYTimeSpin, 7, 2 );

    connectSoundCheckBox = new QCheckBox( soundButtonGroups, "connectSoundCheckBox" );
    soundButtonGroups->insert( connectSoundCheckBox, 12 );

    soundButtonGroupsLayout->addMultiCellWidget( connectSoundCheckBox, 4, 4, 1, 2 );

    passSoundCheckBox = new QCheckBox( soundButtonGroups, "passSoundCheckBox" );
    soundButtonGroups->insert( passSoundCheckBox, 2 );

    soundButtonGroupsLayout->addMultiCellWidget( passSoundCheckBox, 0, 0, 1, 2 );

    leaveSoundCheckBox = new QCheckBox( soundButtonGroups, "leaveSoundCheckBox" );
    soundButtonGroups->insert( leaveSoundCheckBox, 10 );

    soundButtonGroupsLayout->addMultiCellWidget( leaveSoundCheckBox, 3, 3, 1, 2 );

    talkSoundCheckBox = new QCheckBox( soundButtonGroups, "talkSoundCheckBox" );
    soundButtonGroups->insert( talkSoundCheckBox, 5 );

    soundButtonGroupsLayout->addMultiCellWidget( talkSoundCheckBox, 2, 2, 1, 2 );

    gameEndSoundCheckBox = new QCheckBox( soundButtonGroups, "gameEndSoundCheckBox" );
    soundButtonGroups->insert( gameEndSoundCheckBox, 9 );

    soundButtonGroupsLayout->addMultiCellWidget( gameEndSoundCheckBox, 1, 1, 1, 2 );

    InterfaceTabWidgetLayout->addWidget( soundButtonGroups, 0, 0 );

    GroupBox8 = new QGroupBox( InterfaceTabWidget, "GroupBox8" );
    GroupBox8->setColumnLayout(0, Qt::Vertical );
    GroupBox8->layout()->setSpacing( 6 );
    GroupBox8->layout()->setMargin( 11 );
    GroupBox8Layout = new QHBoxLayout( GroupBox8->layout() );
    GroupBox8Layout->setAlignment( Qt::AlignTop );

    languageComboBox = new QComboBox( FALSE, GroupBox8, "languageComboBox" );
    languageComboBox->setFocusPolicy( QComboBox::TabFocus );
    languageComboBox->setSizeLimit( 40 );
    GroupBox8Layout->addWidget( languageComboBox );

    InterfaceTabWidgetLayout->addWidget( GroupBox8, 1, 0 );
    spacer10_2 = new QSpacerItem( 21, 82, QSizePolicy::Minimum, QSizePolicy::Expanding );
    InterfaceTabWidgetLayout->addItem( spacer10_2, 2, 0 );
    spacer11 = new QSpacerItem( 20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding );
    InterfaceTabWidgetLayout->addItem( spacer11, 2, 1 );

    ButtonGroup4 = new QButtonGroup( InterfaceTabWidget, "ButtonGroup4" );
    ButtonGroup4->setColumnLayout(0, Qt::Vertical );
    ButtonGroup4->layout()->setSpacing( 6 );
    ButtonGroup4->layout()->setMargin( 11 );
    ButtonGroup4Layout = new QHBoxLayout( ButtonGroup4->layout() );
    ButtonGroup4Layout->setAlignment( Qt::AlignTop );

    layout45 = new QHBoxLayout( 0, 0, 6, "layout45"); 

    colorLabel = new QLabel( ButtonGroup4, "colorLabel" );
    colorLabel->setMinimumSize( QSize( 80, 0 ) );
    layout45->addWidget( colorLabel );

    colorBackgroundButton = new QPushButton( ButtonGroup4, "colorBackgroundButton" );
    colorBackgroundButton->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)0, 0, 0, colorBackgroundButton->sizePolicy().hasHeightForWidth() ) );
    colorBackgroundButton->setMaximumSize( QSize( 32767, 32767 ) );
    colorBackgroundButton->setFocusPolicy( QPushButton::TabFocus );
    colorBackgroundButton->setToggleButton( FALSE );
    ButtonGroup4->insert( colorBackgroundButton, -1 );
    layout45->addWidget( colorBackgroundButton );
    ButtonGroup4Layout->addLayout( layout45 );

    layout45_2 = new QHBoxLayout( 0, 0, 6, "layout45_2"); 

    colorLabel_2 = new QLabel( ButtonGroup4, "colorLabel_2" );
    colorLabel_2->setMinimumSize( QSize( 80, 0 ) );
    layout45_2->addWidget( colorLabel_2 );

    colorAltBackgroundButton = new QPushButton( ButtonGroup4, "colorAltBackgroundButton" );
    colorAltBackgroundButton->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, colorAltBackgroundButton->sizePolicy().hasHeightForWidth() ) );
    colorAltBackgroundButton->setMaximumSize( QSize( 32767, 32767 ) );
    colorAltBackgroundButton->setFocusPolicy( QPushButton::TabFocus );
    colorAltBackgroundButton->setToggleButton( FALSE );
    ButtonGroup4->insert( colorAltBackgroundButton, -1 );
    layout45_2->addWidget( colorAltBackgroundButton );
    ButtonGroup4Layout->addLayout( layout45_2 );

    InterfaceTabWidgetLayout->addWidget( ButtonGroup4, 1, 1 );
    tabWidget->insertTab( InterfaceTabWidget, QString::fromLatin1("") );

    clientWindowTabWidget = new QWidget( tabWidget, "clientWindowTabWidget" );
    clientWindowTabWidgetLayout = new QGridLayout( clientWindowTabWidget, 1, 1, 11, 6, "clientWindowTabWidgetLayout"); 

    boardButtonGroup = new QGroupBox( clientWindowTabWidget, "boardButtonGroup" );
    boardButtonGroup->setColumnLayout(0, Qt::Vertical );
    boardButtonGroup->layout()->setSpacing( 0 );
    boardButtonGroup->layout()->setMargin( 6 );
    boardButtonGroupLayout = new QGridLayout( boardButtonGroup->layout() );
    boardButtonGroupLayout->setAlignment( Qt::AlignTop );

    coordsCheckBox = new QCheckBox( boardButtonGroup, "coordsCheckBox" );

    boardButtonGroupLayout->addWidget( coordsCheckBox, 0, 0 );

    sgfCoordsCheckBox = new QCheckBox( boardButtonGroup, "sgfCoordsCheckBox" );

    boardButtonGroupLayout->addWidget( sgfCoordsCheckBox, 0, 1 );

    sliderCheckBox = new QCheckBox( boardButtonGroup, "sliderCheckBox" );

    boardButtonGroupLayout->addWidget( sliderCheckBox, 2, 0 );

    cursorCheckBox = new QCheckBox( boardButtonGroup, "cursorCheckBox" );

    boardButtonGroupLayout->addWidget( cursorCheckBox, 3, 0 );

    toolTipCoordsCheckBox = new QCheckBox( boardButtonGroup, "toolTipCoordsCheckBox" );

    boardButtonGroupLayout->addWidget( toolTipCoordsCheckBox, 4, 0 );

    variableFontCheckBox = new QCheckBox( boardButtonGroup, "variableFontCheckBox" );

    boardButtonGroupLayout->addWidget( variableFontCheckBox, 7, 0 );

    tooltipsCheckBox = new QCheckBox( boardButtonGroup, "tooltipsCheckBox" );

    boardButtonGroupLayout->addWidget( tooltipsCheckBox, 5, 0 );

    smallerMarksCheckBox = new QCheckBox( boardButtonGroup, "smallerMarksCheckBox" );

    boardButtonGroupLayout->addWidget( smallerMarksCheckBox, 8, 0 );

    adjustFontSizeCheckBox = new QCheckBox( boardButtonGroup, "adjustFontSizeCheckBox" );

    boardButtonGroupLayout->addWidget( adjustFontSizeCheckBox, 6, 0 );

    boldMarksCheckBox = new QCheckBox( boardButtonGroup, "boldMarksCheckBox" );

    boardButtonGroupLayout->addWidget( boldMarksCheckBox, 9, 0 );

    Layout20_2 = new QHBoxLayout( 0, 0, 6, "Layout20_2"); 

    sidebarCheckBox = new QCheckBox( boardButtonGroup, "sidebarCheckBox" );
    Layout20_2->addWidget( sidebarCheckBox );

    sidebarLeftCheckBox = new QCheckBox( boardButtonGroup, "sidebarLeftCheckBox" );
    Layout20_2->addWidget( sidebarLeftCheckBox );

    boardButtonGroupLayout->addLayout( Layout20_2, 1, 0 );

    clientWindowTabWidgetLayout->addMultiCellWidget( boardButtonGroup, 0, 2, 1, 1 );

    GoEnginegroup_box_2 = new QGroupBox( clientWindowTabWidget, "GoEnginegroup_box_2" );
    GoEnginegroup_box_2->setColumnLayout(0, Qt::Vertical );
    GoEnginegroup_box_2->layout()->setSpacing( 6 );
    GoEnginegroup_box_2->layout()->setMargin( 11 );
    GoEnginegroup_box_2Layout = new QGridLayout( GoEnginegroup_box_2->layout() );
    GoEnginegroup_box_2Layout->setAlignment( Qt::AlignTop );

    layout46 = new QHBoxLayout( 0, 0, 6, "layout46"); 

    textLabel1 = new QLabel( GoEnginegroup_box_2, "textLabel1" );
    layout46->addWidget( textLabel1 );

    LineEdit_goban = new QLineEdit( GoEnginegroup_box_2, "LineEdit_goban" );
    LineEdit_goban->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)0, 0, 0, LineEdit_goban->sizePolicy().hasHeightForWidth() ) );
    layout46->addWidget( LineEdit_goban );

    GobanPicturePathButton = new QPushButton( GoEnginegroup_box_2, "GobanPicturePathButton" );
    GobanPicturePathButton->setPixmap( image1 );
    layout46->addWidget( GobanPicturePathButton );

    GoEnginegroup_box_2Layout->addLayout( layout46, 0, 0 );

    layout46_2 = new QHBoxLayout( 0, 0, 6, "layout46_2"); 

    textLabel1_2 = new QLabel( GoEnginegroup_box_2, "textLabel1_2" );
    layout46_2->addWidget( textLabel1_2 );

    LineEdit_Table = new QLineEdit( GoEnginegroup_box_2, "LineEdit_Table" );
    LineEdit_Table->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)0, 0, 0, LineEdit_Table->sizePolicy().hasHeightForWidth() ) );
    layout46_2->addWidget( LineEdit_Table );

    TablePicturePathButton = new QPushButton( GoEnginegroup_box_2, "TablePicturePathButton" );
    TablePicturePathButton->setPixmap( image1 );
    layout46_2->addWidget( TablePicturePathButton );

    GoEnginegroup_box_2Layout->addLayout( layout46_2, 1, 0 );

    clientWindowTabWidgetLayout->addMultiCellWidget( GoEnginegroup_box_2, 3, 3, 0, 1 );

    antiClickoGroup = new QGroupBox( clientWindowTabWidget, "antiClickoGroup" );
    antiClickoGroup->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)0, 0, 0, antiClickoGroup->sizePolicy().hasHeightForWidth() ) );
    antiClickoGroup->setColumnLayout(0, Qt::Vertical );
    antiClickoGroup->layout()->setSpacing( 0 );
    antiClickoGroup->layout()->setMargin( 6 );
    antiClickoGroupLayout = new QVBoxLayout( antiClickoGroup->layout() );
    antiClickoGroupLayout->setAlignment( Qt::AlignTop );

    antiClickoCheckBox = new QCheckBox( antiClickoGroup, "antiClickoCheckBox" );
    antiClickoGroupLayout->addWidget( antiClickoCheckBox );

    clientWindowTabWidgetLayout->addWidget( antiClickoGroup, 1, 0 );

    autoplayGroup = new QGroupBox( clientWindowTabWidget, "autoplayGroup" );
    autoplayGroup->setColumnLayout(0, Qt::Vertical );
    autoplayGroup->layout()->setSpacing( 0 );
    autoplayGroup->layout()->setMargin( 6 );
    autoplayGroupLayout = new QVBoxLayout( autoplayGroup->layout() );
    autoplayGroupLayout->setAlignment( Qt::AlignTop );

    Layout3 = new QHBoxLayout( 0, 0, 6, "Layout3"); 

    TextLabel2 = new QLabel( autoplayGroup, "TextLabel2" );
    Layout3->addWidget( TextLabel2 );

    timerComboBox = new QComboBox( FALSE, autoplayGroup, "timerComboBox" );
    timerComboBox->setFocusPolicy( QComboBox::TabFocus );
    Layout3->addWidget( timerComboBox );
    autoplayGroupLayout->addLayout( Layout3 );

    sgfTimeTagsCheckBox = new QCheckBox( autoplayGroup, "sgfTimeTagsCheckBox" );
    autoplayGroupLayout->addWidget( sgfTimeTagsCheckBox );

    clientWindowTabWidgetLayout->addWidget( autoplayGroup, 2, 0 );

    Layout12 = new QHBoxLayout( 0, 0, 6, "Layout12"); 

    GroupBox76 = new QGroupBox( clientWindowTabWidget, "GroupBox76" );
    GroupBox76->setColumnLayout(0, Qt::Vertical );
    GroupBox76->layout()->setSpacing( 6 );
    GroupBox76->layout()->setMargin( 11 );
    GroupBox76Layout = new QGridLayout( GroupBox76->layout() );
    GroupBox76Layout->setAlignment( Qt::AlignTop );

    commentComboBox = new QComboBox( FALSE, GroupBox76, "commentComboBox" );
    commentComboBox->setEnabled( TRUE );
    commentComboBox->setFocusPolicy( QComboBox::TabFocus );

    GroupBox76Layout->addWidget( commentComboBox, 0, 0 );
    Layout12->addWidget( GroupBox76 );

    GroupBox7 = new QGroupBox( clientWindowTabWidget, "GroupBox7" );
    GroupBox7->setColumnLayout(0, Qt::Vertical );
    GroupBox7->layout()->setSpacing( 6 );
    GroupBox7->layout()->setMargin( 11 );
    GroupBox7Layout = new QGridLayout( GroupBox7->layout() );
    GroupBox7Layout->setAlignment( Qt::AlignTop );

    variationComboBox = new QComboBox( FALSE, GroupBox7, "variationComboBox" );
    variationComboBox->setFocusPolicy( QComboBox::TabFocus );

    GroupBox7Layout->addWidget( variationComboBox, 0, 0 );
    Layout12->addWidget( GroupBox7 );

    clientWindowTabWidgetLayout->addLayout( Layout12, 0, 0 );
    Spacer8_2 = new QSpacerItem( 20, 130, QSizePolicy::Minimum, QSizePolicy::Expanding );
    clientWindowTabWidgetLayout->addItem( Spacer8_2, 5, 1 );

    buttonGroup6 = new QButtonGroup( clientWindowTabWidget, "buttonGroup6" );
    buttonGroup6->setColumnLayout(0, Qt::Vertical );
    buttonGroup6->layout()->setSpacing( 6 );
    buttonGroup6->layout()->setMargin( 11 );
    buttonGroup6Layout = new QHBoxLayout( buttonGroup6->layout() );
    buttonGroup6Layout->setAlignment( Qt::AlignTop );

    radioButtonStones_2D = new QRadioButton( buttonGroup6, "radioButtonStones_2D" );
    buttonGroup6Layout->addWidget( radioButtonStones_2D );

    radioButtonStones_3D = new QRadioButton( buttonGroup6, "radioButtonStones_3D" );
    buttonGroup6Layout->addWidget( radioButtonStones_3D );

    radioButtonStone_real = new QRadioButton( buttonGroup6, "radioButtonStone_real" );
    buttonGroup6Layout->addWidget( radioButtonStone_real );

    clientWindowTabWidgetLayout->addMultiCellWidget( buttonGroup6, 4, 4, 0, 1 );
    tabWidget->insertTab( clientWindowTabWidget, QString::fromLatin1("") );

    ComputerGoTabWidget = new QWidget( tabWidget, "ComputerGoTabWidget" );
    ComputerGoTabWidgetLayout = new QGridLayout( ComputerGoTabWidget, 1, 1, 11, 6, "ComputerGoTabWidgetLayout"); 

    GoEnginegroup_box = new QGroupBox( ComputerGoTabWidget, "GoEnginegroup_box" );
    GoEnginegroup_box->setColumnLayout(0, Qt::Vertical );
    GoEnginegroup_box->layout()->setSpacing( 6 );
    GoEnginegroup_box->layout()->setMargin( 11 );
    GoEnginegroup_boxLayout = new QGridLayout( GoEnginegroup_box->layout() );
    GoEnginegroup_boxLayout->setAlignment( Qt::AlignTop );

    Layout37 = new QHBoxLayout( 0, 0, 6, "Layout37"); 

    LineEdit_computer = new QLineEdit( GoEnginegroup_box, "LineEdit_computer" );
    LineEdit_computer->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)0, 0, 0, LineEdit_computer->sizePolicy().hasHeightForWidth() ) );
    Layout37->addWidget( LineEdit_computer );

    ComputerPathButton = new QPushButton( GoEnginegroup_box, "ComputerPathButton" );
    ComputerPathButton->setPixmap( image1 );
    Layout37->addWidget( ComputerPathButton );

    GoEnginegroup_boxLayout->addLayout( Layout37, 0, 0 );

    ComputerGoTabWidgetLayout->addWidget( GoEnginegroup_box, 0, 0 );

    layout42 = new QHBoxLayout( 0, 0, 6, "layout42"); 

    buttonGroup4 = new QButtonGroup( ComputerGoTabWidget, "buttonGroup4" );
    buttonGroup4->setColumnLayout(0, Qt::Vertical );
    buttonGroup4->layout()->setSpacing( 6 );
    buttonGroup4->layout()->setMargin( 11 );
    buttonGroup4Layout = new QGridLayout( buttonGroup4->layout() );
    buttonGroup4Layout->setAlignment( Qt::AlignTop );

    layout41 = new QHBoxLayout( 0, 0, 6, "layout41"); 

    computerButtonWhite = new QRadioButton( buttonGroup4, "computerButtonWhite" );
    layout41->addWidget( computerButtonWhite );

    humanButtonWhite = new QRadioButton( buttonGroup4, "humanButtonWhite" );
    humanButtonWhite->setChecked( TRUE );
    layout41->addWidget( humanButtonWhite );

    buttonGroup4Layout->addLayout( layout41, 0, 0 );
    layout42->addWidget( buttonGroup4 );

    buttonGroup5 = new QButtonGroup( ComputerGoTabWidget, "buttonGroup5" );
    buttonGroup5->setColumnLayout(0, Qt::Vertical );
    buttonGroup5->layout()->setSpacing( 6 );
    buttonGroup5->layout()->setMargin( 11 );
    buttonGroup5Layout = new QGridLayout( buttonGroup5->layout() );
    buttonGroup5Layout->setAlignment( Qt::AlignTop );

    layout40 = new QHBoxLayout( 0, 0, 6, "layout40"); 

    computerButtonBlack = new QRadioButton( buttonGroup5, "computerButtonBlack" );
    computerButtonBlack->setChecked( TRUE );
    layout40->addWidget( computerButtonBlack );

    humanButtonBlack = new QRadioButton( buttonGroup5, "humanButtonBlack" );
    layout40->addWidget( humanButtonBlack );

    buttonGroup5Layout->addLayout( layout40, 0, 0 );
    layout42->addWidget( buttonGroup5 );

    ComputerGoTabWidgetLayout->addLayout( layout42, 1, 0 );
    Spacer8 = new QSpacerItem( 20, 260, QSizePolicy::Minimum, QSizePolicy::Expanding );
    ComputerGoTabWidgetLayout->addItem( Spacer8, 3, 0 );

    groupBox25_3 = new QGroupBox( ComputerGoTabWidget, "groupBox25_3" );
    groupBox25_3->setColumnLayout(0, Qt::Vertical );
    groupBox25_3->layout()->setSpacing( 6 );
    groupBox25_3->layout()->setMargin( 11 );
    groupBox25_3Layout = new QGridLayout( groupBox25_3->layout() );
    groupBox25_3Layout->setAlignment( Qt::AlignTop );

    Layout13_2 = new QHBoxLayout( 0, 0, 6, "Layout13_2"); 

    TextLabel6_2 = new QLabel( groupBox25_3, "TextLabel6_2" );
    Layout13_2->addWidget( TextLabel6_2 );

    computerHandicapSpin = new QSpinBox( groupBox25_3, "computerHandicapSpin" );
    computerHandicapSpin->setMaximumSize( QSize( 60, 32767 ) );
    computerHandicapSpin->setMaxValue( 9 );
    computerHandicapSpin->setMinValue( 0 );
    computerHandicapSpin->setValue( 0 );
    Layout13_2->addWidget( computerHandicapSpin );

    groupBox25_3Layout->addLayout( Layout13_2, 0, 1 );

    Layout10_3_3 = new QHBoxLayout( 0, 0, 6, "Layout10_3_3"); 

    TextLabel3_3_3 = new QLabel( groupBox25_3, "TextLabel3_3_3" );
    Layout10_3_3->addWidget( TextLabel3_3_3 );

    computerSizeSpin = new QSpinBox( groupBox25_3, "computerSizeSpin" );
    computerSizeSpin->setMaximumSize( QSize( 60, 32767 ) );
    computerSizeSpin->setMaxValue( 36 );
    computerSizeSpin->setMinValue( 4 );
    computerSizeSpin->setValue( 19 );
    Layout10_3_3->addWidget( computerSizeSpin );

    groupBox25_3Layout->addLayout( Layout10_3_3, 0, 0 );

    ComputerGoTabWidgetLayout->addWidget( groupBox25_3, 2, 0 );
    tabWidget->insertTab( ComputerGoTabWidget, QString::fromLatin1("") );

    SGFTabWidget = new QWidget( tabWidget, "SGFTabWidget" );
    SGFTabWidgetLayout = new QGridLayout( SGFTabWidget, 1, 1, 11, 6, "SGFTabWidgetLayout"); 

    Frame6 = new QFrame( SGFTabWidget, "Frame6" );
    Frame6->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, Frame6->sizePolicy().hasHeightForWidth() ) );
    Frame6->setMaximumSize( QSize( 32767, 32767 ) );
    QPalette pal;
    QColorGroup cg;
    cg.setColor( QColorGroup::Foreground, black );
    cg.setColor( QColorGroup::Button, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 233, 229, 220) );
    cg.setColor( QColorGroup::Dark, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Mid, QColor( 141, 138, 133) );
    cg.setColor( QColorGroup::Text, black );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, black );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::Shadow, QColor( 64, 64, 64) );
    cg.setColor( QColorGroup::Highlight, QColor( 10, 36, 106) );
    cg.setColor( QColorGroup::HighlightedText, white );
    cg.setColor( QColorGroup::Link, black );
    cg.setColor( QColorGroup::LinkVisited, black );
    pal.setActive( cg );
    cg.setColor( QColorGroup::Foreground, black );
    cg.setColor( QColorGroup::Button, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 233, 229, 220) );
    cg.setColor( QColorGroup::Dark, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Mid, QColor( 141, 138, 133) );
    cg.setColor( QColorGroup::Text, black );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, black );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::Shadow, QColor( 64, 64, 64) );
    cg.setColor( QColorGroup::Highlight, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::HighlightedText, black );
    cg.setColor( QColorGroup::Link, black );
    cg.setColor( QColorGroup::LinkVisited, black );
    pal.setInactive( cg );
    cg.setColor( QColorGroup::Foreground, QColor( 106, 104, 100) );
    cg.setColor( QColorGroup::Button, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 233, 231, 227) );
    cg.setColor( QColorGroup::Dark, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Mid, QColor( 141, 138, 133) );
    cg.setColor( QColorGroup::Text, QColor( 106, 104, 100) );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, QColor( 106, 104, 100) );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 10, 36, 106) );
    cg.setColor( QColorGroup::HighlightedText, white );
    cg.setColor( QColorGroup::Link, black );
    cg.setColor( QColorGroup::LinkVisited, black );
    pal.setDisabled( cg );
    Frame6->setPalette( pal );
    Frame6->setFocusPolicy( QFrame::NoFocus );
    Frame6->setFrameShape( QFrame::StyledPanel );
    Frame6->setFrameShadow( QFrame::Raised );
    Frame6Layout = new QHBoxLayout( Frame6, 11, 6, "Frame6Layout"); 

    TextLabel1_4 = new QLabel( Frame6, "TextLabel1_4" );
    TextLabel1_4->setMinimumSize( QSize( 80, 0 ) );
    Frame6Layout->addWidget( TextLabel1_4 );

    codecListBox = new QListBox( Frame6, "codecListBox" );
    codecListBox->setMinimumSize( QSize( 0, 80 ) );
    codecListBox->setMaximumSize( QSize( 180, 32767 ) );
    Frame6Layout->addWidget( codecListBox );
    Spacer7_2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Frame6Layout->addItem( Spacer7_2 );

    SGFTabWidgetLayout->addMultiCellWidget( Frame6, 1, 1, 0, 1 );

    Frame5 = new QFrame( SGFTabWidget, "Frame5" );
    Frame5->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, Frame5->sizePolicy().hasHeightForWidth() ) );
    Frame5->setMaximumSize( QSize( 32767, 32767 ) );
    Frame5->setFocusPolicy( QFrame::NoFocus );
    Frame5->setFrameShape( QFrame::StyledPanel );
    Frame5->setFrameShadow( QFrame::Raised );
    Frame5Layout = new QVBoxLayout( Frame5, 11, 6, "Frame5Layout"); 

    fastLoadCheckBox = new QCheckBox( Frame5, "fastLoadCheckBox" );
    Frame5Layout->addWidget( fastLoadCheckBox );

    TextLabel1_2 = new QLabel( Frame5, "TextLabel1_2" );
    TextLabel1_2->setFrameShape( QLabel::Panel );
    TextLabel1_2->setFrameShadow( QLabel::Raised );
    TextLabel1_2->setLineWidth( 1 );
    TextLabel1_2->setAlignment( int( QLabel::WordBreak | QLabel::AlignTop | QLabel::AlignLeft ) );
    Frame5Layout->addWidget( TextLabel1_2 );

    SGFTabWidgetLayout->addMultiCellWidget( Frame5, 2, 2, 0, 1 );

    groupBox26 = new QGroupBox( SGFTabWidget, "groupBox26" );

    addBrotherCheckBox = new QCheckBox( groupBox26, "addBrotherCheckBox" );
    addBrotherCheckBox->setGeometry( QRect( 10, 20, 240, 19 ) );

    SGFTabWidgetLayout->addWidget( groupBox26, 3, 1 );

    Frame4 = new QFrame( SGFTabWidget, "Frame4" );
    Frame4->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, Frame4->sizePolicy().hasHeightForWidth() ) );
    Frame4->setMaximumSize( QSize( 32767, 32767 ) );
    Frame4->setFocusPolicy( QFrame::NoFocus );
    Frame4->setFrameShape( QFrame::StyledPanel );
    Frame4->setFrameShadow( QFrame::Raised );
    Frame4Layout = new QGridLayout( Frame4, 1, 1, 11, 6, "Frame4Layout"); 

    rememberDirCheckBox = new QCheckBox( Frame4, "rememberDirCheckBox" );

    Frame4Layout->addWidget( rememberDirCheckBox, 0, 0 );

    SGFTabWidgetLayout->addMultiCellWidget( Frame4, 0, 0, 0, 1 );

    GroupBox4 = new QGroupBox( SGFTabWidget, "GroupBox4" );
    GroupBox4->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)1, 0, 0, GroupBox4->sizePolicy().hasHeightForWidth() ) );
    GroupBox4->setColumnLayout(0, Qt::Vertical );
    GroupBox4->layout()->setSpacing( 6 );
    GroupBox4->layout()->setMargin( 6 );
    GroupBox4Layout = new QVBoxLayout( GroupBox4->layout() );
    GroupBox4Layout->setAlignment( Qt::AlignTop );

    Layout4 = new QHBoxLayout( 0, 0, 6, "Layout4"); 

    TextLabel1 = new QLabel( GroupBox4, "TextLabel1" );
    TextLabel1->setMinimumSize( QSize( 120, 0 ) );
    Layout4->addWidget( TextLabel1 );

    blackStoneEdit = new QLineEdit( GroupBox4, "blackStoneEdit" );
    blackStoneEdit->setMaximumSize( QSize( 30, 32767 ) );
    blackStoneEdit->setMaxLength( 1 );
    Layout4->addWidget( blackStoneEdit );
    GroupBox4Layout->addLayout( Layout4 );

    Layout5 = new QHBoxLayout( 0, 0, 6, "Layout5"); 

    TextLabel2_2 = new QLabel( GroupBox4, "TextLabel2_2" );
    TextLabel2_2->setMinimumSize( QSize( 120, 0 ) );
    Layout5->addWidget( TextLabel2_2 );

    whiteStoneEdit = new QLineEdit( GroupBox4, "whiteStoneEdit" );
    whiteStoneEdit->setMaximumSize( QSize( 30, 32767 ) );
    whiteStoneEdit->setMaxLength( 1 );
    Layout5->addWidget( whiteStoneEdit );
    GroupBox4Layout->addLayout( Layout5 );

    Layout6 = new QHBoxLayout( 0, 0, 6, "Layout6"); 

    TextLabel3 = new QLabel( GroupBox4, "TextLabel3" );
    TextLabel3->setMinimumSize( QSize( 120, 0 ) );
    Layout6->addWidget( TextLabel3 );

    starPointEdit = new QLineEdit( GroupBox4, "starPointEdit" );
    starPointEdit->setMaximumSize( QSize( 30, 32767 ) );
    starPointEdit->setMaxLength( 1 );
    Layout6->addWidget( starPointEdit );
    GroupBox4Layout->addLayout( Layout6 );

    Layout7 = new QHBoxLayout( 0, 0, 6, "Layout7"); 

    TextLabel4 = new QLabel( GroupBox4, "TextLabel4" );
    TextLabel4->setMinimumSize( QSize( 120, 0 ) );
    Layout7->addWidget( TextLabel4 );

    emptyPointEdit = new QLineEdit( GroupBox4, "emptyPointEdit" );
    emptyPointEdit->setMaximumSize( QSize( 30, 32767 ) );
    emptyPointEdit->setMaxLength( 1 );
    Layout7->addWidget( emptyPointEdit );
    GroupBox4Layout->addLayout( Layout7 );

    Layout11 = new QHBoxLayout( 0, 0, 6, "Layout11"); 

    TextLabel1_3 = new QLabel( GroupBox4, "TextLabel1_3" );
    TextLabel1_3->setMinimumSize( QSize( 120, 0 ) );
    Layout11->addWidget( TextLabel1_3 );

    hBorderEdit = new QLineEdit( GroupBox4, "hBorderEdit" );
    hBorderEdit->setMaximumSize( QSize( 30, 32767 ) );
    hBorderEdit->setMaxLength( 1 );
    Layout11->addWidget( hBorderEdit );
    GroupBox4Layout->addLayout( Layout11 );

    Layout10 = new QHBoxLayout( 0, 0, 6, "Layout10"); 

    TextLabel2_3 = new QLabel( GroupBox4, "TextLabel2_3" );
    TextLabel2_3->setMinimumSize( QSize( 120, 0 ) );
    Layout10->addWidget( TextLabel2_3 );

    vBorderEdit = new QLineEdit( GroupBox4, "vBorderEdit" );
    vBorderEdit->setMaximumSize( QSize( 30, 32767 ) );
    vBorderEdit->setMaxLength( 1 );
    Layout10->addWidget( vBorderEdit );
    GroupBox4Layout->addLayout( Layout10 );

    SGFTabWidgetLayout->addMultiCellWidget( GroupBox4, 3, 4, 0, 0 );
    spacer10 = new QSpacerItem( 20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding );
    SGFTabWidgetLayout->addItem( spacer10, 4, 1 );
    tabWidget->insertTab( SGFTabWidget, QString::fromLatin1("") );

    goServerTabWidget = new QWidget( tabWidget, "goServerTabWidget" );
    goServerTabWidgetLayout = new QGridLayout( goServerTabWidget, 1, 1, 11, 6, "goServerTabWidgetLayout"); 

    layout47 = new QHBoxLayout( 0, 0, 6, "layout47"); 

    textLabel1_3 = new QLabel( goServerTabWidget, "textLabel1_3" );
    textLabel1_3->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)5, 0, 0, textLabel1_3->sizePolicy().hasHeightForWidth() ) );
    textLabel1_3->setMinimumSize( QSize( 70, 0 ) );
    layout47->addWidget( textLabel1_3 );

    ComboBox_codec = new QComboBox( FALSE, goServerTabWidget, "ComboBox_codec" );
    ComboBox_codec->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)0, 0, 0, ComboBox_codec->sizePolicy().hasHeightForWidth() ) );
    ComboBox_codec->setEditable( TRUE );
    ComboBox_codec->setDuplicatesEnabled( FALSE );
    layout47->addWidget( ComboBox_codec );

    goServerTabWidgetLayout->addLayout( layout47, 5, 0 );

    Layout9_2 = new QHBoxLayout( 0, 0, 6, "Layout9_2"); 

    TextLabel1_title = new QLabel( goServerTabWidget, "TextLabel1_title" );
    TextLabel1_title->setMinimumSize( QSize( 70, 0 ) );
    Layout9_2->addWidget( TextLabel1_title );

    LineEdit_title = new QLineEdit( goServerTabWidget, "LineEdit_title" );
    Layout9_2->addWidget( LineEdit_title );

    goServerTabWidgetLayout->addLayout( Layout9_2, 0, 0 );

    Layout14 = new QHBoxLayout( 0, 0, 6, "Layout14"); 

    TextLabel1_5 = new QLabel( goServerTabWidget, "TextLabel1_5" );
    TextLabel1_5->setMinimumSize( QSize( 70, 0 ) );
    Layout14->addWidget( TextLabel1_5 );

    LineEdit_host = new QLineEdit( goServerTabWidget, "LineEdit_host" );
    Layout14->addWidget( LineEdit_host );

    goServerTabWidgetLayout->addLayout( Layout14, 1, 0 );

    Layout16 = new QHBoxLayout( 0, 0, 6, "Layout16"); 

    TextLabel2_4 = new QLabel( goServerTabWidget, "TextLabel2_4" );
    TextLabel2_4->setMinimumSize( QSize( 70, 0 ) );
    Layout16->addWidget( TextLabel2_4 );

    LineEdit_port = new QLineEdit( goServerTabWidget, "LineEdit_port" );
    LineEdit_port->setMaxLength( 4 );
    Layout16->addWidget( LineEdit_port );

    goServerTabWidgetLayout->addLayout( Layout16, 2, 0 );

    Layout17_3 = new QHBoxLayout( 0, 0, 6, "Layout17_3"); 

    TextLabel3_2 = new QLabel( goServerTabWidget, "TextLabel3_2" );
    TextLabel3_2->setMinimumSize( QSize( 70, 0 ) );
    Layout17_3->addWidget( TextLabel3_2 );

    LineEdit_login = new QLineEdit( goServerTabWidget, "LineEdit_login" );
    Layout17_3->addWidget( LineEdit_login );

    goServerTabWidgetLayout->addLayout( Layout17_3, 3, 0 );

    Layout18_3 = new QHBoxLayout( 0, 0, 6, "Layout18_3"); 

    TextLabel4_2 = new QLabel( goServerTabWidget, "TextLabel4_2" );
    TextLabel4_2->setMinimumSize( QSize( 70, 0 ) );
    Layout18_3->addWidget( TextLabel4_2 );

    LineEdit_pass = new QLineEdit( goServerTabWidget, "LineEdit_pass" );
    LineEdit_pass->setEchoMode( QLineEdit::Password );
    Layout18_3->addWidget( LineEdit_pass );

    goServerTabWidgetLayout->addLayout( Layout18_3, 4, 0 );

    Line4 = new QFrame( goServerTabWidget, "Line4" );
    Line4->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, Line4->sizePolicy().hasHeightForWidth() ) );
    Line4->setMaximumSize( QSize( 32767, 32767 ) );
    cg.setColor( QColorGroup::Foreground, black );
    cg.setColor( QColorGroup::Button, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 233, 229, 220) );
    cg.setColor( QColorGroup::Dark, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Mid, QColor( 141, 138, 133) );
    cg.setColor( QColorGroup::Text, black );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, black );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::Shadow, QColor( 64, 64, 64) );
    cg.setColor( QColorGroup::Highlight, QColor( 10, 36, 106) );
    cg.setColor( QColorGroup::HighlightedText, white );
    cg.setColor( QColorGroup::Link, black );
    cg.setColor( QColorGroup::LinkVisited, black );
    pal.setActive( cg );
    cg.setColor( QColorGroup::Foreground, black );
    cg.setColor( QColorGroup::Button, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 233, 229, 220) );
    cg.setColor( QColorGroup::Dark, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Mid, QColor( 141, 138, 133) );
    cg.setColor( QColorGroup::Text, black );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, black );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::Shadow, QColor( 64, 64, 64) );
    cg.setColor( QColorGroup::Highlight, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::HighlightedText, black );
    cg.setColor( QColorGroup::Link, black );
    cg.setColor( QColorGroup::LinkVisited, black );
    pal.setInactive( cg );
    cg.setColor( QColorGroup::Foreground, QColor( 106, 104, 100) );
    cg.setColor( QColorGroup::Button, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 233, 231, 227) );
    cg.setColor( QColorGroup::Dark, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Mid, QColor( 141, 138, 133) );
    cg.setColor( QColorGroup::Text, QColor( 106, 104, 100) );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, QColor( 106, 104, 100) );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, QColor( 212, 208, 200) );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 10, 36, 106) );
    cg.setColor( QColorGroup::HighlightedText, white );
    cg.setColor( QColorGroup::Link, black );
    cg.setColor( QColorGroup::LinkVisited, black );
    pal.setDisabled( cg );
    Line4->setPalette( pal );
    QFont Line4_font(  Line4->font() );
    Line4->setFont( Line4_font ); 
    Line4->setFocusPolicy( QFrame::NoFocus );
    Line4->setFrameShape( QFrame::HLine );
    Line4->setFrameShadow( QFrame::Sunken );
    Line4->setFrameShape( QFrame::HLine );

    goServerTabWidgetLayout->addWidget( Line4, 6, 0 );

    Layout39 = new QHBoxLayout( 0, 0, 6, "Layout39"); 
    Spacer3 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout39->addItem( Spacer3 );

    Layout35 = new QVBoxLayout( 0, 0, 6, "Layout35"); 

    pb_new = new QPushButton( goServerTabWidget, "pb_new" );
    pb_new->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)0, 0, 0, pb_new->sizePolicy().hasHeightForWidth() ) );
    Layout35->addWidget( pb_new );

    Layout34 = new QHBoxLayout( 0, 0, 6, "Layout34"); 

    pb_add = new QPushButton( goServerTabWidget, "pb_add" );
    Layout34->addWidget( pb_add );

    pb_delete = new QPushButton( goServerTabWidget, "pb_delete" );
    Layout34->addWidget( pb_delete );
    Layout35->addLayout( Layout34 );
    Layout39->addLayout( Layout35 );

    goServerTabWidgetLayout->addLayout( Layout39, 7, 0 );

    ListView_hosts = new QListView( goServerTabWidget, "ListView_hosts" );
    ListView_hosts->addColumn( tr( "Title" ) );
    ListView_hosts->addColumn( tr( "Host" ) );
    ListView_hosts->addColumn( tr( "Port" ) );
    ListView_hosts->addColumn( tr( "Name" ) );
    ListView_hosts->addColumn( tr( "Password" ) );
    ListView_hosts->setResizePolicy( QListView::AutoOneFit );
    ListView_hosts->setAllColumnsShowFocus( TRUE );

    goServerTabWidgetLayout->addMultiCellWidget( ListView_hosts, 0, 7, 1, 1 );

    IGSgroup_box = new QGroupBox( goServerTabWidget, "IGSgroup_box" );
    IGSgroup_box->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)1, 0, 0, IGSgroup_box->sizePolicy().hasHeightForWidth() ) );
    IGSgroup_box->setColumnLayout(0, Qt::Vertical );
    IGSgroup_box->layout()->setSpacing( 6 );
    IGSgroup_box->layout()->setMargin( 11 );
    IGSgroup_boxLayout = new QGridLayout( IGSgroup_box->layout() );
    IGSgroup_boxLayout->setAlignment( Qt::AlignTop );

    CheckBox_extUserInfo = new QCheckBox( IGSgroup_box, "CheckBox_extUserInfo" );
    CheckBox_extUserInfo->setFocusPolicy( QCheckBox::NoFocus );

    IGSgroup_boxLayout->addWidget( CheckBox_extUserInfo, 0, 0 );

    goServerTabWidgetLayout->addWidget( IGSgroup_box, 8, 0 );

    IGSgroup_box_2 = new QGroupBox( goServerTabWidget, "IGSgroup_box_2" );
    IGSgroup_box_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)1, 0, 0, IGSgroup_box_2->sizePolicy().hasHeightForWidth() ) );
    IGSgroup_box_2->setColumnLayout(0, Qt::Vertical );
    IGSgroup_box_2->layout()->setSpacing( 6 );
    IGSgroup_box_2->layout()->setMargin( 11 );
    IGSgroup_box_2Layout = new QHBoxLayout( IGSgroup_box_2->layout() );
    IGSgroup_box_2Layout->setAlignment( Qt::AlignTop );

    CheckBox_autoSave = new QCheckBox( IGSgroup_box_2, "CheckBox_autoSave" );
    CheckBox_autoSave->setFocusPolicy( QCheckBox::NoFocus );
    IGSgroup_box_2Layout->addWidget( CheckBox_autoSave );
    spacer12 = new QSpacerItem( 21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    IGSgroup_box_2Layout->addItem( spacer12 );

    CheckBox_autoSave_Played = new QCheckBox( IGSgroup_box_2, "CheckBox_autoSave_Played" );
    CheckBox_autoSave_Played->setFocusPolicy( QCheckBox::NoFocus );
    IGSgroup_box_2Layout->addWidget( CheckBox_autoSave_Played );

    goServerTabWidgetLayout->addWidget( IGSgroup_box_2, 8, 1 );

    special_players = new QGroupBox( goServerTabWidget, "special_players" );
    special_players->setColumnLayout(0, Qt::Vertical );
    special_players->layout()->setSpacing( 6 );
    special_players->layout()->setMargin( 11 );
    special_playersLayout = new QGridLayout( special_players->layout() );
    special_playersLayout->setAlignment( Qt::AlignTop );

    TextLabel_watch = new QLabel( special_players, "TextLabel_watch" );

    special_playersLayout->addWidget( TextLabel_watch, 0, 0 );

    LineEdit_watch = new QLineEdit( special_players, "LineEdit_watch" );
    LineEdit_watch->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)0, 0, 0, LineEdit_watch->sizePolicy().hasHeightForWidth() ) );

    special_playersLayout->addWidget( LineEdit_watch, 0, 1 );

    LineEdit_exclude = new QLineEdit( special_players, "LineEdit_exclude" );
    LineEdit_exclude->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)0, 0, 0, LineEdit_exclude->sizePolicy().hasHeightForWidth() ) );

    special_playersLayout->addWidget( LineEdit_exclude, 1, 1 );

    TextLabel_exclude = new QLabel( special_players, "TextLabel_exclude" );

    special_playersLayout->addWidget( TextLabel_exclude, 1, 0 );

    goServerTabWidgetLayout->addMultiCellWidget( special_players, 9, 9, 0, 1 );

    groupBox25 = new QGroupBox( goServerTabWidget, "groupBox25" );
    groupBox25->setColumnLayout(0, Qt::Vertical );
    groupBox25->layout()->setSpacing( 6 );
    groupBox25->layout()->setMargin( 11 );
    groupBox25Layout = new QHBoxLayout( groupBox25->layout() );
    groupBox25Layout->setAlignment( Qt::AlignTop );

    layout61 = new QVBoxLayout( 0, 0, 6, "layout61"); 

    textLabel1_4 = new QLabel( groupBox25, "textLabel1_4" );
    textLabel1_4->setAlignment( int( QLabel::AlignCenter ) );
    layout61->addWidget( textLabel1_4 );

    layout60 = new QHBoxLayout( 0, 0, 6, "layout60"); 

    layout47_2 = new QVBoxLayout( 0, 0, 6, "layout47_2"); 

    Layout10_3 = new QHBoxLayout( 0, 0, 6, "Layout10_3"); 

    TextLabel3_3 = new QLabel( groupBox25, "TextLabel3_3" );
    TextLabel3_3->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout10_3->addWidget( TextLabel3_3 );

    boardSizeSpin = new QSpinBox( groupBox25, "boardSizeSpin" );
    boardSizeSpin->setMaximumSize( QSize( 60, 32767 ) );
    boardSizeSpin->setMaxValue( 36 );
    boardSizeSpin->setMinValue( 4 );
    boardSizeSpin->setValue( 19 );
    Layout10_3->addWidget( boardSizeSpin );
    layout47_2->addLayout( Layout10_3 );

    Layout10_3_2 = new QHBoxLayout( 0, 0, 6, "Layout10_3_2"); 

    TextLabel3_3_2 = new QLabel( groupBox25, "TextLabel3_3_2" );
    TextLabel3_3_2->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout10_3_2->addWidget( TextLabel3_3_2 );

    komiSpinDefault = new QSpinBox( groupBox25, "komiSpinDefault" );
    komiSpinDefault->setMaximumSize( QSize( 60, 32767 ) );
    komiSpinDefault->setMaxValue( 200 );
    komiSpinDefault->setMinValue( -200 );
    komiSpinDefault->setValue( 6 );
    Layout10_3_2->addWidget( komiSpinDefault );
    layout47_2->addLayout( Layout10_3_2 );

    automaticNegotiationCheckBox = new QCheckBox( groupBox25, "automaticNegotiationCheckBox" );
    layout47_2->addWidget( automaticNegotiationCheckBox );
    layout60->addLayout( layout47_2 );

    line2 = new QFrame( groupBox25, "line2" );
    line2->setFrameShape( QFrame::VLine );
    line2->setFrameShadow( QFrame::Sunken );
    line2->setFrameShape( QFrame::VLine );
    layout60->addWidget( line2 );

    layout48 = new QVBoxLayout( 0, 0, 6, "layout48"); 

    Layout13 = new QHBoxLayout( 0, 0, 6, "Layout13"); 

    TextLabel6 = new QLabel( groupBox25, "TextLabel6" );
    TextLabel6->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout13->addWidget( TextLabel6 );

    timeSpin = new QSpinBox( groupBox25, "timeSpin" );
    timeSpin->setMaximumSize( QSize( 60, 32767 ) );
    timeSpin->setMaxValue( 99 );
    timeSpin->setMinValue( 0 );
    timeSpin->setValue( 10 );
    Layout13->addWidget( timeSpin );
    layout48->addLayout( Layout13 );

    Layout12_2 = new QHBoxLayout( 0, 0, 6, "Layout12_2"); 

    TextLabel7 = new QLabel( groupBox25, "TextLabel7" );
    TextLabel7->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout12_2->addWidget( TextLabel7 );

    BYSpin = new QSpinBox( groupBox25, "BYSpin" );
    BYSpin->setMaximumSize( QSize( 60, 32767 ) );
    BYSpin->setMaxValue( 60 );
    BYSpin->setValue( 10 );
    Layout12_2->addWidget( BYSpin );
    layout48->addLayout( Layout12_2 );
    layout60->addLayout( layout48 );
    layout61->addLayout( layout60 );
    groupBox25Layout->addLayout( layout61 );

    line2_2 = new QFrame( groupBox25, "line2_2" );
    line2_2->setFrameShape( QFrame::VLine );
    line2_2->setFrameShadow( QFrame::Sunken );
    line2_2->setFrameShape( QFrame::VLine );
    groupBox25Layout->addWidget( line2_2 );

    layout127 = new QVBoxLayout( 0, 0, 6, "layout127"); 

    textLabel1_4_2 = new QLabel( groupBox25, "textLabel1_4_2" );
    textLabel1_4_2->setAlignment( int( QLabel::AlignCenter ) );
    layout127->addWidget( textLabel1_4_2 );

    layout126 = new QHBoxLayout( 0, 0, 6, "layout126"); 

    layout48_2 = new QVBoxLayout( 0, 0, 6, "layout48_2"); 

    Layout13_3 = new QHBoxLayout( 0, 0, 6, "Layout13_3"); 

    TextLabel6_3 = new QLabel( groupBox25, "TextLabel6_3" );
    TextLabel6_3->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout13_3->addWidget( TextLabel6_3 );

    timeSpin_Nmatch = new QSpinBox( groupBox25, "timeSpin_Nmatch" );
    timeSpin_Nmatch->setMaximumSize( QSize( 60, 32767 ) );
    timeSpin_Nmatch->setMaxValue( 99 );
    timeSpin_Nmatch->setMinValue( 0 );
    timeSpin_Nmatch->setValue( 10 );
    Layout13_3->addWidget( timeSpin_Nmatch );
    layout48_2->addLayout( Layout13_3 );

    Layout12_2_2 = new QHBoxLayout( 0, 0, 6, "Layout12_2_2"); 

    TextLabel7_2 = new QLabel( groupBox25, "TextLabel7_2" );
    TextLabel7_2->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout12_2_2->addWidget( TextLabel7_2 );

    BYSpin_Nmatch = new QSpinBox( groupBox25, "BYSpin_Nmatch" );
    BYSpin_Nmatch->setMaximumSize( QSize( 60, 32767 ) );
    BYSpin_Nmatch->setMaxValue( 60 );
    BYSpin_Nmatch->setValue( 10 );
    Layout12_2_2->addWidget( BYSpin_Nmatch );
    layout48_2->addLayout( Layout12_2_2 );
    layout126->addLayout( layout48_2 );

    line2_3 = new QFrame( groupBox25, "line2_3" );
    line2_3->setFrameShape( QFrame::VLine );
    line2_3->setFrameShadow( QFrame::Sunken );
    line2_3->setFrameShape( QFrame::VLine );
    layout126->addWidget( line2_3 );

    layout125 = new QVBoxLayout( 0, 0, 6, "layout125"); 

    layout124 = new QHBoxLayout( 0, 0, 6, "layout124"); 

    textLabel2 = new QLabel( groupBox25, "textLabel2" );
    layout124->addWidget( textLabel2 );

    layout123 = new QVBoxLayout( 0, 0, 0, "layout123"); 

    checkBox_Nmatch_Black = new QCheckBox( groupBox25, "checkBox_Nmatch_Black" );
    layout123->addWidget( checkBox_Nmatch_Black );

    checkBox_Nmatch_White = new QCheckBox( groupBox25, "checkBox_Nmatch_White" );
    layout123->addWidget( checkBox_Nmatch_White );

    checkBox_Nmatch_Nigiri = new QCheckBox( groupBox25, "checkBox_Nmatch_Nigiri" );
    layout123->addWidget( checkBox_Nmatch_Nigiri );
    layout124->addLayout( layout123 );
    layout125->addLayout( layout124 );

    Layout10_3_4 = new QHBoxLayout( 0, 0, 6, "Layout10_3_4"); 

    TextLabel3_3_4 = new QLabel( groupBox25, "TextLabel3_3_4" );
    TextLabel3_3_4->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout10_3_4->addWidget( TextLabel3_3_4 );

    HandicapSpin_Nmatch = new QSpinBox( groupBox25, "HandicapSpin_Nmatch" );
    HandicapSpin_Nmatch->setMaximumSize( QSize( 60, 32767 ) );
    HandicapSpin_Nmatch->setMaxValue( 9 );
    HandicapSpin_Nmatch->setMinValue( 0 );
    HandicapSpin_Nmatch->setValue( 9 );
    Layout10_3_4->addWidget( HandicapSpin_Nmatch );
    layout125->addLayout( Layout10_3_4 );
    layout126->addLayout( layout125 );
    layout127->addLayout( layout126 );
    groupBox25Layout->addLayout( layout127 );

    goServerTabWidgetLayout->addMultiCellWidget( groupBox25, 10, 10, 0, 1 );
    tabWidget->insertTab( goServerTabWidget, QString::fromLatin1("") );

    PreferencesDialogGuiLayout->addWidget( tabWidget, 0, 0 );
    languageChange();
    resize( QSize(619, 618).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonApply, SIGNAL( clicked() ), this, SLOT( slot_apply() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( slot_reject() ) );
    connect( ButtonGroup3, SIGNAL( clicked(int) ), this, SLOT( selectFont(int) ) );
    connect( buttonHelp, SIGNAL( clicked() ), this, SLOT( startHelpMode() ) );
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( slot_accept() ) );
    connect( colorAltBackgroundButton, SIGNAL( clicked() ), this, SLOT( selectAltColor() ) );
    connect( colorBackgroundButton, SIGNAL( clicked() ), this, SLOT( selectColor() ) );
    connect( ComputerPathButton, SIGNAL( clicked() ), this, SLOT( slot_getComputerPath() ) );
    connect( GobanPicturePathButton, SIGNAL( clicked() ), this, SLOT( slot_getGobanPicturePath() ) );
    connect( LineEdit_label, SIGNAL( textChanged(const QString&) ), this, SLOT( slot_text_buttonChanged(const QString&) ) );
    connect( LineEdit_title, SIGNAL( textChanged(const QString&) ), this, SLOT( slot_textChanged(const QString&) ) );
    connect( ListView_buttons, SIGNAL( clicked(QListViewItem*,const QPoint&,int) ), this, SLOT( slot_clicked_buttonListView(QListViewItem*,const QPoint&,int) ) );
    connect( ListView_hosts, SIGNAL( clicked(QListViewItem*,const QPoint&,int) ), this, SLOT( slot_clickedListView(QListViewItem*,const QPoint&,int) ) );
    connect( pb_add, SIGNAL( clicked() ), this, SLOT( slot_add() ) );
    connect( pb_add_2, SIGNAL( clicked() ), this, SLOT( slot_add_button() ) );
    connect( pb_delete, SIGNAL( clicked() ), this, SLOT( slot_delete() ) );
    connect( pb_delete_2, SIGNAL( clicked() ), this, SLOT( slot_delete_button() ) );
    connect( pb_new, SIGNAL( clicked() ), this, SLOT( slot_new() ) );
    connect( pb_new_2, SIGNAL( clicked() ), this, SLOT( slot_new_button() ) );
    connect( PixmapPathButton, SIGNAL( clicked() ), this, SLOT( slot_getPixmapPath() ) );
    connect( soundButtonGroups, SIGNAL( clicked(int) ), this, SLOT( slot_clickedSoundCheckBox(int) ) );
    connect( TablePicturePathButton, SIGNAL( clicked() ), this, SLOT( slot_getTablePicturePath() ) );
    connect( timeSpin, SIGNAL( valueChanged(int) ), this, SLOT( slot_main_time_changed(int) ) );
    connect( BYSpin, SIGNAL( valueChanged(int) ), this, SLOT( slot_BY_time_changed(int) ) );

    // tab order
    setTabOrder( tabWidget, languageComboBox );
    setTabOrder( languageComboBox, fontMarksButton );
    setTabOrder( fontMarksButton, stoneSoundCheckBox );
    setTabOrder( stoneSoundCheckBox, autoplaySoundCheckBox );
    setTabOrder( autoplaySoundCheckBox, buttonHelp );
    setTabOrder( buttonHelp, buttonApply );
    setTabOrder( buttonApply, buttonOk );
    setTabOrder( buttonOk, buttonCancel );
    setTabOrder( buttonCancel, rememberDirCheckBox );
    setTabOrder( rememberDirCheckBox, codecListBox );
    setTabOrder( codecListBox, fastLoadCheckBox );
    setTabOrder( fastLoadCheckBox, timeSoundCheckBox );
    setTabOrder( timeSoundCheckBox, passSoundCheckBox );
    setTabOrder( passSoundCheckBox, talkSoundCheckBox );
    setTabOrder( talkSoundCheckBox, gameEndSoundCheckBox );
    setTabOrder( gameEndSoundCheckBox, saySoundCheckBox );
    setTabOrder( saySoundCheckBox, enterSoundCheckBox );
    setTabOrder( enterSoundCheckBox, leaveSoundCheckBox );
    setTabOrder( leaveSoundCheckBox, disConnectSoundCheckBox );
    setTabOrder( disConnectSoundCheckBox, connectSoundCheckBox );
    setTabOrder( connectSoundCheckBox, matchSoundCheckBox );
    setTabOrder( matchSoundCheckBox, fontStandardButton );
    setTabOrder( fontStandardButton, fontCommentsButton );
    setTabOrder( fontCommentsButton, fontListsButton );
    setTabOrder( fontListsButton, fontClocksButton );
    setTabOrder( fontClocksButton, fontConsoleButton );
    setTabOrder( fontConsoleButton, colorBackgroundButton );
}

/*
 *  Destroys the object and frees any allocated resources
 */
PreferencesDialogGui::~PreferencesDialogGui()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void PreferencesDialogGui::languageChange()
{
    setCaption( tr( "Preferences" ) );
    buttonHelp->setText( QString::null );
    buttonApply->setText( tr( "&Apply" ) );
    buttonApply->setAccel( QKeySequence( tr( "Alt+A" ) ) );
    buttonOk->setText( tr( "&OK" ) );
    buttonOk->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    QToolTip::add( buttonOk, tr( "remember that point for fast return" ) );
    QWhatsThis::add( buttonOk, tr( "push button at starting point to enable remembering.\n"
"After placing and/or undo release button for returning to starting point automatically." ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    buttonCancel->setAccel( QKeySequence( tr( "Alt+C" ) ) );
    QToolTip::add( buttonCancel, tr( "cancel changes" ) );
    QWhatsThis::add( buttonCancel, tr( "cancel changes" ) );
    tabWidget->setCaption( QString::null );
    ButtonGroup3->setTitle( tr( "Font" ) );
    fontLabel_standard->setText( tr( "font: standard" ) );
    QToolTip::add( fontLabel_standard, tr( "Current font" ) );
    fontStandardButton->setText( QString::null );
    QToolTip::add( fontStandardButton, tr( "Select new font" ) );
    QWhatsThis::add( fontStandardButton, tr( "Select new font\n"
"\n"
"Select the font for the application." ) );
    fontLabel_marks->setText( tr( "font: marks" ) );
    QToolTip::add( fontLabel_marks, tr( "Current font" ) );
    fontMarksButton->setText( QString::null );
    QToolTip::add( fontMarksButton, tr( "Select new font" ) );
    QWhatsThis::add( fontMarksButton, tr( "Select new font\n"
"\n"
"Select the font for marks on the board." ) );
    fontLabel_comments->setText( tr( "font: comments" ) );
    QToolTip::add( fontLabel_comments, tr( "Current font" ) );
    fontCommentsButton->setText( QString::null );
    QToolTip::add( fontCommentsButton, tr( "Select new font" ) );
    QWhatsThis::add( fontCommentsButton, tr( "Select new font\n"
"\n"
"Select font used in all text input/output fields." ) );
    fontLabel_lists->setText( tr( "font: lists" ) );
    QToolTip::add( fontLabel_lists, tr( "Current font" ) );
    fontListsButton->setText( QString::null );
    QToolTip::add( fontListsButton, tr( "Select new font" ) );
    QWhatsThis::add( fontListsButton, tr( "Select new font\n"
"\n"
"Select the font for lists." ) );
    fontLabel_lists_2->setText( tr( "font: clocks" ) );
    QToolTip::add( fontLabel_lists_2, tr( "Current font" ) );
    fontClocksButton->setText( QString::null );
    QToolTip::add( fontClocksButton, tr( "Select new font" ) );
    QWhatsThis::add( fontClocksButton, tr( "Select new font\n"
"\n"
"Select the font for the clocks." ) );
    fontLabel_console->setText( tr( "font: console" ) );
    QToolTip::add( fontLabel_console, tr( "font for the server console" ) );
    fontConsoleButton->setText( QString::null );
    QToolTip::add( fontConsoleButton, tr( "Select new font" ) );
    QWhatsThis::add( fontConsoleButton, tr( "Select new font\n"
"\n"
"Select the font for the server console (fixed font preferably)." ) );
    groupBox27->setTitle( tr( "User buttons toolbar" ) );
    pb_new_2->setText( tr( "New" ) );
    QToolTip::add( pb_new_2, tr( "clear form" ) );
    QWhatsThis::add( pb_new_2, tr( "New\n"
"\n"
"clear form; doesn't make any changes to the entries" ) );
    pb_add_2->setText( tr( "Add" ) );
    QToolTip::add( pb_add_2, tr( "add/change current entry" ) );
    QWhatsThis::add( pb_add_2, tr( "Add or Change\n"
"\n"
"Label 'Change ' appears when title is not unique, i.e. the saved entries with that title will be superseded by the current entries.\n"
"\n"
"Label 'Add' is default. The given entries will be saved under the given title." ) );
    pb_delete_2->setText( tr( "Delete" ) );
    QToolTip::add( pb_delete_2, tr( "delete current entry" ) );
    QWhatsThis::add( pb_delete_2, tr( "Delete\n"
"\n"
"Deletes the saved entries with same label\n"
"\n"
"Note: 'Delete' concerns saved records." ) );
    TextLabel2_4_2->setText( tr( "Help text:" ) );
    QToolTip::add( LineEdit_help, tr( "Help text, displayed as tooltip" ) );
    QWhatsThis::add( LineEdit_help, tr( "help text\n"
"\n"
"This text is displayed as tooltip of the created button" ) );
    TextLabel1_5_2->setText( tr( "Command:" ) );
    QToolTip::add( LineEdit_command, tr( "command passed to the server" ) );
    QWhatsThis::add( LineEdit_command, tr( "command\n"
"\n"
"the command is passed to the server" ) );
    TextLabel3_2_2->setText( tr( "Pixmap file:" ) );
    QToolTip::add( LineEdit_pixfile, tr( "file path to the button pixmap" ) );
    QWhatsThis::add( LineEdit_pixfile, tr( "file path to the button pixmap\n"
"\n"
"Set it with the file chooser" ) );
    PixmapPathButton->setText( QString::null );
    QToolTip::add( PixmapPathButton, tr( "pixmap file chooser" ) );
    TextLabel1_title_2->setText( tr( "Label:" ) );
    QToolTip::add( LineEdit_label, tr( "Button label" ) );
    QWhatsThis::add( LineEdit_label, tr( "unique label, \n"
"\n"
"The label is displayed as button text." ) );
    ListView_buttons->header()->setLabel( 0, tr( "Pixmap" ) );
    ListView_buttons->header()->setLabel( 1, tr( "Label" ) );
    ListView_buttons->header()->setLabel( 2, tr( "Command" ) );
    ListView_buttons->header()->setLabel( 3, tr( "Help Text" ) );
    ListView_buttons->header()->setLabel( 4, QString::null );
    QToolTip::add( ListView_buttons, tr( "User defined button list" ) );
    QWhatsThis::add( ListView_buttons, tr( "Button Entries\n"
"\n"
"Select 'New' to clear input fields. After filling in at least label and command use Add/Change.\n"
"\n"
"Select an entry to edit, change (label keeps unchanged) or delete a line.\n"
"" ) );
    soundButtonGroups->setTitle( tr( "Play sound for" ) );
    saySoundCheckBox->setText( tr( "Say" ) );
    QToolTip::add( saySoundCheckBox, tr( "Play sound for incoming say message while playing a game" ) );
    autoplaySoundCheckBox->setText( tr( "Autoplay" ) );
    QToolTip::add( autoplaySoundCheckBox, tr( "Play sound in autoplay mode" ) );
    QWhatsThis::add( autoplaySoundCheckBox, tr( "Play sound in autoplay mode\n"
"\n"
"Play a sound when a stone is placed in autoplay mode." ) );
    stoneSoundCheckBox->setText( tr( "Stones" ) );
    QToolTip::add( stoneSoundCheckBox, tr( "Play sound when placing a stone" ) );
    QWhatsThis::add( stoneSoundCheckBox, tr( "Play sound when placing a stone\n"
"\n"
"Enable this box when you want to listen a clicking sound when playing a stone on the board." ) );
    enterSoundCheckBox->setText( tr( "Enter" ) );
    QToolTip::add( enterSoundCheckBox, tr( "Play sound when a watched player enters the room" ) );
    disConnectSoundCheckBox->setText( tr( "Disconnect" ) );
    QToolTip::add( disConnectSoundCheckBox, tr( "Play sound when disconnected from server" ) );
    matchSoundCheckBox->setText( tr( "Match" ) );
    QToolTip::add( matchSoundCheckBox, tr( "Play sound for incoming match request" ) );
    timeSoundCheckBox->setText( tr( "Time (secs.)" ) );
    QToolTip::add( timeSoundCheckBox, tr( "Play sound for remaining seconds of own time" ) );
    QWhatsThis::add( timeSoundCheckBox, tr( "Check this box if you want to be warned when Byo Yomi ends.\n"
"You can set the warning time besides" ) );
    BYTimeSpin->setSuffix( QString::null );
    QToolTip::add( BYTimeSpin, tr( "Warning time" ) );
    QWhatsThis::add( BYTimeSpin, tr( "Set this to the number of seconds to which you want to be warned before Byo Yomi ends" ) );
    connectSoundCheckBox->setText( tr( "Connect" ) );
    QToolTip::add( connectSoundCheckBox, tr( "Play sound when connected to server" ) );
    passSoundCheckBox->setText( tr( "Pass" ) );
    QToolTip::add( passSoundCheckBox, tr( "Play sound for pass move" ) );
    leaveSoundCheckBox->setText( tr( "Leave" ) );
    QToolTip::add( leaveSoundCheckBox, tr( "Play sound when a watched player leaves the room" ) );
    talkSoundCheckBox->setText( tr( "Talk" ) );
    QToolTip::add( talkSoundCheckBox, tr( "Play sound for incoming talk message" ) );
    gameEndSoundCheckBox->setText( tr( "Game end" ) );
    QToolTip::add( gameEndSoundCheckBox, tr( "Play sound when played or observed game has ended" ) );
    GroupBox8->setTitle( tr( "Language" ) );
    QToolTip::add( GroupBox8, tr( "Set application language" ) );
    QWhatsThis::add( GroupBox8, tr( "Set application language\n"
"\n"
"Choose your language for qGo.\n"
"If 'System default' is selected, qGo will use the standard language of your system. On Linux this will check the environment variable LANG, on Windows simply the language you have set in your preferences.\n"
"\n"
"This change will take effect only after qGo has been restarted.\n"
"\n"
"If your language is not supported, you might consider translating qGo. Please check the qGo homepage at http://qgo.sourceforge.net" ) );
    languageComboBox->clear();
    languageComboBox->insertItem( tr( "System default" ) );
    ButtonGroup4->setTitle( tr( "Color" ) );
    colorLabel->setText( tr( "Background" ) );
    QToolTip::add( colorLabel, tr( "Current background color" ) );
    colorBackgroundButton->setText( QString::null );
    QToolTip::add( colorBackgroundButton, tr( "Select new color" ) );
    QWhatsThis::add( colorBackgroundButton, tr( "Select new color\n"
"\n"
"Select the color for dialog background in the application." ) );
    colorLabel_2->setText( tr( "Alternate (lists)" ) );
    QToolTip::add( colorLabel_2, tr( "Current background color" ) );
    colorAltBackgroundButton->setText( QString::null );
    QToolTip::add( colorAltBackgroundButton, tr( "Select new color" ) );
    QWhatsThis::add( colorAltBackgroundButton, tr( "Select new color\n"
"\n"
"Select the color for dialog background in the application." ) );
    tabWidget->changeTab( InterfaceTabWidget, tr( "Main Interface" ) );
    boardButtonGroup->setTitle( tr( "Board" ) );
    coordsCheckBox->setText( tr( "Coordinates" ) );
    QToolTip::add( coordsCheckBox, tr( "Show board coordinates" ) );
    QWhatsThis::add( coordsCheckBox, tr( "Show board coordinates\n"
"\n"
"Toggles if the board coordinates are shown." ) );
    sgfCoordsCheckBox->setText( tr( "SGF Style" ) );
    QToolTip::add( sgfCoordsCheckBox, tr( "Show SGF board coordinates" ) );
    QWhatsThis::add( sgfCoordsCheckBox, tr( "Show SGF board coordinates\n"
"										\n"
"Toggles if SGF style board coordinates are shown." ) );
    sliderCheckBox->setText( tr( "Slider" ) );
    QToolTip::add( sliderCheckBox, tr( "Show slider" ) );
    QWhatsThis::add( sliderCheckBox, tr( "Show slider\n"
"\n"
"Toggles the slider on the bottom of the board on or off." ) );
    cursorCheckBox->setText( tr( "Cursor" ) );
    QToolTip::add( cursorCheckBox, tr( "Show a ghost stone at mouse pointer" ) );
    QWhatsThis::add( cursorCheckBox, tr( "Show a ghost stone at mouse pointer\n"
"\n"
"Have a ghost stone showing the current position of the mouse pointer on the board?" ) );
    toolTipCoordsCheckBox->setText( tr( "ToolTip coords" ) );
    QToolTip::add( toolTipCoordsCheckBox, tr( "Show coordinates as ToolTip" ) );
    QWhatsThis::add( toolTipCoordsCheckBox, tr( "Show coordinates as ToolTip\n"
"\n"
"When the mouse hovers over a point on the board, show a tooltip with the current coordinate." ) );
    variableFontCheckBox->setText( tr( "Variable mark font" ) );
    QToolTip::add( variableFontCheckBox, tr( "Variable font size for marks" ) );
    QWhatsThis::add( variableFontCheckBox, tr( "Variable font size for marks \n"
"\n"
"Ignore the size of the chosen font for marks and set size to about stone dimension." ) );
    tooltipsCheckBox->setText( tr( "Disable tooltips" ) );
    QToolTip::add( tooltipsCheckBox, tr( "Disable Tool Tips" ) );
    QWhatsThis::add( tooltipsCheckBox, tr( "Disable Tool Tips\n"
"\n"
"Globally disables all tool tips that would show up if the mouse hovers over a GUI element." ) );
    smallerMarksCheckBox->setText( tr( "Smaller marks" ) );
    QToolTip::add( smallerMarksCheckBox, tr( "Draw marks slightly smaller" ) );
    QWhatsThis::add( smallerMarksCheckBox, tr( "Draw marks slightly smaller\n"
"\n"
"If activated, all types of marks on the board will be drawn slightly smaller." ) );
    adjustFontSizeCheckBox->setText( tr( "Adjust font size" ) );
    QToolTip::add( adjustFontSizeCheckBox, tr( "Adjust font size for text and number labels" ) );
    QWhatsThis::add( adjustFontSizeCheckBox, tr( "Adjust font size for text and number labels\n"
"\n"
"This is useful when numbering all moves of a game, so the font size of all one, two or three digits numbers is equal.\n"
"When editing only single digit marks, it might be convenient to switch this off." ) );
    boldMarksCheckBox->setText( tr( "Bold marks" ) );
    QToolTip::add( boldMarksCheckBox, tr( "Draw marks bold" ) );
    QWhatsThis::add( boldMarksCheckBox, tr( "Draw marks bold\n"
"\n"
"If activated, all types of marks except characters and numbers on the board will be drawn bold." ) );
    sidebarCheckBox->setText( tr( "Sidebar" ) );
    QToolTip::add( sidebarCheckBox, tr( "Show sidebar" ) );
    QWhatsThis::add( sidebarCheckBox, tr( "Show sidebar\n"
"\n"
"Enables or disables the navigation and tool sidebar." ) );
    sidebarLeftCheckBox->setText( tr( "left" ) );
    QToolTip::add( sidebarLeftCheckBox, tr( "Show sidebar on the left" ) );
    QWhatsThis::add( sidebarLeftCheckBox, tr( "Show sidebar on the left\n"
"\n"
"Swaps sidebar and board, thus board is on the left and sidbar is on the right." ) );
    GoEnginegroup_box_2->setTitle( tr( "Goban" ) );
    textLabel1->setText( tr( "Board picture" ) );
    QToolTip::add( LineEdit_goban, tr( "Path to the goban picture" ) );
    QWhatsThis::add( LineEdit_goban, tr( "Path to the goban picture.\n"
"If the picture is not set, or unvalid, a default goban is used by qgo" ) );
    GobanPicturePathButton->setText( QString::null );
    textLabel1_2->setText( tr( "Table picture" ) );
    QToolTip::add( LineEdit_Table, tr( "Path to the table picture" ) );
    QWhatsThis::add( LineEdit_Table, tr( "Path to the table picture.\n"
"If the picture is not set, or unvalid, a default picture is used by qgo" ) );
    TablePicturePathButton->setText( QString::null );
    antiClickoGroup->setTitle( tr( "On line games" ) );
    antiClickoCheckBox->setText( tr( "Anti clicko (1/4 second click latency)" ) );
    QToolTip::add( antiClickoCheckBox, tr( "Check for setting an anti cliko delay for on line games" ) );
    QWhatsThis::add( antiClickoCheckBox, tr( "Anti Clicko\n"
"\n"
"Check the box for setting an anti clicko delay (1/4 second) for on line games.\n"
"If you press to enter a move on the board, the move will not be acknowledged if the mouse is released too early." ) );
    autoplayGroup->setTitle( tr( "Autoplay" ) );
    TextLabel2->setText( tr( "Interval:" ) );
    timerComboBox->clear();
    timerComboBox->insertItem( tr( "0.1" ) );
    timerComboBox->insertItem( tr( "0.5" ) );
    timerComboBox->insertItem( tr( "1" ) );
    timerComboBox->insertItem( tr( "2.5" ) );
    timerComboBox->insertItem( tr( "5" ) );
    timerComboBox->insertItem( tr( "7.5" ) );
    timerComboBox->insertItem( tr( "10" ) );
    QToolTip::add( timerComboBox, tr( "Time interval for autoplay" ) );
    QWhatsThis::add( timerComboBox, tr( "Time interval for autoplay\n"
"\n"
"Delay between the moves in autoplay mode in seconds." ) );
    sgfTimeTagsCheckBox->setText( tr( "sgf time tags" ) );
    QToolTip::add( sgfTimeTagsCheckBox, tr( "use time info of input file" ) );
    QWhatsThis::add( sgfTimeTagsCheckBox, tr( "sgf time tags\n"
"\n"
"Use time info of input file. The autoplay speed is same as recorded.\n"
"If not available then interval time is used." ) );
    GroupBox76->setTitle( tr( "Comment orientation" ) );
    QToolTip::add( GroupBox76, tr( "Horizontal or vertical comment orientation" ) );
    QWhatsThis::add( GroupBox76, tr( "Horizontal or vertical comment orientation\n"
"\n"
"The comment field will either be displayed on the bottom of the board or on the right side.\n"
"\n"
"For more dynamic display, pin off the comment field in the View menu.\n"
"\n"
"If None is selected, the comment field is by default hidden." ) );
    commentComboBox->clear();
    commentComboBox->insertItem( tr( "as saved" ) );
    commentComboBox->insertItem( tr( "horizontal" ) );
    commentComboBox->insertItem( tr( "vertical" ) );
    QToolTip::add( commentComboBox, tr( "choose default comment orientation" ) );
    QWhatsThis::add( commentComboBox, tr( "default comment field orientation\n"
"\n"
"as saved	use ALT+<0..9> to save position, size and comment orientation, \n"
"		restore with CTRL+<0..9>\n"
"horizontal	always show horizontal comment field\n"
"vertical		always show vertical comment field\n"
"\n"
"To use saved comment field orientation you must select 'as saved'. By using ALT/CTRL+<number> while horizontal/vertical is chosen, the saved comment field orientation is ignored." ) );
    GroupBox7->setTitle( tr( "Variation display" ) );
    QToolTip::add( GroupBox7, tr( "Display variations" ) );
    QWhatsThis::add( GroupBox7, tr( "Display variations\n"
"\n"
"Select how to display all brothers of the current move. Either not at all, or as ghost stones, or as smaller stones." ) );
    variationComboBox->clear();
    variationComboBox->insertItem( tr( "None" ) );
    variationComboBox->insertItem( tr( "Ghosts" ) );
    variationComboBox->insertItem( tr( "Small stones" ) );
    buttonGroup6->setTitle( tr( "Stones" ) );
    radioButtonStones_2D->setText( tr( "Ugly 2D" ) );
    QToolTip::add( radioButtonStones_2D, tr( "flat circled ... ugly but asked for ..." ) );
    QWhatsThis::add( radioButtonStones_2D, tr( "Stone appearance\n"
"\n"
"This will display back and white circles" ) );
    radioButtonStones_3D->setText( tr( "Plain 3D" ) );
    QToolTip::add( radioButtonStones_3D, tr( "plain 3D (no shadow, no stripes)" ) );
    QWhatsThis::add( radioButtonStones_3D, tr( "Stone appearance\n"
"\n"
"this will display simple 3D stones, with no shadow and neither stripes on white stones" ) );
    radioButtonStone_real->setText( tr( "Realistic" ) );
    QToolTip::add( radioButtonStone_real, tr( "Realistic 3D stones with stripes and shadow" ) );
    QWhatsThis::add( radioButtonStone_real, tr( "Stone appearance\n"
"\n"
"This will display realistic 3D stones with stripes and shadow" ) );
    tabWidget->changeTab( clientWindowTabWidget, tr( "Board Window" ) );
    GoEnginegroup_box->setTitle( tr( "Go Engine" ) );
    QToolTip::add( LineEdit_computer, tr( "Path to the Go program" ) );
    QWhatsThis::add( LineEdit_computer, tr( "Path to the Go playing program, e.g. GnuGo" ) );
    ComputerPathButton->setText( QString::null );
    buttonGroup4->setTitle( tr( "Default for White" ) );
    computerButtonWhite->setText( tr( "Computer" ) );
    humanButtonWhite->setText( tr( "Human" ) );
    buttonGroup5->setTitle( tr( "Default for Black" ) );
    computerButtonBlack->setText( tr( "Computer" ) );
    humanButtonBlack->setText( tr( "Human" ) );
    groupBox25_3->setTitle( tr( "Default games settings" ) );
    TextLabel6_2->setText( tr( "Handicap :" ) );
    QToolTip::add( TextLabel6_2, tr( "Playing time" ) );
    computerHandicapSpin->setSuffix( QString::null );
    QToolTip::add( computerHandicapSpin, tr( "Playing time" ) );
    TextLabel3_3_3->setText( tr( "Board size:" ) );
    QToolTip::add( TextLabel3_3_3, tr( "board size" ) );
    QToolTip::add( computerSizeSpin, tr( "board size" ) );
    tabWidget->changeTab( ComputerGoTabWidget, tr( "Computer Go" ) );
    QToolTip::add( Frame6, tr( "Text encoding for loading and saving" ) );
    QWhatsThis::add( Frame6, tr( "Text encoding for loading and saving\n"
"\n"
"This is used for loading and saving files containing asian letters.\n"
"If 'None' is selected, Latin1 encoding will be used, common in western world.\n"
"'None' will speed up loading large files like Kogos Joseki dictionary significantly." ) );
    TextLabel1_4->setText( tr( "Text encoding:" ) );
    codecListBox->clear();
    codecListBox->insertItem( tr( "None" ) );
    codecListBox->insertItem( tr( "Big5" ) );
    codecListBox->insertItem( tr( "EUC-JP" ) );
    codecListBox->insertItem( tr( "JIS" ) );
    codecListBox->insertItem( tr( "Shift-JIS" ) );
    codecListBox->insertItem( tr( "EUC-KR" ) );
    codecListBox->insertItem( tr( "GBK" ) );
    codecListBox->insertItem( tr( "Tamil TSCII" ) );
    QToolTip::add( Frame5, tr( "Request adjournment" ) );
    QWhatsThis::add( Frame5, tr( "Adjourn.\n"
"\n"
"Send adjournment request to your opponent. If he accept it, the game will be adjourned and saved." ) );
    fastLoadCheckBox->setText( tr( "Fast loading (EXPERIMENTAL)" ) );
    QToolTip::add( fastLoadCheckBox, tr( "Enable fast loading" ) );
    QWhatsThis::add( fastLoadCheckBox, tr( "Enable fast loading\n"
"\n"
"Warning: This is experimental and does not work properly!" ) );
    TextLabel1_2->setText( tr( "Fast loading is experimental right now and does not work completely!" ) );
    groupBox26->setTitle( tr( "Imported game position" ) );
    addBrotherCheckBox->setText( tr( "Add as brother" ) );
    QToolTip::add( addBrotherCheckBox, tr( "Add imported position as brother" ) );
    QWhatsThis::add( addBrotherCheckBox, tr( "Add imported position as brother\n"
"\n"
"If disabled, the imported position is added as son." ) );
    QToolTip::add( Frame4, tr( "Square" ) );
    QWhatsThis::add( Frame4, tr( "Square\n"
"\n"
"Edit square marks on the board. Left click sets a mark, right click removes it." ) );
    rememberDirCheckBox->setText( tr( "Remember last directory" ) );
    QToolTip::add( rememberDirCheckBox, tr( "Remember last directory" ) );
    QWhatsThis::add( rememberDirCheckBox, tr( "Remember last directory\n"
"\n"
"When toggled on, the last used directory when loading or saving sgf files will be remembered." ) );
    GroupBox4->setTitle( tr( "ASCII Characters" ) );
    QToolTip::add( GroupBox4, tr( "ASCII character for import/export" ) );
    QWhatsThis::add( GroupBox4, tr( "ASCII character for import\n"
"\n"
"When importing or exporting ASCII files, use these characters to indicate the given stone or point on the board." ) );
    TextLabel1->setText( tr( "Black stone:" ) );
    blackStoneEdit->setText( tr( "#" ) );
    TextLabel2_2->setText( tr( "White stone:" ) );
    whiteStoneEdit->setText( tr( "O" ) );
    TextLabel3->setText( tr( "Star point:" ) );
    starPointEdit->setText( tr( "," ) );
    TextLabel4->setText( tr( "Empty point:" ) );
    emptyPointEdit->setText( tr( "." ) );
    TextLabel1_3->setText( tr( "Horizontal border:" ) );
    hBorderEdit->setText( tr( "|" ) );
    TextLabel2_3->setText( tr( "Vertical border:" ) );
    vBorderEdit->setText( tr( "-" ) );
    tabWidget->changeTab( SGFTabWidget, tr( "Import / Export" ) );
    textLabel1_3->setText( tr( "Codec:" ) );
    TextLabel1_title->setText( tr( "Title:" ) );
    QToolTip::add( LineEdit_title, tr( "title, e.g.: guest account at NNGS" ) );
    QWhatsThis::add( LineEdit_title, tr( "unique title, e.g.:\n"
"\n"
"guest account at NNGS\n"
"qGo1234 (IGS)\n"
"xyz\n"
"\n"
"The title field is used to chose a server connection.\n"
"\n"
"Note: don't use a default server name, i.e. '-- Aurora --' etc." ) );
    TextLabel1_5->setText( tr( "Host:" ) );
    QToolTip::add( LineEdit_host, tr( "hostname, e.g.: nngs.cosmic.org" ) );
    QWhatsThis::add( LineEdit_host, tr( "hostname\n"
"\n"
"Use a valid hostname or ip address. Instead of typing it one of the predefined hosts can be chosen:\n"
"\n"
"-- Aurora --\n"
"-- CTN --\n"
"-- CWS --\n"
"-- EGF --\n"
"-- IGS --\n"
"-- LGS --\n"
"-- NNGS --\n"
"-- WING --" ) );
    TextLabel2_4->setText( tr( "Port:" ) );
    QToolTip::add( LineEdit_port, tr( "port address, e.g.: 9696" ) );
    QWhatsThis::add( LineEdit_port, tr( "port address, e.g.: 9696\n"
"\n"
"Port address is defined for each go server. It's a fixed number. See Host for predefined server names." ) );
    TextLabel3_2->setText( tr( "Name:" ) );
    QToolTip::add( LineEdit_login, tr( "use your login name; if unregistered use a unique name like 'hotdog17' (NNGS, CWS) or guest (other servers)" ) );
    QWhatsThis::add( LineEdit_login, tr( "name\n"
"\n"
"Registered users: \n"
"use your login name and password provided by the go server operator after registration\n"
"\n"
"New users: depends on server\n"
"NNGS, CWS:	use a unique name like 'hotdog17'\n"
"others:		guest" ) );
    TextLabel4_2->setText( tr( "Password:" ) );
    QToolTip::add( LineEdit_pass, tr( "your password; if unregistered: blank field" ) );
    QWhatsThis::add( LineEdit_pass, tr( "password\n"
"\n"
"Registered users: \n"
"use your login name and password provided by the go server operator after registration\n"
"\n"
"New users: leave blank!" ) );
    QToolTip::add( Line4, tr( "Score/Edit" ) );
    QWhatsThis::add( Line4, tr( "Score\n"
"\n"
"Left click on a group to mark it as dead.\n"
"Right click on a group to mark it alive in seki.\n"
"Click a second time on a group to unmark it as dead or seki.\n"
"\n"
"Edit\n"
"\n"
"Click to get a new, editable offline window." ) );
    pb_new->setText( tr( "New" ) );
    QToolTip::add( pb_new, tr( "clear form" ) );
    QWhatsThis::add( pb_new, tr( "New\n"
"\n"
"clear form; doesn't make any changes to the entries" ) );
    pb_add->setText( tr( "Add" ) );
    QToolTip::add( pb_add, tr( "add/change current entry" ) );
    QWhatsThis::add( pb_add, tr( "Add or Change\n"
"\n"
"Label 'Change ' appears when title is not unique, i.e. the saved entries with that title will be superseded by the current entries.\n"
"\n"
"Label 'Add' is default. The given entries will be saved under the given title." ) );
    pb_delete->setText( tr( "Delete" ) );
    QToolTip::add( pb_delete, tr( "delete current entry" ) );
    QWhatsThis::add( pb_delete, tr( "Delete\n"
"\n"
"Deletes the saved entries with same Title.\n"
"\n"
"Note: 'Delete' concerns saved records." ) );
    ListView_hosts->header()->setLabel( 0, tr( "Title" ) );
    ListView_hosts->header()->setLabel( 1, tr( "Host" ) );
    ListView_hosts->header()->setLabel( 2, tr( "Port" ) );
    ListView_hosts->header()->setLabel( 3, tr( "Name" ) );
    ListView_hosts->header()->setLabel( 4, tr( "Password" ) );
    QWhatsThis::add( ListView_hosts, tr( "Host Entries\n"
"\n"
"Select 'New' to clear input fields. After filling in at least Title and Host use Add/Change.\n"
"\n"
"Select an entry to edit, change (Title keeps unchanged) or delete a line.\n"
"\n"
"Select one of the predefined hosts -- xxx -- and add a title to use it." ) );
    IGSgroup_box->setTitle( tr( "IGS" ) );
    CheckBox_extUserInfo->setText( tr( "Extended user info" ) );
    QToolTip::add( CheckBox_extUserInfo, tr( "see more information from users -> slow!" ) );
    QWhatsThis::add( CheckBox_extUserInfo, tr( "If checked then additional information is requested from server.\n"
"\n"
"'user' cmd instead of 'who', thus, info string, won/lost, country and language settings are available.\n"
"\n"
"Works slow! Use 'Refresh players' after changing.\n"
"\n"
"On IGS only." ) );
    IGSgroup_box_2->setTitle( tr( "Autosave" ) );
    CheckBox_autoSave->setText( tr( "observed games" ) );
    QToolTip::add( CheckBox_autoSave, tr( "check for automatic saving observed games" ) );
    QWhatsThis::add( CheckBox_autoSave, tr( "Autosave\n"
"\n"
"If checked then when an observed game completes, it is automatically saved in the working directory" ) );
    CheckBox_autoSave_Played->setText( tr( "played games" ) );
    QToolTip::add( CheckBox_autoSave_Played, tr( "check for automatic saving for your games" ) );
    QWhatsThis::add( CheckBox_autoSave_Played, tr( "Autosave\n"
"\n"
"If checked then when a game you played completes, it is automatically saved in the working directory" ) );
    special_players->setTitle( tr( "Special players" ) );
    TextLabel_watch->setText( tr( "watch players:" ) );
    QToolTip::add( LineEdit_watch, tr( "players to be colored red" ) );
    QWhatsThis::add( LineEdit_watch, tr( "add players you want to\n"
"\n"
"- see red coloured and\n"
"- hear sound if entering/leaving.\n"
"\n"
"Use semicolon \";\" as delimiter (no spaces)" ) );
    QToolTip::add( LineEdit_exclude, tr( "players to be colored green" ) );
    QWhatsThis::add( LineEdit_exclude, tr( "add players you want to\n"
"\n"
"- see green coloured and\n"
"- exclude from shouting.\n"
"\n"
"Use semicolon \";\" as delimiter (no spaces)" ) );
    TextLabel_exclude->setText( tr( "exclude players:" ) );
    groupBox25->setTitle( tr( "Default games settings" ) );
    textLabel1_4->setText( tr( "All servers settings" ) );
    TextLabel3_3->setText( tr( "Board size:" ) );
    QToolTip::add( TextLabel3_3, tr( "board size" ) );
    QToolTip::add( boardSizeSpin, tr( "board size" ) );
    TextLabel3_3_2->setText( tr( "Komi:" ) );
    QToolTip::add( TextLabel3_3_2, tr( "Komi: added to white's result" ) );
    komiSpinDefault->setSuffix( tr( ".5" ) );
    QToolTip::add( komiSpinDefault, tr( "Komi: added to white's result" ) );
    automaticNegotiationCheckBox->setText( tr( "Automatic komi \n"
"negotiation" ) );
    QToolTip::add( automaticNegotiationCheckBox, tr( "allow client to negotiate automatic" ) );
    QWhatsThis::add( automaticNegotiationCheckBox, tr( "Automatic Negotiation\n"
"\n"
"Allow client to negotiate komi automatic.\n"
"\n"
"Be careful: it may be annoying if opponent does not want to accept your defaults even if defaults have been sent to opponent before. This may be due to different internal use of negotiation values by clients." ) );
    TextLabel6->setText( tr( "Main \n"
"time :" ) );
    QToolTip::add( TextLabel6, tr( "Playing time" ) );
    timeSpin->setSuffix( QString::null );
    QToolTip::add( timeSpin, tr( "Playing time" ) );
    TextLabel7->setText( tr( "Byoyomi\n"
"time:" ) );
    QToolTip::add( TextLabel7, tr( "Additional time for 25 moves; after 25 moves the byoyomi time starts again and again" ) );
    QToolTip::add( BYSpin, tr( "Additional time for 25 moves; after 25 moves the byoyomi time starts again and again" ) );
    textLabel1_4_2->setText( tr( "IGS 'nmatch' specific settings" ) );
    TextLabel6_3->setText( tr( "Main time \n"
"up to :" ) );
    QToolTip::add( TextLabel6_3, tr( "Playing time" ) );
    timeSpin_Nmatch->setSuffix( QString::null );
    QToolTip::add( timeSpin_Nmatch, tr( "Playing time" ) );
    TextLabel7_2->setText( tr( "Byo time\n"
"up to :" ) );
    QToolTip::add( TextLabel7_2, tr( "Additional time for 25 moves; after 25 moves the byoyomi time starts again and again" ) );
    QToolTip::add( BYSpin_Nmatch, tr( "Additional time for 25 moves; after 25 moves the byoyomi time starts again and again" ) );
    textLabel2->setText( tr( "Play as :" ) );
    checkBox_Nmatch_Black->setText( tr( "Black" ) );
    checkBox_Nmatch_White->setText( tr( "White" ) );
    checkBox_Nmatch_Nigiri->setText( tr( "Nigiri" ) );
    TextLabel3_3_4->setText( tr( "Handicap \n"
"up to :" ) );
    QToolTip::add( TextLabel3_3_4, tr( "board size" ) );
    QToolTip::add( HandicapSpin_Nmatch, tr( "board size" ) );
    tabWidget->changeTab( goServerTabWidget, tr( "Go Server" ) );
}

void PreferencesDialogGui::doAdjourn()
{
    qWarning( "PreferencesDialogGui::doAdjourn(): Not implemented yet" );
}

void PreferencesDialogGui::doPass()
{
    qWarning( "PreferencesDialogGui::doPass(): Not implemented yet" );
}

void PreferencesDialogGui::doRefresh()
{
    qWarning( "PreferencesDialogGui::doRefresh(): Not implemented yet" );
}

void PreferencesDialogGui::doResign()
{
    qWarning( "PreferencesDialogGui::doResign(): Not implemented yet" );
}

void PreferencesDialogGui::doScore(bool)
{
    qWarning( "PreferencesDialogGui::doScore(bool): Not implemented yet" );
}

void PreferencesDialogGui::doUndo()
{
    qWarning( "PreferencesDialogGui::doUndo(): Not implemented yet" );
}

void PreferencesDialogGui::slot_clickedSoundCheckBox(int)
{
    qWarning( "PreferencesDialogGui::slot_clickedSoundCheckBox(int): Not implemented yet" );
}

void PreferencesDialogGui::selectColor()
{
    qWarning( "PreferencesDialogGui::selectColor(): Not implemented yet" );
}

void PreferencesDialogGui::selectFont(int)
{
    qWarning( "PreferencesDialogGui::selectFont(int): Not implemented yet" );
}

void PreferencesDialogGui::setMarkType(int)
{
    qWarning( "PreferencesDialogGui::setMarkType(int): Not implemented yet" );
}

void PreferencesDialogGui::sliderChanged(int)
{
    qWarning( "PreferencesDialogGui::sliderChanged(int): Not implemented yet" );
}

void PreferencesDialogGui::slot_accept()
{
    qWarning( "PreferencesDialogGui::slot_accept(): Not implemented yet" );
}

void PreferencesDialogGui::slot_add()
{
    qWarning( "PreferencesDialogGui::slot_add(): Not implemented yet" );
}

void PreferencesDialogGui::slot_clickedListView(QListViewItem*,const QPoint&,int)
{
    qWarning( "PreferencesDialogGui::slot_clickedListView(QListViewItem*,const QPoint&,int): Not implemented yet" );
}

void PreferencesDialogGui::slot_delete()
{
    qWarning( "PreferencesDialogGui::slot_delete(): Not implemented yet" );
}

void PreferencesDialogGui::slot_new()
{
    qWarning( "PreferencesDialogGui::slot_new(): Not implemented yet" );
}

void PreferencesDialogGui::slot_reject()
{
    qWarning( "PreferencesDialogGui::slot_reject(): Not implemented yet" );
}

void PreferencesDialogGui::slot_getComputerPath()
{
    qWarning( "PreferencesDialogGui::slot_getComputerPath(): Not implemented yet" );
}

void PreferencesDialogGui::slot_textChanged(const QString&)
{
    qWarning( "PreferencesDialogGui::slot_textChanged(const QString&): Not implemented yet" );
}

void PreferencesDialogGui::startHelpMode()
{
    qWarning( "PreferencesDialogGui::startHelpMode(): Not implemented yet" );
}

void PreferencesDialogGui::slot_add_button()
{
    qWarning( "PreferencesDialogGui::slot_add_button(): Not implemented yet" );
}

void PreferencesDialogGui::slot_delete_button()
{
    qWarning( "PreferencesDialogGui::slot_delete_button(): Not implemented yet" );
}

void PreferencesDialogGui::slot_new_button()
{
    qWarning( "PreferencesDialogGui::slot_new_button(): Not implemented yet" );
}

void PreferencesDialogGui::slot_getPixmapPath()
{
    qWarning( "PreferencesDialogGui::slot_getPixmapPath(): Not implemented yet" );
}

void PreferencesDialogGui::slot_text_buttonChanged(const QString&)
{
    qWarning( "PreferencesDialogGui::slot_text_buttonChanged(const QString&): Not implemented yet" );
}

void PreferencesDialogGui::slot_clicked_buttonListView(QListViewItem*,const QPoint&,int)
{
    qWarning( "PreferencesDialogGui::slot_clicked_buttonListView(QListViewItem*,const QPoint&,int): Not implemented yet" );
}

void PreferencesDialogGui::apply()
{
    qWarning( "PreferencesDialogGui::apply(): Not implemented yet" );
}

void PreferencesDialogGui::slot_apply()
{
    qWarning( "PreferencesDialogGui::slot_apply(): Not implemented yet" );
}

void PreferencesDialogGui::slot_getGobanPicturePath()
{
    qWarning( "PreferencesDialogGui::slot_getGobanPicturePath(): Not implemented yet" );
}

void PreferencesDialogGui::selectAltColor()
{
    qWarning( "PreferencesDialogGui::selectAltColor(): Not implemented yet" );
}

void PreferencesDialogGui::slot_getTablePicturePath()
{
    qWarning( "PreferencesDialogGui::slot_getTablePicturePath(): Not implemented yet" );
}

void PreferencesDialogGui::slot_main_time_changed(int)
{
    qWarning( "PreferencesDialogGui::slot_main_time_changed(int): Not implemented yet" );
}

void PreferencesDialogGui::slot_BY_time_changed(int)
{
    qWarning( "PreferencesDialogGui::slot_BY_time_changed(int): Not implemented yet" );
}

#include "preferences_gui.moc"
