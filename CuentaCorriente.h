#pragma once
#include "CuentaCortoPlazo.h"
class CuentaCorriente :
    public CuentaCortoPlazo
{

private:

    float interes;
public:
    CuentaCorriente(string id, float saldo,string moneda);
    ~CuentaCorriente();

    void actualizacion();
    void opciones();
    void mostrar();
    void setInteres(float interes);


};

