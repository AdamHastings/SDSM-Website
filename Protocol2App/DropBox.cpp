#include "DropBox.h"
#include <QFile>
#include <QUrl>
#include <QNetworkAccessManager>
#include <QHttpMultiPart>
#include <QString>
#include <QNetworkReply>
#include <QDebug>
#include <QString>


DropBox::DropBox()
{
}

DropBox::~DropBox()
{
}

QString DropBox::directory;

void DropBox::setDirectory(QString dir) {
    directory = dir;
    qDebug() << "Directory set to " << directory;
}

void DropBox::upload(QString contents, QString filename) {
    QNetworkAccessManager* mgr = new QNetworkAccessManager();

    QObject::connect(mgr, &QNetworkAccessManager::finished,
        [&](QNetworkReply* repl) {
            qDebug() << repl->readAll();
        });

    QNetworkRequest request(QUrl("https://content.dropboxapi.com/2/files/upload"));

 
    request.setRawHeader(QByteArray("Authorization"), QByteArray("Bearer qHsc0jnrT4EAAAAAAAAAAeHJyK46BY6Ayaon3yz_8A4FWkapt_RTku2PZf7vFPUu"));

    QString dropboxArg = QString("{\"path\": \"/ " + directory + "/" + filename + ".txt\",\"mode\": \"add\",\"autorename\": true,\"mute\": true,\"strict_conflict\": false}");

#ifdef QT_DEBUG
    dropboxArg = QString("{\"path\": \"/ " + directory + "/" + filename + ".txt\",\"mode\": \"overwrite\",\"autorename\": false,\"mute\": true,\"strict_conflict\": false}");
#endif


    request.setRawHeader(QByteArray("Dropbox-API-Arg"), dropboxArg.toUtf8());

    request.setRawHeader(QByteArray("Content-Type"), QByteArray("application/octet-stream"));

    QNetworkReply* reply = mgr->post(request, QByteArray(contents.toStdString().c_str()));
}