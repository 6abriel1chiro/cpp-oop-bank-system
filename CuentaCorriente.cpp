#include "CuentaCorriente.h"

CuentaCorriente::CuentaCorriente(string id, float saldo,string moneda) : CuentaCortoPlazo(id, saldo, moneda)
{
	interes = 0.3;
}

CuentaCorriente::~CuentaCorriente()
{
}

void CuentaCorriente::actualizacion()
{
	float monto = interes * saldo;
	saldo = saldo + monto;
}

void CuentaCorriente::opciones()
{
	int op,monto;
	bool band = true;
	while (band)
	{
	
	cout << "1. deposito" << endl;
	cout << "2. retiro" << endl;
	cout << "3. actualizacion" << endl;
	cin >> op;
	switch (op)
	{

	case 1:
		cout << "ingrese un monto " << endl;
		cin >> monto;
		deposito(monto);
		cout << "se añadio " << monto << moneda << endl;
		transacciones->registrarTransaccion(currentDateTime(), monto, "deposito");

		break;
	case 2:
		cout << "ingrese un monto " << endl;
		cin >> monto;
		retiro(monto);
		cout << "se retiraron " << monto << moneda << endl;
		transacciones->registrarTransaccion(currentDateTime(), monto, "retiro");


		break;
	case 3:
		actualizacion();
		cout << "se añadio el monto de interes " << "(" << 0.3 << ")%" << endl;
		transacciones->registrarTransaccion(currentDateTime(), interes, "actualizacion");

		break;
	case 4:
		band = false;
		break;

	default:
		break;
	}
	}
}

void CuentaCorriente::mostrar()
{

	CuentaCortoPlazo::mostrar();
	cout << "interes: " << interes << endl;
}

void CuentaCorriente::setInteres(float interes)
{

	this->interes = interes;


}
