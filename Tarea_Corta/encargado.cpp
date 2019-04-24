#include "encargado.h"

Encargado::Encargado(cola* colaGeneral,int* tiempo){
    this->colaGeneral=colaGeneral;
    this->tiempo=tiempo;
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
    this->colaGeneral->agregar(mayor);
}
void Encargado::sacarCola(){
    Vehiculo carro= this->colaProceso->solicitar();
    this->colaGeneral->solicitar();
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

void Encargado::funcion(){
    Proceso* proceso= new Proceso();
    int tiempo1= *tiempo;
    while (vehiculosProcesos->getHead()!=nullptr) {
        while (tiempo1%5==0) {
            tiempo1= (*tiempo)+1;
            this->tiempo = &tiempo1;
            Nodo* temp= vehiculosProcesos->getHead();
            while(temp!=nullptr && temp->getVehiculo().getTiempo()!=0){
                proceso->accion(temp->getVehiculo());
                temp=temp->getSiguiente();
            }
            if(temp->getVehiculo().getTiempo()==0){
                vehiculosProcesos->eliminar(temp);
                sacarCola();
            }
        }
        Cola();
        sacarCola();
        tiempo1+=1;
    }
}
