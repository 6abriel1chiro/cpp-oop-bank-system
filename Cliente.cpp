#include "Cliente.h"

Cliente::Cliente(int codCliente,int cantCuentas)
{
	this->codCliente = codCliente;
	this->cantCuentas = cantCuentas;
	cuentas = new ModuloCuentas(cantCuentas);


}

Cliente::~Cliente()
{
}

void Cliente::mostrar()
{

	cout << "codCliente : " << codCliente << endl;
}

int Cliente::getCod()
{
	return codCliente;
}

ModuloCuentas* Cliente::getModCuentas()
{
	return cuentas;
}



