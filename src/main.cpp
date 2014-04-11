#include <QCoreApplication>

#include "TCPServer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TCPServer tcpServer;

    if (argc>1){
        tcpServer.setPort(QString(argv[1]).toInt());
    }

    tcpServer.start();

    return a.exec();
}
