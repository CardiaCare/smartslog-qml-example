#include "smartslog_plugin.h"
#include "qmlsmartslog.h"

#include <qqml.h>

void SmartslogPlugin::registerTypes(const char *uri)
{
    // @uri com.cardiacare.qmlcomponents
    qmlRegisterType<QmlSmartSlog>(uri, 1, 0, "QmlSmartSlog");
}


