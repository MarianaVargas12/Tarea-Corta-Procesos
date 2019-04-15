#include "cola.h"

cola::cola()
{

}

Vehiculo cola::solicitar(){
    this->cantidad-=1;
    Nodo* actual= this->Inicial;
    if(actual==nullptr){
        //return NULL;
    }
    else{
        if(actual->getSiguiente()!=nullptr){
            Vehiculo carro= actual->getVehiculo();
            actual= actual->getSiguiente();
            free(Inicial);
            Inicial=actual;
            return carro;
        }
        else {
            Vehiculo carro= actual->getVehiculo();
            free(Inicial);
            Inicial= nullptr;
            Ultimo=nullptr;
            return carro;
        }
    }
}
void cola::agregar(Nodo* actual){
    this->cantidad+=1;
    if(Ultimo==nullptr){
        Ultimo->setSiguiente(actual);
        Inicial=Ultimo;
    }
    else{
        Ultimo->setSiguiente(actual);
        actual->setSiguiente(nullptr);
        Ultimo= actual;
    }
}
void cola::recorrer(){
    Nodo* temp= Inicial;
    if(Inicial==nullptr && Ultimo==nullptr){
        std::cout<<"Queue is empty"<<endl;
    }while(temp!=nullptr){
        std::cout<<temp->getVehiculo()<<endl;
        temp= temp->getSiguiente();
    }
    std::cout<<<<endl;
}
int cola::getCantidad(){
    return this->cantidad;
}
