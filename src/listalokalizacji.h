#ifndef LISTALOKALIZACJI_H
#define LISTALOKALIZACJI_H


class ListaLokalizacji
{
private:
    ListaLokalizacji();
    static ListaLokalizacji* instance;
public:
    static ListaLokalizacji* getListaLokalizacji();
};

#endif // LISTALOKALIZACJI_H
