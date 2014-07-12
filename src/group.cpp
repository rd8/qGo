/*
 * group.cpp
 */

#include "group.h"
#include "stone.h"
#include "defines.h"

Group::Group()
{
    liberties = 0;
    setAutoDelete(FALSE);
}

int Group::compareItems(Item d1, Item d2)
{
	Stone *s1 = static_cast<Stone*>(d1);
	Stone *s2 = static_cast<Stone*>(d2);

	CHECK_PTR(s1);
	CHECK_PTR(s2);

	if (s1->posX() == s2->posX() &&
	    s1->posY() == s2->posY() &&
	    s1->getColor() == s2->getColor())
		return 0;

	return 1;
}

bool Group::isAttachedTo(Stone *s)
{
    CHECK_PTR(s);

    int stoneX = s->posX(),
	      stoneY = s->posY(),
	      x, y;
    StoneColor col = s->getColor(), c;
    Stone *tmp;

    if (isEmpty())
		return false;

    for (unsigned int i=0; i<count(); i++)
    {
		tmp = at(i);
		x = tmp->posX();
		y = tmp->posY();
		c = tmp->getColor();
		if (((stoneX == x && (stoneY == y-1 || stoneY == y+1)) ||
			 (stoneY == y && (stoneX == x-1 || stoneX == x+1))) &&
			 c == col)
			return true;
    }    
    
    return false;
}

#ifndef NO_DEBUG
void Group::debug()
{
	qDebug(QString("Count: %1 - Liberties: %2").arg(count()).arg(liberties));
	Stone *s;

	QListIterator<Stone> it(*this);

	for (; it.current(); ++it)
	{
		s = it.current();
		qDebug(" (%d, %d) %s", s->posX(), s->posY(),
		s->getColor() == stoneBlack ? "B" : "W");
	}	
}
#endif
