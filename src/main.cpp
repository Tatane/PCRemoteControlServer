#include <QCoreApplication>

#include "TCPServer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TCPServer tcpServer;

    return a.exec();
}