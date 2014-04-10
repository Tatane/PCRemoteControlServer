#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QtNetwork>

class TCPServer : public QObject
{
    Q_OBJECT

public:
    TCPServer();
    virtual ~TCPServer();

private:
    QTcpServer * mTcpServer;
    QTcpSocket * mSocket;

private slots:
    void newConnection();
    void readyRead();
};

#endif // TCPSERVER_H
