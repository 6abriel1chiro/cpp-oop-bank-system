#include "ModuloClientes.h"

ModuloClientes::ModuloClientes(int cantClientes)
{

	this->cantClientes = cantClientes;
	index = 0;
	clientes = new Cliente* [cantClientes];
}

ModuloClientes::~ModuloClientes()
{
	for (int  i = 0; i < index; i++)
	{
		delete clientes[i];

	}
	delete[]clientes;
}

void ModuloClientes::registrarCliente(int cod,int cant)
{
	if (index < cantClientes)
	{
		cout << "1. persona " << endl;
		cout << "2. empresa " << endl;
		int op;
		string nombre;
		long fono;
		int nit, ci;
		string direccion;
		string tipo;


		cin >> op;
		switch (op)
		{
		case 1:
			cout << "ingrese nombre ";
			cin >> nombre;
				cout << "ingrese telefono ";
			cin >> fono;
			cout << "ingrese ci ";
			cin >> ci;
			cout << "ingrese dieccion ";
			cin >> direccion;

		
			
			clientes[index] = new Persona(nombre, fono,cod,cant, ci, direccion);
			index++;
			

			break;
		case 2:
			cout << "ingrese nombre ";
			cin >> nombre;
			cout << "ingrese telefono ";
			cin >> fono;
			cout << "ingrese nit ";
			cin >> nit;
			cout << "ingrese ubicacion ";
			cin >> direccion;
			cout << "ingrese tipo ";
			cin >> tipo;
			clientes[index] = new Empresa(nombre, fono,cod,cant, nit, direccion, tipo);
			index++;

			break;

		default:
			break;
		}
	}
	else
		cout << "error" << endl;
}

void ModuloClientes::mostrarClientes()
{
	for (int i = 0; i < index; i++)
	{
		clientes[i]->mostrar();
	}
}

void ModuloClientes::ordenarXcod()
{

	Cliente temp(0,0);
	for (int i = 0; i < index; i++) {
		for (int j = 0; j < index - 1; j++)
		{
			if (clientes[j]->getCod() > clientes[j + 1]->getCod())
			{
				temp = *clientes[j];
				*clientes[j] = *clientes[j + 1];
				*clientes[j + 1] = temp;
			}
		}
	}

}

void ModuloClientes::mostrarOrdenados()
{

	ordenarXcod();
	mostrarClientes();
}

Cliente* ModuloClientes::buscarCliente(int cod)
{
	for (int i = 0; i < index; i++)
	{
		if (clientes[i]->getCod()==cod)
		{
			return clientes[i];

		}
	}
	return nullptr;
}

void ModuloClientes::eliminarCliente(int cod)
{

	Cliente* temp = buscarCliente(cod);
	int i;
	for (i = 0; i < index; i++)
		if (temp == clientes[i])
			break;
	if (i < index)
	{
		index--;
		clientes[i]->~Cliente();
		for (int j = i; j < index; j++)
			clientes[j] = clientes[j + 1];

	}

}
