#pragma once
//#include "ModuloCuentas.h"
#include "ModuloClientes.h"


class Sistema
{
private:
	ModuloClientes* clientes;
	int cantClientes;
public:
	Sistema(int cantClientes);
	~Sistema();
	ModuloClientes* getModClientes();





};

