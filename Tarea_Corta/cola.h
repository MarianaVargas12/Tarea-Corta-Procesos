#ifndef COLA_H
#define COLA_H
#include "nodo.h"
#include "vehiculo.h"
#include <iostream>


class cola
{
private:
    Nodo* Inicial;
    Nodo* Ultimo;
    int cantidad;
    
public:
    cola();
    Vehiculo solicitar();
    void agregar(Nodo* actual);
    void recorrer();
    int getCantidad();
};

#endif // COLA_H
