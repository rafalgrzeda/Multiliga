#ifndef OKNO_DODANIESEZONU_H
#define OKNO_DODANIESEZONU_H

#include <QDialog>

namespace Ui {
class Okno_dodanieSezonu;
}

class Okno_dodanieSezonu : public QDialog
{
    Q_OBJECT

public:
    explicit Okno_dodanieSezonu(QWidget *parent = nullptr);
    ~Okno_dodanieSezonu();

private:
    Ui::Okno_dodanieSezonu *ui;
};

#endif // OKNO_DODANIESEZONU_H
