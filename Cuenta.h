#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <stdio.h>
#include "ModuloTransacciones.h"


using namespace std;

class Cuenta
{



protected:
	string id;
	float saldo;
	string moneda;

	ModuloTransacciones* transacciones;
	int cantTransacciones;





public:

	Cuenta(string id, float saldo, string moneda);
	~Cuenta();
	string getId();
	virtual void actualizacion()=0;
	virtual void opciones() = 0;
	virtual void mostrar() = 0;
	string currentDateTime();

	ModuloTransacciones* getModTransacciones();
	





};

