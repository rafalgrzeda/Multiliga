#include "listasezonow.h"

ListaSezonow* ListaSezonow::instance = nullptr;
ListaSezonow::ListaSezonow()
{

}

ListaSezonow *ListaSezonow::getListaSezonow()
{
    if(instance == nullptr){
        instance = new ListaSezonow();
    }

    return instance;
}
