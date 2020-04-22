#ifndef OKNO_DODANIEKONTAUZYTKOWNIKA_H
#define OKNO_DODANIEKONTAUZYTKOWNIKA_H

#include <QDialog>
#include <okno_paneladministratora.h>

namespace Ui {
class Okno_dodanieKontaUzytkownika;
}

class Okno_dodanieKontaUzytkownika : public QDialog
{
    Q_OBJECT

public:
    explicit Okno_dodanieKontaUzytkownika(Okno_panelAdministratora *_panel,QWidget *parent = nullptr);
    ~Okno_dodanieKontaUzytkownika();

private slots:
    void on_button_dodaj_clicked();

private:
    Ui::Okno_dodanieKontaUzytkownika *ui;
    Okno_panelAdministratora *panel;
};

#endif // OKNO_DODANIEKONTAUZYTKOWNIKA_H
