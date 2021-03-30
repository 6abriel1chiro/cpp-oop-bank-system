// LABO 2 BANCOS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Sistema.h"
#include "CuentaLargoPlazo.h"
#include "CajaAhorro.h"
#include "CuentaCorriente.h"

void test()
{
	Cuenta* cuentas[3];
	cuentas[0] = new CajaAhorro("lol2", 2000.0,"$");
	cuentas[1] = new CuentaCorriente("lol", 300.0, "Bs");
	cuentas[2] = new CuentaLargoPlazo("ss", 400.0, "E*", "20/2/2002", "20/2/2010",2);
	for (int i = 0; i < 3; i++)
	{
		cuentas[i]->mostrar();
	


	}

	cuentas[0]->opciones();

	cuentas[0]->getModTransacciones()->mostrarTransacciones();




}void test2()
{
	Sistema bisa(3);
	bisa.getModClientes()->registrarCliente(1,1);
	bisa.getModClientes()->registrarCliente(2,1);
	bisa.getModClientes()->registrarCliente(3,1);
	bisa.getModClientes()->mostrarOrdenados();







}

void test3() {
	Sistema bisa(1);

	bisa.getModClientes()->registrarCliente(001,3);
	bisa.getModClientes()->buscarCliente(001)->getModCuentas()->registrarCuenta("cuenta2");
	bisa.getModClientes()->buscarCliente(001)->getModCuentas()->registrarCuenta("cuenta3");
	bisa.getModClientes()->buscarCliente(001)->mostrar();


}
void test4() {
	Sistema bisa(1);

	bisa.getModClientes()->registrarCliente(001, 2);
	bisa.getModClientes()->buscarCliente(001)->getModCuentas()->registrarCuenta("cuenta2");
	cout << "------ TODAS LAS CUENTAS --------" << endl;
	bisa.getModClientes()->mostrarOrdenados();

	bisa.getModClientes()->buscarCliente(001)->getModCuentas()->eliminarCuenta("cuenta2");
	cout << "------ TODAS LAS CUENTAS  after--------" << endl;

	bisa.getModClientes()->mostrarOrdenados();




}

int main()
{
	cout << "test1" << endl;
	//test();
	cout << "test 2"<< endl;
	//test2();
	cout << "test 3" << endl;
	//test3();
	cout << "test 4" << endl;
	test4();




}