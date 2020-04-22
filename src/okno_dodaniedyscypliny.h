#ifndef OKNO_DODANIEDYSCYPLINY_H
#define OKNO_DODANIEDYSCYPLINY_H

#include <QDialog>

namespace Ui {
class Okno_dodanieDyscypliny;
}

class Okno_dodanieDyscypliny : public QDialog
{
    Q_OBJECT

public:
    explicit Okno_dodanieDyscypliny(QWidget *parent = nullptr);
    ~Okno_dodanieDyscypliny();

private:
    Ui::Okno_dodanieDyscypliny *ui;
};

#endif // OKNO_DODANIEDYSCYPLINY_H
