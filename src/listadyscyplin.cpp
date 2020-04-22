#include "listadyscyplin.h"

ListaDyscyplin* ListaDyscyplin::instance= nullptr;

ListaDyscyplin::ListaDyscyplin()
{

}

ListaDyscyplin *ListaDyscyplin::getListaDyscyplin()
{
    if(instance == nullptr){
        instance= new ListaDyscyplin();
    }

    return instance;
}
