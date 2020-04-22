#ifndef OKNO_PANELADMINISTRATORA_H
#define OKNO_PANELADMINISTRATORA_H

#include <QDialog>
#include <administator.h>
namespace Ui {
class Okno_panelAdministratora;
}

class Okno_panelAdministratora : public QDialog
{
    Q_OBJECT

public:
    explicit Okno_panelAdministratora(Administator *_admin,QWidget *parent = nullptr);
    ~Okno_panelAdministratora();

    void wyswwietlTabliceUzyt();

    Administator *getAdmin() const;

private slots:
    void on_button_dodajUzytkownika_clicked();

    void on_button_edytujUzytkownika_clicked();

    void on_button_dodajLokazliacje_clicked();

    void on_button_edytujLokalizacje_clicked();

    void on_button_dodajDyscypline_clicked();

    void on_button_edytujDyscypline_clicked();

    void on_button_dodajSezon_clicked();

    void on_button_edytujSezon_clicked();

    void on_button_dodajLige_clicked();

    void on_buttonEdytujLige_clicked();

    void on_login_editingFinished();
    void on_comboBoxTyp_activated(const QString &arg1);

    void on_button_usunUzytkownika_clicked();

private:
    Ui::Okno_panelAdministratora *ui;
    Administator* admin;
};

#endif // OKNO_PANELADMINISTRATORA_H
