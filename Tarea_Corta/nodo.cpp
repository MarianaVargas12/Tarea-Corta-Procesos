#include "nodo.h"

Nodo::Nodo()
{

}

Nodo* Nodo::getSiguiente(){
    return this->siguiente;
}
void Nodo::setSiguiente(Nodo* Siguiente){
    this->siguiente= Siguiente;
}
Vehiculo Nodo::getVehiculo(){
    return this->vehiculo;
}
void Nodo::setVehiculo(Vehiculo carro){
    this->vehiculo= carro;
}
