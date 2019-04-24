#include "mainwindow.h"
#include <QApplication>
#include "cola.h"
#include "empresa.h"
#include "vehiculo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Empresa* empresa=new Empresa();
    Vehiculo* uno = new Vehiculo();
    Vehiculo* dos = new Vehiculo();
    Vehiculo* tres = new Vehiculo();
    Vehiculo* cuatro = new Vehiculo();
    Vehiculo* cinco = new Vehiculo();
    Vehiculo* seis = new Vehiculo();
    empresa->Produccion(*uno,1);
    empresa->Produccion(*dos,2);
    empresa->Produccion(*tres,3);
    empresa->Produccion(*cuatro,4);
    empresa->Produccion(*cinco,5);
    empresa->Produccion(*seis,6);
    return a.exec();
}
