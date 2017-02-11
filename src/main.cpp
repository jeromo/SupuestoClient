#include <connection.h>

int main(int argc, char *argv[])
{
    Connection connection(QString(argv[1]), atoi(argv[2]));

    connection.runCommunication();

}
