#include "Empresa.h"

Empresa::Empresa(string nombre, long telefono, int cod, int cant, int nit, string ubicacion, string tipo) : Cliente(cod,cant)
{
	this->nit = nit;
	this->ubicacion = ubicacion;
	this->tipo = tipo;

	this->nombre = nombre;
	this->telefono = telefono;
	cuentas = new ModuloCuentas(cant);

	string id = nombre + to_string(nit);
	cuentas->registrarCuenta(id);


}

Empresa::~Empresa()
{


}

void Empresa::mostrar()
{
	Cliente::mostrar();
	cout << "nombre :" << nombre << endl;
	cout << "telefono :" << telefono << endl;
	cout << "nit:  " << nit << endl;
	cout << "ubicacion:  " << ubicacion << endl;
	cout << "tipo:  " << tipo << endl;

	cout << "cuentas: " << endl;
	cuentas->mostrarCuentas();
	
}
