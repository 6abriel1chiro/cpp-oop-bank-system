#pragma once
#include "Cuenta.h"
class CuentaLargoPlazo :
    public Cuenta
{
private: 
    string fechaIni;
    string fechaFin;
    float interesAnual;
public:
    CuentaLargoPlazo(string id, float saldo,string moneda, string fechaIni, string fechaFin, float interesAnual);
    ~CuentaLargoPlazo();

    void actualizacion();
    void opciones();
    void mostrar();


};

