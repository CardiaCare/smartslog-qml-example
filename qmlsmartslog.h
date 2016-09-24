#ifndef QMLSMARTSLOG_H
#define QMLSMARTSLOG_H

#include <QQuickItem>

class QmlSmartSlog : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(QmlSmartSlog)

public:
    QmlSmartSlog(QQuickItem *parent = 0);
    ~QmlSmartSlog();
};

#endif // QMLSMARTSLOG_H

