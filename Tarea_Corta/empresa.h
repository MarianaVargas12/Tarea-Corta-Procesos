#ifndef EMPRESA_H
#define EMPRESA_H
#include "vehiculo.h"
#include "linea.h"
#include "lista.h"
#include "nodo.h"
#include "encargado.h"

class Empresa
{
private:
    Encargado* encargadoA =new Encargado();
    Encargado* encargadoB =new Encargado();
    Encargado* encargadoC =new Encargado();
    Encargado* encargadoD =new Encargado();
    Encargado* encargadoE =new Encargado();
    Encargado* encargadoF =new Encargado();
    Linea* linea1= new Linea(1, encargadoA,encargadoB,encargadoC,encargadoD,encargadoE,encargadoF);
    Linea* linea2= new Linea(2, encargadoA,encargadoB,encargadoC,encargadoD,encargadoE,encargadoF);
    Linea* linea3= new Linea(3, encargadoA,encargadoB,encargadoC,encargadoD,encargadoE,encargadoF);
    Linea* linea4= new Linea(4,encargadoA,encargadoB,encargadoC,encargadoD,encargadoE,encargadoF);
    Linea* linea5= new Linea(5, encargadoA,encargadoB,encargadoC,encargadoD,encargadoE,encargadoF);
    Linea* linea6= new Linea(6,encargadoA,encargadoB,encargadoC,encargadoD,encargadoE,encargadoF);

public:
    Empresa();
    void Produccion(Vehiculo carro,int linea);
};

#endif // EMPRESA_H
