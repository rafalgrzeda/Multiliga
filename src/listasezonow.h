#ifndef LISTASEZONOW_H
#define LISTASEZONOW_H


class ListaSezonow
{
private:
    ListaSezonow();
    static ListaSezonow* instance;
public:
    static ListaSezonow* getListaSezonow();
};

#endif // LISTASEZONOW_H
