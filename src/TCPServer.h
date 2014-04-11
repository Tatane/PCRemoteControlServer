#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QtNetwork>

class TCPServer : public QObject
{
    Q_OBJECT

public:
    TCPServer();
    virtual ~TCPServer();
    void setPort(quint16 port);
    void start();

private:
    QTcpServer * mTcpServer;
    QTcpSocket * mSocket;
    quint16 mPort;

private slots:
    void newConnection();
    void readyRead();
};

#endif // TCPSERVER_H
