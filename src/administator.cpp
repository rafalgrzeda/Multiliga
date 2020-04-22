#include "administator.h"
#include "okno_paneladministratora.h"
#include "listakontuzytkownikow.h"
#include <QDebug>
Permanentny *Administator::getPerm()
{
    return perm;
}

void Administator::setPerm(Permanentny *value)
{
    perm = value;
}

Administator::Administator(Uzytkownik *uzyt)
    :Uzytkownik (uzyt)
{
    ID = uzyt->getID();
    kod = uzyt->getKod();
    typ = uzyt->getTyp();
    imie = uzyt->getImie();
    email = uzyt->getEmail();
    haslo = uzyt->getHaslo();
    login = uzyt->getLogin();
    nazwisko = uzyt->getNazwisko();

    Okno_panelAdministratora *admin_panel = new Okno_panelAdministratora(this);
    admin_panel->show();
}

bool Administator::dodajUzytkownika(QString login, QString email, QString imie, QString nazwisko, QString haslo, QString typ)
{
    //Sprawdzenie czy uzytkownik o podanym loginie istnieje - jestli nie -> dodanie do bazy
    ListaKontUzytkownikow *lista = ListaKontUzytkownikow::getListaKontUzytkownikow();
    if(lista->znajdz(login) == nullptr){
        perm = new Uzytkownik(NULL,login,email,imie,nazwisko,haslo,typ,"0");
        perm->zapisz(NULL);
        lista->update();
        delete  perm;
        return true;
    }
    else{
        return false;
    }
}

Permanentny* Administator::getUzytkownik(QString login)
{
    //Pobranie uzytkownika z listy uzytkownikow
    ListaKontUzytkownikow *lista = ListaKontUzytkownikow::getListaKontUzytkownikow();
    Uzytkownik* uzyt= lista->znajdz(login);
    perm = new Uzytkownik(uzyt);
    qDebug() << "Admin - getUzytkownik()";
    qDebug() << perm;
    qDebug() << getPerm();
    return perm;
}

void Administator::edytuj(QString login, QString email, QString imie, QString nazwisko, QString haslo, QString typ)
{

    //Ogolnie caly czas perm zmienia swój adres w pamięci więc nic nie działa
    qDebug() << "Admnistrator - edytuj";
    qDebug() << perm;
    //Pobranie ID starego Uzytkownika
    //Uzytkownik *u = dynamic_cast<Uzytkownik*>(perm);
    //int ID = u->getID();
    /*
    delete  perm;
    // Stowrzenie nowego uzytkownika;
    perm = new Uzytkownik(ID,login,email,imie,nazwisko,haslo,typ,kod);
    perm->zapisz(ID);
    */

}
