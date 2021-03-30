#pragma once
#include "Cliente.h"
class Empresa :
    public Cliente
{

private:

    int nit;
    string ubicacion;
    string tipo;
    string nombre;
    long telefono;



public:
    Empresa(string nombre, long telefono,int cod, int cant,int nit, string ubicacion, string tipo);
    ~Empresa();
    void mostrar();

};

