#include <globals.h>
#include <QSharedPointer>
#include <QMutex>
#include <QMutexLocker>

namespace qevercloud {

QNetworkAccessManager * evernoteNetworkAccessManager()
{
    static QSharedPointer<QNetworkAccessManager> pNetworkAccessManager;
    static QMutex networkAccessManagerMutex;
    QMutexLocker mutexLocker(&networkAccessManagerMutex);
    if (pNetworkAccessManager.isNull()) {
        pNetworkAccessManager = QSharedPointer<QNetworkAccessManager>(new QNetworkAccessManager);
    }
    return pNetworkAccessManager.data();
}

int libraryVersion()
{
    return 3*10000 + 0*100 + 2;
}

} // namespace qevercloud
