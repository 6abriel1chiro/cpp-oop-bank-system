#pragma once
#include "CuentaCortoPlazo.h"
class CajaAhorro :
    public CuentaCortoPlazo
{

private:
    int costoMensual;
public:

    CajaAhorro(string id, float saldo,string moneda);
    ~CajaAhorro();

    void actualizacion();
    void opciones();
    void mostrar();


    void setCosto(float costo);

};

