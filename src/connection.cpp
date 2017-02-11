#include <iostream>
#include "connection.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>




Connection::Connection()
{
    socket.connectToHost(serverName, serverPort);

    if (!socket.waitForConnected(Timeout)) {
        std::cout << socket.errorString().toStdString() <<std::flush;
        return;
    }

}

QString Connection::read()
{
    QString data;
    QDataStream in(&socket);
    in.setVersion(QDataStream::Qt_4_0);


    do {
        if (!socket.waitForReadyRead(Timeout)) {
            std::cout << socket.errorString().toStdString() <<std::flush;
            exit(0);
        }

        in.startTransaction();
        in >> data;
        std::cout << data.toStdString() <<std::flush;

    } while (!in.commitTransaction());

    return data;
}

void Connection::write(QString data)
{
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);
    out << data;

    socket.write(block);
}

void Connection::runCommunication()
{


        while (1) {

            QString fortune;

            read();
        }
}
