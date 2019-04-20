#include "encargado.h"

Encargado::Encargado(){
}

bool Encargado::Nuevo(Vehiculo carro){
    if(this->vehiculosProcesos->getHead()==nullptr){
        Nodo* nuevoNodo= new Nodo();
        nuevoNodo->setVehiculo(carro);
        this->vehiculosProcesos->insertarInicio(nuevoNodo);
        this->carroProceso+=1;
    }else if (this->carroProceso<=3) {
        Nodo* nuevoNodo= new Nodo();
        nuevoNodo->setVehiculo(carro);
        this->vehiculosProcesos->insertarInicio(nuevoNodo);
        this->carroProceso+=1;
    }else{
        Cola();
        Nodo* nuevoNodo= new Nodo();
        nuevoNodo->setVehiculo(carro);
        this->vehiculosProcesos->insertarInicio(nuevoNodo);
        this->carroProceso+=1;
    }
}
void Encargado::Cola(){
    Nodo* mayor=this->vehiculosProcesos->getHead();
    Nodo* temp=this->vehiculosProcesos->getHead();
    for (int i=0;i<3;i++) {
        if(mayor->getVehiculo().getTiempo()<temp->getVehiculo().getTiempo()){
            mayor= temp;
            temp= temp->getSiguiente();
        }else{
            temp=temp->getSiguiente();
        }
    }
    this->carroProceso-=1;
    this->vehiculosProcesos->eliminar(mayor);
    this->colaProceso->agregar(mayor);
}
void Encargado::sacarCola(){
    Vehiculo carro= this->colaProceso->solicitar();
    Nodo* nuevoNodo= new Nodo();
    nuevoNodo->setVehiculo(carro);
    this->vehiculosProcesos->insertarInicio(nuevoNodo);
}
void Encargado::setProceso(char proceso){
    this->proceso=proceso;
}
char Encargado::getProceso(){
    return this->proceso;
}
