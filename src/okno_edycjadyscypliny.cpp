#include "okno_edycjadyscypliny.h"
#include "ui_okno_edycjadyscypliny.h"

Okno_edycjaDyscypliny::Okno_edycjaDyscypliny(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Okno_edycjaDyscypliny)
{
    ui->setupUi(this);
}

Okno_edycjaDyscypliny::~Okno_edycjaDyscypliny()
{
    delete ui;
}
