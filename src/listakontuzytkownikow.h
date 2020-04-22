#ifndef LISTAKONTUZYTKOWNIKOW_H
#define LISTAKONTUZYTKOWNIKOW_H
#include <QList>
#include "uzytkownik.h"

class ListaKontUzytkownikow
{
private:
    ListaKontUzytkownikow();
    static ListaKontUzytkownikow *instance;
public:
    QList <Uzytkownik*> listaUzytownikow;
    static ListaKontUzytkownikow* getListaKontUzytkownikow();
    void update();
    Uzytkownik *znajdz(QString login, QString haslo);
    Uzytkownik *znajdz(QString login);
};

#endif // LISTAKONTUZYTKOWNIKOW_H
