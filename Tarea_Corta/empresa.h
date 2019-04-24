#ifndef EMPRESA_H
#define EMPRESA_H
#include "vehiculo.h"
#include "linea.h"
#include "lista.h"
#include "nodo.h"
#include "encargado.h"
#include "cola.h"

class Empresa
{
private:
    Encargado* encargadoA =new Encargado(colaGeneral,tiempo);
    Encargado* encargadoB =new Encargado(colaGeneral,tiempo);
    Encargado* encargadoC =new Encargado(colaGeneral,tiempo);
    Encargado* encargadoD =new Encargado(colaGeneral,tiempo);
    Encargado* encargadoE =new Encargado(colaGeneral,tiempo);
    Encargado* encargadoF =new Encargado(colaGeneral,tiempo);
    cola* colaGeneral=new cola();
    int tiempo1=0;
    int* tiempo=&tiempo1;
    Linea* linea1= new Linea(1, encargadoA,encargadoB,encargadoC,encargadoD,encargadoE,encargadoF);
    Linea* linea2= new Linea(2, encargadoA,encargadoB,encargadoC,encargadoD,encargadoE,encargadoF);
    Linea* linea3= new Linea(3, encargadoA,encargadoB,encargadoC,encargadoD,encargadoE,encargadoF);
    Linea* linea4= new Linea(4,encargadoA,encargadoB,encargadoC,encargadoD,encargadoE,encargadoF);
    Linea* linea5= new Linea(5, encargadoA,encargadoB,encargadoC,encargadoD,encargadoE,encargadoF);
    Linea* linea6= new Linea(6,encargadoA,encargadoB,encargadoC,encargadoD,encargadoE,encargadoF);

public:
    Empresa();
    void Produccion(Vehiculo carro,int linea);
    void print();
};

#endif // EMPRESA_H
