#ifndef ENCARGADO_H
#define ENCARGADO_H
#include "cola.h"
#include "lista.h"
#include "vehiculo.h"
#include "nodo.h"

class Encargado
{
private:
    char proceso;
    cola* colaProceso= new cola();
    Lista* vehiculosProcesos= new Lista();
    int carroProceso=0;


public:
    Encargado();
    bool Nuevo(Vehiculo carro);
    void Cola();
    void sacarCola();
    bool maximo3();
    void setProceso(char proceso);
    char getProceso();
};

#endif // ENCARGADO_H
