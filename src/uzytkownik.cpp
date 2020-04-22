#include "uzytkownik.h"
#include <QSqlQuery>
#include <QDebug>
QString Uzytkownik::getLogin() const
{
    return login;
}

void Uzytkownik::setLogin(const QString &value)
{
    login = value;
}

int Uzytkownik::getID() const
{
    return ID;
}

void Uzytkownik::setID(int value)
{
    ID = value;
}

QString Uzytkownik::getEmail() const
{
    return email;
}

void Uzytkownik::setEmail(const QString &value)
{
    email = value;
}

QString Uzytkownik::getImie() const
{
    return imie;
}

void Uzytkownik::setImie(const QString &value)
{
    imie = value;
}

QString Uzytkownik::getNazwisko() const
{
    return nazwisko;
}

void Uzytkownik::setNazwisko(const QString &value)
{
    nazwisko = value;
}

QString Uzytkownik::getHaslo() const
{
    return haslo;
}

void Uzytkownik::setHaslo(const QString &value)
{
    haslo = value;
}

QString Uzytkownik::getTyp() const
{
    return typ;
}

void Uzytkownik::setTyp(const QString &value)
{
    typ = value;
}

QString Uzytkownik::getKod() const
{
    return kod;
}

void Uzytkownik::setKod(const QString &value)
{
    kod = value;
}

void Uzytkownik::zapisz(int id)
{
    QString ID = QString::number(id);
    qDebug() << "Zapis do bazy";
    if(id != NULL){
        qDebug() << "Edytowanie";
        // edytuj
        QSqlQuery qry;
        qry.prepare("UPDATE uzytkownicy SET Login = '"+login+"', Email = '"+email+"', Imie = '"+imie+"', Nazwisko = '"+nazwisko+"', Haslo = '"+haslo+"', Typ = '"+typ+"', Kod = '"+kod+"' WHERE idUzytkownicy = '"+ID+"' ");
        qry.exec();
    }
    else{
        qDebug() << "Dodawanie";
        // dodawanie
        QSqlQuery qry;
        qry.prepare("INSERT INTO uzytkownicy (Login, Email,Imie, Nazwisko, Haslo, Typ, Kod) VALUES ('"+login+"','"+email+"','"+imie+"', '"+nazwisko+"', '"+haslo+"','"+typ+"','"+kod+"')");
        qry.exec();
    }
}

void Uzytkownik::usun(int id)
{
    QString ID = QString::number(id);
    qDebug() << "Usuwanie";
    // dodawanie
    QSqlQuery qry;
    qry.prepare("DELETE FROM uzytkownicy WHERE idUzytkownicy = '"+ID+"'");
    qry.exec();
}

Uzytkownik::Uzytkownik(Uzytkownik* uzyt)
{
    ID = uzyt->getID();
    login = uzyt->getLogin();
    email = uzyt->getEmail();
    imie = uzyt->getImie();
    nazwisko = uzyt->getNazwisko();
    haslo = uzyt->getHaslo();
    typ = uzyt->getTyp();
    kod = uzyt->getKod();
}

Uzytkownik::Uzytkownik(int _ID, QString _login, QString _email, QString _imie, QString _nazwisko, QString _haslo, QString _typ, QString _kod)
{
    ID = _ID;
    login = _login;
    email = _email;
    imie = _imie;
    nazwisko = _nazwisko;
    haslo = _haslo;
    typ = _typ;
    kod = _kod;
}
