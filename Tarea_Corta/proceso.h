#ifndef PROCESO_H
#define PROCESO_H
#include "vehiculo.h"


class Proceso
{
private:
    char proceso;
    int tiempo;
    
    
public:
    Proceso();
    void accion(Vehiculo carro);
};

#endif // PROCESO_H
