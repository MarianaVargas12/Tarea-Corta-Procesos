#ifndef VEHICULO_H
#define VEHICULO_H

class Vehiculo
{
private:
    char procesoActual;
    char procesoSiguiente;
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
    void setProcesoSiguiente(char Proceso);
    char getProcesoSiguiente();
};

#endif // VEHICULO_H
