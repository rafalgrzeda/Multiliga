#include "bazapolaczenie.h"
#include <QSqlDatabase>
#include <QtDebug>
BazaPolaczenie::BazaPolaczenie()
{
    hostName = "127.0.0.1";
    userName = "root";
    password = "";
    databasename = "multiliga";
}

void BazaPolaczenie::polacz()
{
    // Polaczenie z baza danych
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(hostName);
    db.setUserName(userName);
    db.setPassword(password);
    db.setDatabaseName(databasename);

    if(db.open()){
        qDebug() << "Połączono z bazą";
    }
    else{
        qDebug() << "Brak połączenia z bazą";
    }
}
