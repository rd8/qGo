/****************************************************************************
** Form interface generated from reading ui file './qnewgamedlg_gui.ui'
**
** Created by User Interface Compiler
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef QNEWGAMEDLGGUI_H
#define QNEWGAMEDLGGUI_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class KomiSpinBox;
class QGroupBox;
class QLineEdit;
class QToolButton;
class QLabel;
class QSpinBox;
class QComboBox;
class QCheckBox;
class QPushButton;

class QNewGameDlgGui : public QDialog
{
    Q_OBJECT

public:
    QNewGameDlgGui( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~QNewGameDlgGui();

    QGroupBox* IGSgroup_box_2;
    QLineEdit* _LineEdit_GameToLoad;
    QToolButton* _FilePathButton;
    QGroupBox* groupBox1_2;
    QLabel* textLabel1_2;
    QSpinBox* _BlackLevelSpinBox;
    QLabel* textLabel1;
    QLabel* pixmapLabel2;
    QLineEdit* _BlackPlayerLineEdit;
    QComboBox* _BlackTypeComboBox;
    QGroupBox* groupBox4;
    QLabel* TextLabel3;
    QSpinBox* _SizeSpinBox;
    QLabel* TextLabel5;
    QSpinBox* _HandicapSpinBox;
    QLabel* TextLabel4;
    KomiSpinBox* komiSpin;
    QCheckBox* _oneColorGoCheckbox;
    QGroupBox* groupBox1_2_2;
    QSpinBox* _WhiteLevelSpinBox;
    QLabel* textLabel1_2_2;
    QLabel* textLabel1_3;
    QLineEdit* _WhitePlayerLineEdit;
    QComboBox* _WhiteTypeComboBox;
    QLabel* pixmapLabel2_2;
    QPushButton* _OkPushButton;
    QPushButton* _CancelPushButton;

public slots:
    virtual void slotGetFileName();

protected:
    QGridLayout* QNewGameDlgGuiLayout;
    QSpacerItem* spacer3;
    QHBoxLayout* IGSgroup_box_2Layout;
    QGridLayout* groupBox1_2Layout;
    QGridLayout* groupBox4Layout;
    QHBoxLayout* Layout10;
    QHBoxLayout* Layout14;
    QHBoxLayout* Layout15;
    QGridLayout* groupBox1_2_2Layout;
    QHBoxLayout* Layout1;
    QSpacerItem* Horizontal_Spacing2;

protected slots:
    virtual void languageChange();

private:
    QPixmap image0;
    QPixmap image1;
    QPixmap image2;
    QPixmap image3;

};

#endif // QNEWGAMEDLGGUI_H
