#ifndef OKNO_LOGOWANIE_H
#define OKNO_LOGOWANIE_H

#include <QDialog>
#include <logowanie.h>
namespace Ui {
class Okno_logowanie;
}

class Okno_logowanie : public QDialog
{
    Q_OBJECT

public:
    explicit Okno_logowanie(QWidget *parent = nullptr);
    ~Okno_logowanie();

    Logowanie *getLogowanie() const;

private slots:
    void on_button_zaloguj_clicked();

    void on_button_odzyskaj_clicked();

private:
    Logowanie *logowanie;
    Ui::Okno_logowanie *ui;
};

#endif // OKNO_LOGOWANIE_H
