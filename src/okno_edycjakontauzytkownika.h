#ifndef OKNO_EDYCJAKONTAUZYTKOWNIKA_H
#define OKNO_EDYCJAKONTAUZYTKOWNIKA_H

#include <QDialog>
#include "okno_paneladministratora.h"
#include "uzytkownik.h"

namespace Ui {
class Okno_edycjaKontaUzytkownika;
}

class Okno_edycjaKontaUzytkownika : public QDialog
{
    Q_OBJECT

public:
    explicit Okno_edycjaKontaUzytkownika(Okno_panelAdministratora *_panel, QWidget *parent = nullptr);
    ~Okno_edycjaKontaUzytkownika();

private slots:
    void on_button_edytuj_clicked();

private:
    Ui::Okno_edycjaKontaUzytkownika *ui;
    Okno_panelAdministratora *panel;

    int  ID;
    Uzytkownik *uzytkownik;
};

#endif // OKNO_EDYCJAKONTAUZYTKOWNIKA_H
