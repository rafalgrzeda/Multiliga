#include "okno_paneladministratora.h"
#include "ui_okno_paneladministratora.h"
#include "okno_dodaniekontauzytkownika.h"
#include "okno_edycjakontauzytkownika.h"
#include "okno_dodaniedyscypliny.h"
#include "okno_dodanieligi.h"
#include "okno_dodanielokalizacji.h"
#include "okno_dodaniesezonu.h"
#include "okno_edycjadyscypliny.h"
#include "okno_edycjaligi.h"
#include "okno_edycjalokalizacji.h"
#include "okno_edycjasezonu.h"
#include "listakontuzytkownikow.h"
#include <QDebug>
Okno_panelAdministratora::Okno_panelAdministratora(Administator *_admin,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno_panelAdministratora)
{
    ui->setupUi(this);

    admin = _admin;

    ui->tabela_uzyt->setColumnCount(7);
    ui->comboBoxTyp->addItems(QStringList()<< "All" << "Administrator" << "Uczestnik" << "Ksiegowa" << "Organizator");
    ui->tabela_uzyt->setSelectionBehavior(QAbstractItemView::SelectRows);
    wyswwietlTabliceUzyt();
}

Okno_panelAdministratora::~Okno_panelAdministratora()
{
    delete ui;
}

