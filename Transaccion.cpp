#include "Transaccion.h"
Transaccion::Transaccion(string fecha, int monto, string tipo)
{
	this->fecha = fecha;
	this->monto = monto;
	this->tipo = tipo;
}

Transaccion::~Transaccion()
{
}

void Transaccion::mostrar()
{
	cout << "fecha de transaccion: " << fecha << endl;
	cout << "monto: " << monto << endl;
	cout << "tipo: " << tipo << endl;
}
