#pragma once
#include "Cliente.h"
#include "Persona.h"
#include "Empresa.h"
class ModuloClientes
{

private:
	Cliente** clientes;
	int cantClientes;
	int index;

public:
	ModuloClientes(int cantClientes);
	~ModuloClientes();
	void registrarCliente(int cod,int cant);

	void mostrarClientes();
	void ordenarXcod();
	void mostrarOrdenados();

	Cliente* buscarCliente(int cod);

	void eliminarCliente(int cod);



};

