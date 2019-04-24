#include "empresa.h"

Empresa::Empresa()
{
    this->encargadoA->setProceso('A');
    this->encargadoB->setProceso('B');
    this->encargadoC->setProceso('C');
    this->encargadoD->setProceso('D');
    this->encargadoE->setProceso('E');
    this->encargadoF->setProceso('F');
}

void Empresa::Produccion(Vehiculo carro, int linea){
    if(linea==1){
        this->linea1->ingresar(carro);
    }else if (linea==2) {
        this->linea2->ingresar(carro);
    }else if (linea==3) {
        this->linea3->ingresar(carro);
    }else if (linea==4) {
        this->linea4->ingresar(carro);
    }else if (linea==5) {
        this->linea5->ingresar(carro);
    }else if (linea==6) {
        this->linea6->ingresar(carro);
    }else{
        //error
    }
}
