#ifndef VEHICULO_H
#define VEHICULO_H

class Vehiculo
{
private:
    char procesoActual;
    int tiempo;
    int linea;

public:
    Vehiculo();
    void setTiempo(int tiempo);
    int getTiempo();
    void setLinea(int linea);
    int getLinea();
    void setProcesoActual(char Proceso);
    char getProcesoActual();
};

#endif // VEHICULO_H
