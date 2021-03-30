#pragma once
#include "Cliente.h"
class Persona :
    public Cliente
{

private:

    int ci;
    string direccion;
    string nombre;
    long telefono;
    public:
        Persona(string nombre, long telefono, int cod , int cant, int ci, string direccion);
        ~Persona();
        void mostrar();



};

