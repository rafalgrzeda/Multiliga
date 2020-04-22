#include "okno_dodaniesezonu.h"
#include "ui_okno_dodaniesezonu.h"

Okno_dodanieSezonu::Okno_dodanieSezonu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno_dodanieSezonu)
{
    ui->setupUi(this);
}

Okno_dodanieSezonu::~Okno_dodanieSezonu()
{
    delete ui;
}
