#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
#include <listakontuzytkownikow.h>
#include <aplikacja.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Aplikacja app;

    return a.exec();
}
