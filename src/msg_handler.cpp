/*
*   msg_handler.cpp
*/

#include "msg_handler.h"


#ifdef OWN_DEBUG_MODE
void myMessageHandler(QtMsgType type, const char *msg)
{
	
	if ((view == NULL) || (myapp.startingUp()) || (myapp.closingDown()))
		return ;

	//QString msg2 = QString::QString(msg);

	switch (type)
	{
	case QtDebugMsg:		view->append("Debug: "  + (QString) msg + "\n");
		break;
	case QtWarningMsg:	view->append((QString) "Warning: " + (QString) msg + (QString) "\n");
		break;
	case QtFatalMsg:		view->append((QString) "Fatal: " + (QString) msg + (QString) "\n");
		break;
	}
}
#endif