void Okno_panelAdministratora::wyswwietlTabliceUzyt()
{
    ui->tabela_uzyt->clear();
    ui->tabela_uzyt->setRowCount(0);
    ui->tabela_uzyt->setHorizontalHeaderLabels(QStringList() << "ID" << "Login" << "Emial" << "Imie" << "Nazwisko" << "Haslo" << "Typ" << "Kod");
    QString login = ui->login->text();
    QString typ = ui->comboBoxTyp->currentText();
    ListaKontUzytkownikow *lista_kont = ListaKontUzytkownikow::getListaKontUzytkownikow();
    lista_kont->update();
    if(login.isEmpty() && typ == "All"){
        for(int i = 0; i < lista_kont->listaUzytownikow.size();i++){
            Uzytkownik *uzyt = lista_kont->listaUzytownikow.at(i);
            ui->tabela_uzyt->insertRow(ui->tabela_uzyt->rowCount());
            ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,0,new QTableWidgetItem(QString::number(uzyt->getID())));
            ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,1,new QTableWidgetItem(QString(uzyt->getLogin())));
            ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,2,new QTableWidgetItem(QString(uzyt->getEmail())));
            ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,3,new QTableWidgetItem(QString(uzyt->getImie())));
            ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,4,new QTableWidgetItem(QString(uzyt->getNazwisko())));
            ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,5,new QTableWidgetItem(QString(uzyt->getHaslo())));
            ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,6,new QTableWidgetItem(QString(uzyt->getTyp())));
            ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,7,new QTableWidgetItem(QString(uzyt->getKod())));
        }
    }
    else if(login.isEmpty() && typ !="All"){
        for(int i = 0; i < lista_kont->listaUzytownikow.size();i++){
            Uzytkownik *uzyt = lista_kont->listaUzytownikow.at(i);
            if(uzyt->getTyp() == typ){
                ui->tabela_uzyt->insertRow(ui->tabela_uzyt->rowCount());
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,0,new QTableWidgetItem(QString::number(uzyt->getID())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,1,new QTableWidgetItem(QString(uzyt->getLogin())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,2,new QTableWidgetItem(QString(uzyt->getEmail())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,3,new QTableWidgetItem(QString(uzyt->getImie())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,4,new QTableWidgetItem(QString(uzyt->getNazwisko())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,5,new QTableWidgetItem(QString(uzyt->getHaslo())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,6,new QTableWidgetItem(QString(uzyt->getTyp())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,7,new QTableWidgetItem(QString(uzyt->getKod())));
            }
        }
    }
    else if(login !="" && typ =="All"){
        for(int i = 0; i < lista_kont->listaUzytownikow.size();i++){
            Uzytkownik *uzyt = lista_kont->listaUzytownikow.at(i);
            if(uzyt->getLogin()==login){
                ui->tabela_uzyt->insertRow(ui->tabela_uzyt->rowCount());
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,0,new QTableWidgetItem(QString::number(uzyt->getID())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,1,new QTableWidgetItem(QString(uzyt->getLogin())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,2,new QTableWidgetItem(QString(uzyt->getEmail())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,3,new QTableWidgetItem(QString(uzyt->getImie())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,4,new QTableWidgetItem(QString(uzyt->getNazwisko())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,5,new QTableWidgetItem(QString(uzyt->getHaslo())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,6,new QTableWidgetItem(QString(uzyt->getTyp())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,7,new QTableWidgetItem(QString(uzyt->getKod())));
            }
        }
    }
    else{
        for(int i = 0; i < lista_kont->listaUzytownikow.size();i++){
            Uzytkownik *uzyt = lista_kont->listaUzytownikow.at(i);
            if(uzyt->getLogin()==login&&uzyt->getTyp()==typ){
                ui->tabela_uzyt->insertRow(ui->tabela_uzyt->rowCount());
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,0,new QTableWidgetItem(QString::number(uzyt->getID())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,1,new QTableWidgetItem(QString(uzyt->getLogin())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,2,new QTableWidgetItem(QString(uzyt->getEmail())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,3,new QTableWidgetItem(QString(uzyt->getImie())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,4,new QTableWidgetItem(QString(uzyt->getNazwisko())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,5,new QTableWidgetItem(QString(uzyt->getHaslo())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,6,new QTableWidgetItem(QString(uzyt->getTyp())));
                ui->tabela_uzyt->setItem(ui->tabela_uzyt->rowCount() -1 ,7,new QTableWidgetItem(QString(uzyt->getKod())));
            }
        }
    }
}

void Okno_panelAdministratora::on_button_dodajUzytkownika_clicked()
{
    Okno_dodanieKontaUzytkownika* okno_dodUzyt = new Okno_dodanieKontaUzytkownika(this);
    okno_dodUzyt->show();
}

void Okno_panelAdministratora::on_button_edytujUzytkownika_clicked()
{
    if(ui->tabela_uzyt->selectedItems().size()  != 0){
        QList<QTableWidgetItem*> list = ui->tabela_uzyt->selectedItems();
        Permanentny *perm = admin->getUzytkownik(list.at(1)->text());
        qDebug() << "Panel";
        qDebug() << perm;
        qDebug() << admin->getPerm();
        Okno_edycjaKontaUzytkownika* okno_edytUzyt = new Okno_edycjaKontaUzytkownika(this);
        okno_edytUzyt->show();
    }
}

void Okno_panelAdministratora::on_button_dodajLokazliacje_clicked()
{
    Okno_dodanieLokalizacji *okno_dodLok = new Okno_dodanieLokalizacji();
    okno_dodLok->show();
}

void Okno_panelAdministratora::on_button_edytujLokalizacje_clicked()
{
    Okno_edycjaLokalizacji *okno_edytLok = new Okno_edycjaLokalizacji();
    okno_edytLok->show();
}

void Okno_panelAdministratora::on_button_dodajDyscypline_clicked()
{
    Okno_dodanieDyscypliny *okno_dodDyscp = new Okno_dodanieDyscypliny();
    okno_dodDyscp->show();
}

void Okno_panelAdministratora::on_button_edytujDyscypline_clicked()
{
    Okno_edycjaDyscypliny *okno_edytDyscp = new Okno_edycjaDyscypliny();
    okno_edytDyscp->show();
}

void Okno_panelAdministratora::on_button_dodajSezon_clicked()
{
    Okno_dodanieSezonu *okno_dodSezon = new Okno_dodanieSezonu();
    okno_dodSezon->show();
}

void Okno_panelAdministratora::on_button_edytujSezon_clicked()
{
    Okno_edycjaSezonu *okno_edytSezon = new Okno_edycjaSezonu();
    okno_edytSezon->show();
}

void Okno_panelAdministratora::on_button_dodajLige_clicked()
{
    Okno_dodanieLigi *okno_dodLige = new Okno_dodanieLigi();
    okno_dodLige->show();
}

void Okno_panelAdministratora::on_buttonEdytujLige_clicked()
{
    Okno_edycjaLigi *okno_edytLigi = new Okno_edycjaLigi();
    okno_edytLigi->show();
}

void Okno_panelAdministratora::on_login_editingFinished()
{
    wyswwietlTabliceUzyt();
}


void Okno_panelAdministratora::on_comboBoxTyp_activated(const QString &arg1)
{
    wyswwietlTabliceUzyt();
}

Administator *Okno_panelAdministratora::getAdmin() const
{
    return admin;
}

void Okno_panelAdministratora::on_button_usunUzytkownika_clicked()
{
    if(ui->tabela_uzyt->selectedItems().size()  != 0){
        QList<QTableWidgetItem*> list = ui->tabela_uzyt->selectedItems();
        Permanentny *perm = admin->getUzytkownik(list.at(1)->text());
        qDebug() << list.at(0)->text();
        perm->usun(list.at(0)->text().toInt());
        wyswwietlTabliceUzyt();
        delete perm;
    }
}
