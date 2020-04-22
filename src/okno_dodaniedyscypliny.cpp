#include "okno_dodaniedyscypliny.h"
#include "ui_okno_dodaniedyscypliny.h"

Okno_dodanieDyscypliny::Okno_dodanieDyscypliny(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno_dodanieDyscypliny)
{
    ui->setupUi(this);
}

Okno_dodanieDyscypliny::~Okno_dodanieDyscypliny()
{
    delete ui;
}
