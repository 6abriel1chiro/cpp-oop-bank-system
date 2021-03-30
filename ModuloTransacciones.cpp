#include "ModuloTransacciones.h"

ModuloTransacciones::ModuloTransacciones(int cantTransacciones)
{

	this->cantTransacciones = cantTransacciones;
	index = 0;
	transacciones = new Transaccion* [cantTransacciones];



}

ModuloTransacciones::~ModuloTransacciones()
{
	for (int i = 0; i < index; i++)
	{

		delete transacciones[i];
	}
	delete[]transacciones;
}

void ModuloTransacciones::mostrarTransacciones()
{
	for (int i = 0; i < index; i++)
	{
		transacciones[i]->mostrar();
	}
}

void ModuloTransacciones::registrarTransaccion(string fecha, int monto, string tipo)
{
	if (index<cantTransacciones)
	{
		transacciones[index] = new Transaccion(fecha, monto, tipo);
		index++;


	}
	else
	{
		cout << "error limite excedido " << endl;
	}
}


