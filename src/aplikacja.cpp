#include "aplikacja.h"
#include "okno_logowanie.h"
#include "listakontuzytkownikow.h"
Aplikacja::Aplikacja()
{
    baza = new BazaPolaczenie();
    baza->polacz();

    Okno_logowanie *okno_log = new Okno_logowanie();
    okno_log->show();

    //Stworzenie singletonow
    ListaKontUzytkownikow * listauzytkownikow = ListaKontUzytkownikow::getListaKontUzytkownikow();
}
