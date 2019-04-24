#include "linea.h"

Linea::Linea(int linea,Encargado* A, Encargado* B,Encargado* C, Encargado* D, Encargado* E, Encargado* F)
{
    this->linea=linea;
    this->A=A;
    this->B=B;
    this->C=C;
    this->D=D;
    this->E=E;
    this->F=F;
}
void Linea::asignarProcesos(){
    if(linea==1){
        this->procesos[0]='A';
        this->procesos[1]='B';
        this->procesos[2]='C';
        this->procesos[3]='D';
        this->procesos[4]='E';
        this->procesos[5]='F';
    }
    else if (linea==2) {
        this->procesos[0]='B';
        this->procesos[1]='D';
        this->procesos[2]='F';
        this->procesos[3]='E';
        this->procesos[4]='A';
        this->procesos[5]='C';
    }
    else if (linea==3) {
        this->procesos[0]='F';
        this->procesos[1]='C';
        this->procesos[2]='E';
        this->procesos[3]='A';
        this->procesos[4]='B';
        this->procesos[5]='D';
    }
    else if (linea==4) {
        this->procesos[0]='E';
        this->procesos[1]='F';
        this->procesos[2]='C';
        this->procesos[3]='D';
        this->procesos[4]='A';
        this->procesos[5]='B';
    }
    else if (linea==5) {
        this->procesos[0]='C';
        this->procesos[1]='D';
        this->procesos[2]='F';
        this->procesos[3]='E';
        this->procesos[4]='B';
        this->procesos[5]='A';
    }
    else if (linea==6) {
        this->procesos[0]='D';
        this->procesos[1]='E';
        this->procesos[2]='A';
        this->procesos[3]='C';
        this->procesos[4]='F';
        this->procesos[5]='B';
    }
}
char Linea::proceso(int Num){
    if(Num<6){
        return this->procesos[Num];
    }else{
    }
}
void Linea::ingresar(Vehiculo carro){
    Nodo* nuevoNodo= new Nodo();
    nuevoNodo->setVehiculo(carro);
    if(Vehiculos->getCantidad()>=6){
        vehiculosEspera->agregar(nuevoNodo);
    }
    else {
        Vehiculos->insertarFinal(nuevoNodo);
        produccion();
    }
}
void Linea::produccion(){
    Nodo* temp=Vehiculos->getHead();
    if(temp==nullptr){

    }else {
        while(temp!=nullptr){
            if(temp->getVehiculo().getTiempo()!=0){

            }else{
                if(temp->getVehiculo().getProcesoSiguiente()=='A'){
                    Vehiculos->eliminar(temp);
                    Vehiculo nuevoCarro= vehiculosEspera->solicitar();
                    //if(nuevoCarro==NULL){
                        // no hay
                    //}
                    //else {
                        Nodo* nuevoNodo= new Nodo();
                        nuevoNodo->setVehiculo(nuevoCarro);
                        Vehiculos->insertarFinal(nuevoNodo);
                    //}
                }
                else if(temp->getVehiculo().getProcesoSiguiente()=='A'){
                    temp->getVehiculo().setProcesoActual('A');
                    temp->getVehiculo().setProcesoSiguiente(buscarSiguiente('A'));
                    temp->getVehiculo().setTiempo(10*linea);
                    A->Nuevo(temp->getVehiculo());
                    temp=temp->getSiguiente();
                }else if (temp->getVehiculo().getProcesoSiguiente()=='B') {
                    temp->getVehiculo().setProcesoActual('B');
                    temp->getVehiculo().setProcesoSiguiente(buscarSiguiente('B'));
                    temp->getVehiculo().setTiempo(5*linea);
                    B->Nuevo(temp->getVehiculo());
                    temp=temp->getSiguiente();
                }else if (temp->getVehiculo().getProcesoSiguiente()=='C') {
                    temp->getVehiculo().setProcesoActual('C');
                    temp->getVehiculo().setProcesoSiguiente(buscarSiguiente('C'));
                    temp->getVehiculo().setTiempo(12*linea);
                    C->Nuevo(temp->getVehiculo());
                    temp=temp->getSiguiente();
                }else if (temp->getVehiculo().getProcesoSiguiente()=='D') {
                    temp->getVehiculo().setProcesoActual('D');
                    temp->getVehiculo().setProcesoSiguiente(buscarSiguiente('D'));
                    temp->getVehiculo().setTiempo(16*linea);
                    D->Nuevo(temp->getVehiculo());
                    temp=temp->getSiguiente();
                }else if (temp->getVehiculo().getProcesoSiguiente()=='E') {
                    temp->getVehiculo().setProcesoActual('E');
                    temp->getVehiculo().setProcesoSiguiente(buscarSiguiente('E'));
                    temp->getVehiculo().setTiempo(8*linea);
                    E->Nuevo(temp->getVehiculo());
                    temp=temp->getSiguiente();
                }else if (temp->getVehiculo().getProcesoSiguiente()=='F') {
                    temp->getVehiculo().setProcesoActual('F');
                    temp->getVehiculo().setProcesoSiguiente(buscarSiguiente('F'));
                    temp->getVehiculo().setTiempo(3*linea);
                    F->Nuevo(temp->getVehiculo());
                    temp=temp->getSiguiente();
                }
            }
        }
    }
}
char Linea::buscarSiguiente(char letra){
    for (int i=0;i<7;i++) {
        if(i==6){
            return 'G';
        }
        else if(letra==procesos[i]){
            return procesos[i+1];
        }
    }
}
