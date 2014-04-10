#include "TCPServer.h"


const quint16 PORT_WOL = 9;

TCPServer::TCPServer()
    : mTcpServer(0)
{
    mTcpServer = new QTcpServer();

    connect(mTcpServer, SIGNAL(newConnection()), this, SLOT(newConnection()));

    mTcpServer->listen(QHostAddress::LocalHost, PORT_WOL);
    qDebug()<<"Listening on port"<<PORT_WOL;


}

TCPServer::~TCPServer()
{

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
