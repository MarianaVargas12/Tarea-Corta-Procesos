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
