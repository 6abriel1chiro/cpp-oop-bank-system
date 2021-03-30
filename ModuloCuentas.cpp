#include "ModuloCuentas.h"

ModuloCuentas::ModuloCuentas(int cantCuentas)
{
	index = 0;
	this->cantCuentas = cantCuentas;

	cuentas = new Cuenta* [cantCuentas];
}

ModuloCuentas::~ModuloCuentas()
{
	for (int i = 0; i < index; i++)
	{
		delete cuentas[i];

	}
	delete[]cuentas;
}

void ModuloCuentas::registrarCuenta(string id_)
{
	if (index<cantCuentas)
	{
		cout << "1. caja de ahorro " << endl;
		cout << "2. cuenta corriente " << endl;
		cout << "3. cuenta largo plazo " << endl;
		int op;
	
			float saldo_;
			string fechaIni, fechaFin, moneda;
			float interesAnual;

		cin >> op;
		switch (op)
		{
		case 1:
			cout << "ingrese saldo inicial:  " << endl;
			cin >> saldo_;
			cout << "ingrese moneda:  " << endl;
			cin >> moneda;
			cuentas[index] = new CajaAhorro(id_, saldo_,moneda);
			index++;

			break;
		case 2:
			cout << "ingrese saldo inicial " << endl;
			cin >> saldo_;
			cout << "ingrese moeda:  " << endl;
			cin >> moneda;
			cuentas[index] = new CuentaCorriente(id_, saldo_,moneda);
			index++;

			break;
		case 3:
			cout << "ingrese moeda:  " << endl;
			cin >> moneda;
			cout << "ingrese saldo inicial " << endl;
			cin >> saldo_;
			cout << "ingrese fecha inicial " << endl;
			cin >> fechaIni;
			cout << "ingrese fecha final " << endl;
			cin >> fechaFin;
			cout << "ingrese el interes anual " << endl;
			cin>>interesAnual;
			cuentas[index] = new CuentaLargoPlazo( id_ ,saldo_,moneda,fechaIni,fechaFin,interesAnual);
			index++;
			break;
			
		default:
			break;
		}



	}
	else {
		cout << "error limite excedido " << endl;				
	}

}

Cuenta* ModuloCuentas::buscarCuenta(string id)
{
	for (int i = 0; i < index; i++)
	{
		if (cuentas[i]->getId()==id)
		{
			return cuentas[i];

		}

	}
	return nullptr;




	return nullptr;
}

void ModuloCuentas::mostrarCuentas()
{
	for (int i = 0; i < index; i++)
	{

		cuentas[i]->mostrar();

	}
}

void ModuloCuentas::eliminarCuenta(string id)
{

	Cuenta* temp=buscarCuenta(id);
	int i;
	for ( i = 0; i < index; i++)
		if (temp == cuentas[i])
			break;
	if(i<index)
	{
		index--;
			cuentas[i]->~Cuenta();
			for (int j = i; j < index; j++)
				cuentas[j] = cuentas[j + 1];
	
	}


}
