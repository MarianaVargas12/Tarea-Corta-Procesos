#include "lista.h"

Lista::Lista()
{

}
void Lista::insertarFinal(Nodo* nuevoNodo){
    Nodo *actual=Head;
    if(Head !=nullptr){
        while(actual->getSiguiente()!=nullptr){
            actual=actual->getSiguiente();
        }
        actual->setSiguiente(nuevoNodo);
    }

    else{
        Head = nuevoNodo;
        Head->setSiguiente(nullptr);
    }
}

void Lista::insertarInicio(Nodo* nuevoNodo){
    nuevoNodo->setSiguiente(Head);
    Head = nuevoNodo;
}

void Lista::display(){
    Nodo *actual = Head;
    if(actual==nullptr){
        cout<<"empty"<<endl;
    }

    else{
        while(actual->getSiguiente()!=nullptr){
            cout<<actual<<endl;
            actual=actual->getSiguiente();
        }
    }
}
Nodo* Lista::getHead(){
    return this->Head;
}

void Lista::eliminar(Nodo* actual){
    Nodo* temp= Head;
    Nodo* anterior=Head;
    if(Head==nullptr){

    }else{
        while(temp!=nullptr){
            if(temp==actual && temp->getSiguiente()==nullptr){
                anterior->setSiguiente(nullptr);
                delete(temp);
                break;
            }
            else if(temp==actual && temp==anterior){
                this->Head=temp->getSiguiente();
                delete(temp);
                break;
            }
            else if (temp== actual) {
                anterior->setSiguiente(temp->getSiguiente());
                delete(temp);
                break;
            }
            else {
                temp=temp->getSiguiente();
            }
        }
    }
}
