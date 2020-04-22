#ifndef POCZTA_H
#define POCZTA_H

#include <uzytkownik.h>
class Poczta
{
    Uzytkownik *uzytkownik;
public:
    Poczta(Uzytkownik* _uzytkownik);
    QString generujKod();
    void wyslijemail();
};

#endif // POCZTA_H
