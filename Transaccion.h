#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <chrono>
#include <ctime>  
using namespace std;
class Transaccion
{

private:
	string fecha;
	int monto;
	string tipo;



public:
	Transaccion(string fecha, int monto, string tipo);
	~Transaccion();

	void mostrar();
	

};

