#ifndef LISTALIG_H
#define LISTALIG_H


class ListaLig
{
private:
    ListaLig();
    static ListaLig *instance;
public:
    static ListaLig* getListLig();
};

#endif // LISTALIG_H
