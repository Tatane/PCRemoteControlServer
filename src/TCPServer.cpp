#include "TCPServer.h"


TCPServer::TCPServer()
    : mTcpServer(0)
    , mPort(80)
{
}

TCPServer::~TCPServer()
{
}

void TCPServer::setPort(quint16 port)
{
    mPort = port;
}

void TCPServer::start()
{
    mTcpServer = new QTcpServer();

    connect(mTcpServer, SIGNAL(newConnection()), this, SLOT(newConnection()));

    mTcpServer->listen(QHostAddress::LocalHost, mPort);
    qDebug()<<"Listening on port"<<mPort;
}

void TCPServer::newConnection()
{
   qDebug()<<"new connection";
   mSocket = mTcpServer->nextPendingConnection();

   connect(mSocket, SIGNAL(readyRead()), this, SLOT(readyRead()));


}

void TCPServer::readyRead()
{
    qDebug()<<"data received :";

    QByteArray recept = mSocket->readAll();
    qDebug()<<recept.toHex();

}
