#include "logowanie.h"
#include "listakontuzytkownikow.h"
#include "uzytkownik.h"
#include <QtDebug>
#include <administator.h>
#include <poczta.h>
Uzytkownik *Logowanie::getUzytkownik() const
{
    return uzytkownik;
}

Logowanie::Logowanie(QString _login, QString _haslo)
{
    login = _login;
    haslo = _haslo;
    uzytkownik = nullptr;
}

bool Logowanie::zaloguj()
{
    ListaKontUzytkownikow *listaUzytkownikow = ListaKontUzytkownikow::getListaKontUzytkownikow();
    Uzytkownik *uzyt = listaUzytkownikow->znajdz(login,haslo);
    if(uzyt != nullptr){
        if(uzyt->getTyp() == "Administrator"){
            Administator admin(uzyt);
            return true;
        }
    }
    return false;
}

void Logowanie::odzyskajHaslo()
{
    ListaKontUzytkownikow *listaUzytkownikow = ListaKontUzytkownikow::getListaKontUzytkownikow();
    Uzytkownik *uzyt = listaUzytkownikow->znajdz(login);
    if(uzyt == nullptr){
        uzytkownik = uzyt;
        return;
    }
    else{
        uzytkownik = uzyt;
        Poczta poczta(uzyt);
        QString kod = poczta.generujKod();
        qDebug() << kod;
        poczta.wyslijemail();

        uzyt->setKod(kod);
        uzyt->zapisz(uzyt->getID());

    }
    return;
}
