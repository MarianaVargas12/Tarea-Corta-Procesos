#ifndef NODO_H
#define NODO_H
#include "vehiculo.h"
#include "proceso.h"


class Nodo
{
private:
    Nodo* siguiente;
    Nodo* anterior;
    Vehiculo vehiculo;
    Proceso proceso;
    
public:
    Nodo();
    Nodo* getSiguiente();
    void setSiguiente(Nodo* Siguiente);
    Nodo* getAnterior();
    void setAnterior(Nodo* Anterior);
    Vehiculo getVehiculo();
    void setVehiculo(Vehiculo carro);
    Proceso getProceso();
    void setProceso(Proceso carro);
};

#endif // NODO_H
