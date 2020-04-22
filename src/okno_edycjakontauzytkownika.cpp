#include "okno_edycjakontauzytkownika.h"
#include "ui_okno_edycjakontauzytkownika.h"
#include "uzytkownik.h"
#include "permanentny.h"
#include <QDebug>
#include <QMessageBox>
Okno_edycjaKontaUzytkownika::Okno_edycjaKontaUzytkownika(Okno_panelAdministratora *_panel, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno_edycjaKontaUzytkownika)
{
    ui->setupUi(this);
    panel = _panel;
    qDebug() << "Konstruktor edytuj";
    qDebug() << panel->getAdmin()->getPerm();
    Uzytkownik* u = dynamic_cast<Uzytkownik*>(panel->getAdmin()->getPerm());
    ui->comboBox->addItems(QStringList() <<"Administrator" << "Uczestnik" << "Ksiegowa" << "Organizator");


    ui->login->setText(u->getLogin());
    ui->haslo1->setText(u->getHaslo());
    ui->haslo2->setText(u->getHaslo());
    ui->imie->setText(u->getImie());
    ui->nazwisko->setText(u->getNazwisko());
    ui->email->setText(u->getEmail());
    int indx = ui->comboBox->findText(u->getTyp());
    ui->comboBox->setCurrentIndex(indx);
    ID = u->getID();
}

Okno_edycjaKontaUzytkownika::~Okno_edycjaKontaUzytkownika()
{
    delete ui;
}

void Okno_edycjaKontaUzytkownika::on_button_edytuj_clicked()
{
    if(ui->haslo1->text() == ui->haslo2->text()){
            panel->getAdmin()->edytuj(ui->login->text() ,ui->email->text(),ui->imie->text(),ui->nazwisko->text(),ui->haslo1->text(),ui->comboBox->currentText());
    }
    else{
        QMessageBox::information(this,"Błąd","Hasła nie są identyczne");
        this->hide();
    }
}
