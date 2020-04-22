#include "listalig.h"

ListaLig* ListaLig::instance = nullptr;

ListaLig::ListaLig()
{

}

ListaLig *ListaLig::getListLig()
{
    if(instance == nullptr){
        instance = new ListaLig();
    }

    return instance;
}
