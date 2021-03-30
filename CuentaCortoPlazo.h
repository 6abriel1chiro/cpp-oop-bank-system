#pragma once
#include "Cuenta.h"
class CuentaCortoPlazo :
    public Cuenta
{

protected:





public:

    CuentaCortoPlazo(string id, float saldo,string moneda);
    ~CuentaCortoPlazo();
    void deposito(float monto);
    void retiro(float monto);
    void mostrar();

};

