#ifndef CONNECTION_H
#define CONNECTION_H


#include <QObject>
#include <QtNetwork>

class Connection: public QObject
{
    Q_OBJECT
private:
    QTcpSocket socket;
    QString serverName;
    quint16 serverPort;
    const int Timeout = 5 * 1000;

    QString read();
    void write(QString data);

public:
    explicit Connection(QString ipAddress, int port);
    void runCommunication();

};

#endif // CONNECTION_H
