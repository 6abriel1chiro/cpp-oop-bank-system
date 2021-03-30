#pragma once
#include "Transaccion.h"
class ModuloTransacciones
{
private:

	Transaccion** transacciones;
	int index;
	int cantTransacciones;
public:

	ModuloTransacciones(int cantTransacciones);
	~ModuloTransacciones();
	void mostrarTransacciones();

	void registrarTransaccion(string fecha, int monto, string tipo);


};

