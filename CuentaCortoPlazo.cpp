#include "CuentaCortoPlazo.h"

CuentaCortoPlazo::CuentaCortoPlazo(string id, float saldo,string moneda): Cuenta(id,saldo,moneda)
{
}

CuentaCortoPlazo::~CuentaCortoPlazo()
{
}

void CuentaCortoPlazo::deposito(float monto)
{
	//sumar
	saldo = saldo+monto;



}

void CuentaCortoPlazo::retiro(float monto)
{
	//restar
	saldo = saldo - monto;
}

void CuentaCortoPlazo::mostrar()
{
	cout << "id : " << id << endl;
	cout << "saldo " << saldo << " " << moneda << endl;

}
