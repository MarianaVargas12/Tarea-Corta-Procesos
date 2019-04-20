#ifndef LINEA_H
#define LINEA_H
#include "lista.h"
#include "vehiculo.h"
#include "encargado.h"
#include "cola.h"

class Linea
{
private:
    int linea;
    char procesos[6];
    cola* vehiculosEspera= new cola();
    Lista* Vehiculos= new Lista();
    Encargado* A;
    Encargado* B;
    Encargado* C;
    Encargado* D;
    Encargado* E;
    Encargado* F;
public:
    Linea(int linea,Encargado* A, Encargado* B,Encargado* C, Encargado* D, Encargado* E, Encargado* F);
    void asignarProcesos();
    char proceso(int Num);
    void ingresar(Vehiculo carro);
    void produccion();
    char buscarSiguiente(char letra);
};

#endif // LINEA_H
