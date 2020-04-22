#ifndef ADMINISTATOR_H
#define ADMINISTATOR_H
#include "uzytkownik.h"
#include "permanentny.h"
class Administator : public Uzytkownik
{
private:
    Permanentny *perm;
public:
    Administator(Uzytkownik *uzyt);
    bool dodajUzytkownika(QString login, QString email, QString imie, QString nazwisko, QString haslo, QString typ);
    Permanentny* getUzytkownik(QString login);
    void edytuj(QString login, QString email, QString imie, QString nazwisko, QString haslo, QString typ);

    Permanentny *getPerm();
    void setPerm(Permanentny *value);
};

#endif // ADMINISTATOR_H
