#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string> 
#include "ModuloCuentas.h"

using namespace std;

class Cliente
{
protected:

	int codCliente;
	int cantCuentas;
	ModuloCuentas* cuentas;






	

public:
	Cliente(int codCliente, int cantCuentas);
	~Cliente();
	virtual void mostrar();
	int getCod();
	virtual ModuloCuentas* getModCuentas();



};

