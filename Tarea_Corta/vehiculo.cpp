#include "vehiculo.h"

Vehiculo::Vehiculo()
{

}
void Vehiculo::setTiempo(int tiempo){
    this->tiempo=tiempo;
}
int Vehiculo::getTiempo(){
    return this->tiempo;
}
void Vehiculo::setLinea(int linea){
    this->linea=linea;
}
int Vehiculo::getLinea(){
    return this->linea;
}
void Vehiculo::setProcesoActual(char proceso){
    this->procesoActual=proceso;
}
char Vehiculo::getProcesoActual(){
    return this->procesoActual;
}
