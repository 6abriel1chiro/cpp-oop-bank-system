#include "CuentaLargoPlazo.h"

CuentaLargoPlazo::CuentaLargoPlazo(string id, float saldo,string moneda, string fechaIni, string fechaFin, float interesAnual):Cuenta(id, saldo,moneda)
{

	this->fechaIni = fechaIni;
	this->fechaFin = fechaFin;
	this->interesAnual = interesAnual;
}

CuentaLargoPlazo::~CuentaLargoPlazo()
{


}

void CuentaLargoPlazo::actualizacion()
{
	float monto = interesAnual * saldo;
	saldo = saldo + monto;
}

void CuentaLargoPlazo::opciones()
{
	int op;
	bool band = true;
	while (band)
	{
	
	cout << "1. Actualizacion" << endl;
	cout << "2. salir" << endl;
	cin >> op;
	switch (op)
	{
	case 1:
		actualizacion();
		cout << "se añadio el monto correspondiente al innteres anual " << "(" << interesAnual<<")%" << endl;
		transacciones->registrarTransaccion(currentDateTime(), interesAnual, "actualizacion");

		break;
	case 2:
		band = false;

	default:
		break;
	}
	}
}

void CuentaLargoPlazo::mostrar()
{

	cout << "id " << id << endl;
	cout << "saldo " << saldo<<" "<<moneda<<endl;
	cout << "fecha ini " << fechaIni<<endl;
	cout << "fecha fin " << fechaFin<<endl;
	cout << "interes: " << interesAnual<<endl;
}
