/*
* noderesults.cpp
*/

#include "noderesults.h"
#include "move.h"
#include "icons.h"
#include <qpixmap.h>
#include <qiconview.h>
#include <qpushbutton.h>
#include <qptrstack.h>

//#ifdef USE_XPM
#include ICON_NODE_BLACK
#include ICON_NODE_WHITE
//#endif

class NodeResultItem : public QIconViewItem
{
public:
	NodeResultItem(QIconView *parent, Move *m)
		: QIconViewItem(parent), move(m)
	{
		setText(QPushButton::tr("Move") + " " + QString::number(m->getMoveNumber()));
		if (m->getColor() == stoneBlack)
		{
//#ifndef USE_XPM
//			setPixmap(QPixmap(ICON_NODE_BLACK));
//#else
			setPixmap(QPixmap(const_cast<const char**>(node_black_xpm)));
//#endif
		}
		else
		{
//#ifndef USE_XPM
//			setPixmap(QPixmap(ICON_NODE_WHITE));
//#else
			setPixmap(QPixmap(const_cast<const char**>(node_white_xpm)));
//#endif
		}
		
		setRenameEnabled(true);
	}
	
	virtual ~NodeResultItem()
	{
		qDebug("~NodeResultItem()");
	}
	
	Move *move;
};


/* 
*  Constructs a NodeResults which is a child of 'parent', with the 
*  name 'name' and widget flags set to 'f' 
*/
NodeResults::NodeResults( QWidget* parent,  const char* name, WFlags fl )
: NodeResultsGUI( parent, name, fl )
{
	resize(200, 200);
	closeButton->setAccel(Key_Escape);
}

/*  
*  Destroys the object and frees any allocated resources
*/
NodeResults::~NodeResults()
{
	// no need to delete child widgets, Qt does it all for us
}

/*
void NodeResults::clearAll()
{
clear();
}
*/

void NodeResults::setNodes(QPtrStack<Move> *nodes)
{
	qDebug("NodeResults::setNodes(QPtrStack<Move> *nodes)");
	
	IconView->clear();
	
	while (!nodes->isEmpty())
		new NodeResultItem(IconView, nodes->pop());
}

void NodeResults::fump(QIconViewItem *item)
{
	qDebug( "NodeResults::fump(QIconViewItem*)" );
	
	qDebug("MOVE NUM = %d",
		((NodeResultItem*)item)->move->getMoveNumber());
	
	emit doFump(((NodeResultItem*)item)->move);
}

void NodeResults::doHide()
{
	hide();
}
