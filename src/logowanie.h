#ifndef LOGOWANIE_H
#define LOGOWANIE_H
#include <QString>
#include <uzytkownik.h>
class Logowanie
{
    QString login;
    QString haslo;

    Uzytkownik *uzytkownik;

public:
    Logowanie(QString _login, QString _haslo);

    bool zaloguj();
    void odzyskajHaslo();

    Uzytkownik *getUzytkownik() const;
};

#endif // LOGOWANIE_H
