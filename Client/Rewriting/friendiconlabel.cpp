#include "friendiconlabel.h"
#include "stringtool.h"
#include <QDebug>
#include <QRandomGenerator>

int i = 0;
FriendIconLabel::FriendIconLabel(QWidget *parent) : QLabel(parent)
{
}

void FriendIconLabel::SetLocalIcon(QString url)
{
    this->setStyleSheet("border-image: url(" + url + ");");
}

void FriendIconLabel::SetHttpIcon(QString url)
{
    QSslConfiguration config = QSslConfiguration::defaultConfiguration();
    config.setProtocol(QSsl::TlsV1_2);

    QNetworkAccessManager* manager = new QNetworkAccessManager(this);
    QNetworkRequest request(url);
    QNetworkReply* reply = manager->get(request);

    connect(reply, &QNetworkReply::finished, this, [=](){
        if(reply->error() == QNetworkReply::NoError)
        {
            QByteArray data = reply->readAll();
            QPixmap pixmap;
            pixmap.loadFromData(data);
            this->setPixmap(pixmap);
        }
        else
        {
            qDebug() << "Error:" << reply->errorString();
        }
        reply->deleteLater();
        manager->deleteLater();
    });
}

void FriendIconLabel::SetIcon(QString url)
{
    if(url.startsWith("http"))
    {
        SetHttpIcon(url);
    }
    else if(url.size())
    {
        SetLocalIcon(url);
    }
    else
    {
        QStringList iconList = {
            ":/Icons/src/QQIcon/qunliao1.png",
            ":/Icons/src/QQIcon/qunliao2.png",
            ":/Icons/src/QQIcon/qunliao3.png",
            ":/Icons/src/QQIcon/qunliao4.png",
            ":/Icons/src/QQIcon/qunliao5.jpg",
            ":/Icons/src/QQIcon/qunliao6.jpg",
            ":/Icons/src/QQIcon/qunliao7.png",
            ":/Icons/src/QQIcon/qunliao8.jpg",
            ":/Icons/src/QQIcon/qunliao9.jpg",
            ":/Icons/src/QQIcon/qunliao10.png"
        };
        if(i >= 10)
        {
            setStyleSheet("border-image: url(:/Icons/src/QQIcon/qunliao1.png)");
            i = 1;
        }
        else
        {
            setStyleSheet("border-image: url(" + iconList[i++] + ");");
        }
        qDebug() << "i:" << i;
        //setStyleSheet("border-image: url(:/Icons/src/QQIcon/icon2.jpg)");
    }
}
/*
bool FriendIconLabel::event(QEvent *event)
{
    if(event->type() == QEvent::Enter)
    {
        emit enterIconLabel();
    }
    else if(event->type() == QEvent::Leave)
    {
        emit leaveIconLabel();
    }
    return true;
}
 */


