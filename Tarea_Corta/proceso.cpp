#include "proceso.h"

Proceso::Proceso()
{

}

void Proceso::accion(Vehiculo carro){
    carro.setTiempo(carro.getTiempo()-1);
}
