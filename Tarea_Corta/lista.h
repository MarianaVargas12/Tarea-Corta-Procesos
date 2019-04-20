#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include <iostream>
using namespace std;

class Lista
{
private:
    Nodo* Head = nullptr;

public:
    Lista();
    void insertarFinal(Nodo* nuevoNodo);
    void insertarInicio(Nodo* nuevoNodo);
    void display();
    Nodo* getHead();
    void eliminar(Nodo* actual);

};

#endif // LISTA_H
