#include "Cuenta.h"

Cuenta::Cuenta(string id, float saldo, string moneda)
{
	this->id = id;


	this->saldo = saldo;
	this->moneda = moneda;

	cantTransacciones = 100;

	transacciones = new ModuloTransacciones (cantTransacciones);
}

Cuenta::~Cuenta()
{
}

string Cuenta::getId()
{


	return id;


}

string Cuenta::currentDateTime()
{
	
		time_t     now = time(0);
		struct tm  tstruct;
		char       buf[80];
		tstruct = *localtime(&now);
		strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
		return buf;

}

ModuloTransacciones* Cuenta::getModTransacciones()
{
	return transacciones;
}
