#ifndef BAZAPOLACZENIE_H
#define BAZAPOLACZENIE_H
#include <QString>

class BazaPolaczenie
{
private:
    QString hostName;
    QString userName;
    QString password;
    QString databasename;

public:
    BazaPolaczenie();
    void polacz();
};

#endif // BAZAPOLACZENIE_H
