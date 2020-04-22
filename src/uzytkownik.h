#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H
#include <QString>
#include "permanentny.h"
class Uzytkownik : public Permanentny
{
protected:
    int ID;
    QString login;
    QString email;
    QString imie;
    QString nazwisko;
    QString haslo;
    QString typ;
    QString kod;


public:
    Uzytkownik(Uzytkownik* uzyt);
    Uzytkownik(int _ID, QString _login, QString _email, QString _imie, QString _nazwisko, QString _haslo, QString _typ, QString _kod);
    QString getLogin() const;
    void setLogin(const QString &value);
    int getID() const;
    void setID(int value);
    QString getEmail() const;
    void setEmail(const QString &value);
    QString getImie() const;
    void setImie(const QString &value);
    QString getNazwisko() const;
    void setNazwisko(const QString &value);
    QString getHaslo() const;
    void setHaslo(const QString &value);
    QString getTyp() const;
    void setTyp(const QString &value);
    QString getKod() const;
    void setKod(const QString &value);

    void zapisz(int id);
    void usun(int id);
};

#endif // UZYTKOWNIK_H
