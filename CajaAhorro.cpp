#include "CajaAhorro.h"

CajaAhorro::CajaAhorro(string id, float saldo,string moneda): CuentaCortoPlazo(id,saldo,moneda)
{
	costoMensual = 5;
}

CajaAhorro::~CajaAhorro()
{
}

void CajaAhorro::actualizacion()
{

	saldo = saldo - costoMensual;


}

void CajaAhorro::opciones()
{

	int op, monto;
	bool band=true;
	while (band)
	{
	
	cout << "1. deposito" << endl;
	cout << "2. retiro" << endl;
	cout << "3. actualizacion" << endl;
	cout << "4. salir" << endl;
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
		cout << "se retiro " << monto << moneda << endl;
		transacciones->registrarTransaccion(currentDateTime(), monto, "retiro");

		break;
	case 3:
		actualizacion();
		cout << "se aplico el costo mensual " << "(" << costoMensual << ")" << endl;
		transacciones->registrarTransaccion(currentDateTime(), costoMensual, "actualizacion");


		break;
	case 4:
		band = false;
		break;

	default:
		break;
	}
	}

}

void CajaAhorro::mostrar()
{

	CuentaCortoPlazo::mostrar();
	cout << "costo mensual " << costoMensual << endl;
}

void CajaAhorro::setCosto(float costoMensual)
{
	this->costoMensual = costoMensual;
}
