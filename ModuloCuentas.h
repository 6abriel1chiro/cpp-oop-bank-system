#pragma once
#include "Cuenta.h"
#include "CuentaCortoPlazo.h"
#include "CuentaCorriente.h"
#include "CajaAhorro.h"
#include "CuentaLargoPlazo.h"

class ModuloCuentas
{

private:

	Cuenta** cuentas;
	int cantCuentas;
	int index;

public:

	ModuloCuentas(int cantCuentas);
	~ModuloCuentas();
	void registrarCuenta(string id);

	Cuenta* buscarCuenta(string id);

	void mostrarCuentas();


	void eliminarCuenta(string id);





};

