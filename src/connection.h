#ifndef CONNECTION_H
#define CONNECTION_H


#include <QObject>
#include <QtNetwork>

class Connection: public QObject
{
    Q_OBJECT
private:
    QTcpSocket socket;
    QString serverName = "192.168.2.1";
    quint16 serverPort = 46820;
    const int Timeout = 5 * 1000;

    QString read();
    void write(QString data);

public:
    explicit Connection();
    void runCommunication();

};

#endif // CONNECTION_H
