#include "listalokalizacji.h"

ListaLokalizacji* ListaLokalizacji::instance = nullptr;

ListaLokalizacji::ListaLokalizacji()
{

}

ListaLokalizacji *ListaLokalizacji::getListaLokalizacji()
{
    if(instance == nullptr){
        instance = new ListaLokalizacji();
    }

    return instance;
}
