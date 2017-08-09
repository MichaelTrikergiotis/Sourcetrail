#ifndef QT_COREAPPLICTION_H
#define QT_COREAPPLICTION_H

#include <QCoreApplication>

#include "utility/messaging/MessageListener.h"
#include "utility/messaging/type/MessageQuitApplication.h"
#include "utility/messaging/type/MessageStatus.h"

class QtCoreApplication
	: public QCoreApplication
	, public MessageListener<MessageQuitApplication>
	, public MessageListener<MessageStatus>
{
	Q_OBJECT

public:
	QtCoreApplication(int argc, char **argv);
	virtual ~QtCoreApplication();

private:
	virtual void handleMessage(MessageQuitApplication* message);
	virtual void handleMessage(MessageStatus* message);
};

#endif // QT_COREAPPLICATION
