#ifndef NODO_H
#define NODO_H
#include "vehiculo.h"


class Nodo
{
private:
    Nodo* siguiente;
    Nodo* anterior;
    Vehiculo vehiculo;
    
public:
    Nodo();
    Nodo* getSiguiente();
    void setSiguiente(Nodo* Siguiente);
    Nodo* getAnterior();
    void setAnterior(Nodo* Anterior);
    Vehiculo getVehiculo();
    void setVehiculo(Vehiculo carro);
};

#endif // NODO_H
