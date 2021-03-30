#include "Persona.h"

Persona::Persona(string nombre, long telefono, int cod, int cant,int ci, string direccion) : Cliente(cod,cant)
{
	this->nombre = nombre;
	this->telefono = telefono;
	this->ci = ci;
	this->direccion = direccion;
	cuentas = new ModuloCuentas(cant);

	string id = nombre + to_string(ci);
	cuentas->registrarCuenta(id);




}

Persona::~Persona()
{
}

void Persona::mostrar()
{
	Cliente::mostrar();
	cout << "nombre :" << nombre << endl;
	cout << "telefono :" << telefono << endl;
	cout << "ci:  " << ci << endl;
	cout << "direccion:  " << direccion << endl;
	cout << "cuentas: " << endl;
	cuentas->mostrarCuentas();
}
