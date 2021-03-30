#include "Sistema.h"

Sistema::Sistema(int cantClientes)
{
	this->cantClientes = cantClientes;

	clientes = new ModuloClientes(cantClientes);

}

Sistema::~Sistema()
{

}

ModuloClientes* Sistema::getModClientes()
{
	// TODO: insert return statement here
	return clientes;
}


