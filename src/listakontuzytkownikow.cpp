#include "listakontuzytkownikow.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <permanentny.h>

ListaKontUzytkownikow* ListaKontUzytkownikow::instance = nullptr;

ListaKontUzytkownikow::ListaKontUzytkownikow()
{
    update();
    qDebug() << "Update - size: " + QString::number(listaUzytownikow.count());
}

ListaKontUzytkownikow *ListaKontUzytkownikow::getListaKontUzytkownikow()
{
    if(instance == nullptr){
        instance = new ListaKontUzytkownikow();
    }

    return instance;
}

void ListaKontUzytkownikow::update()
{
    listaUzytownikow.clear();
    QSqlQueryModel model;

    QSqlQuery qry;
    qry.prepare("SELECT * FROM uzytkownicy");
    qry.exec();
    model.setQuery(qry);

    for(int i = 0; i < model.rowCount();i++){

        QSqlRecord rec = model.record(i);

        Uzytkownik *user = new Uzytkownik(rec.value(0).toInt(),
                                          rec.value(1).toString(),
                                          rec.value(2).toString(),
                                          rec.value(3).toString(),
                                          rec.value(4).toString(),
                                          rec.value(5).toString(),
                                          rec.value(6).toString(),
                                          rec.value(7).toString());
        listaUzytownikow.append(user);
    }
}

Uzytkownik *ListaKontUzytkownikow::znajdz(QString login, QString haslo)
{
    for(int i = 0; i < listaUzytownikow.size(); i++){
        if(listaUzytownikow.at(i)->getLogin() == login && listaUzytownikow.at(i)->getHaslo() == haslo){
            return listaUzytownikow.at(i);
        }
    }
    return nullptr;
}

Uzytkownik *ListaKontUzytkownikow::znajdz(QString login)
{
    for(int i = 0; i < listaUzytownikow.size(); i++){
        if(listaUzytownikow.at(i)->getLogin() == login){
            return listaUzytownikow.at(i);
        }
    }
    return nullptr;
}
