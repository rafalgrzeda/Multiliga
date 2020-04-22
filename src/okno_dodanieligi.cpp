#include "okno_dodanieligi.h"
#include "ui_okno_dodanieligi.h"

Okno_dodanieLigi::Okno_dodanieLigi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno_dodanieLigi)
{
    ui->setupUi(this);
}

Okno_dodanieLigi::~Okno_dodanieLigi()
{
    delete ui;
}
