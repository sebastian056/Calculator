// Calculadora.cpp
#include <iostream>
#include <cstdlib>
using namespace std;
void pausa();
int main()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("color 12");
		system("cls");
		cin.clear();
		cout << "Calculadora" << endl;
		cout << "----------" << endl;
		cout << "Sumar (1)" << endl;
		cout << "Restar (2)" << endl;
		cout << "Multiplicar (3)" << endl;
		cout << "Dividir (4)" << endl;
		cout << "Salir (5)" << endl;
		cout << "Elije una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			cout << "Has elejido Sumar" << endl;
			pausa();
			break;
		case '2':
			system("cls");
			cout << "Has elejido Restar" << endl;
			pausa();
			break;
		case '3':
			system("cls");
			cout << "Has elejido Multiplicar" << endl;
			pausa();
			break;
		case '4':
			system("cls");
			cout << "Has elejido Dividir" << endl;
			pausa();
			break;
		case '5':
			bandera = true;
			break;
		default:
			system("cls");
			cout << "Opcion no valida" << endl;
			pausa();
			break;
		}
	} while (bandera != true);
	return 0;
}
void pausa()
{
	cout << "Pulsa una tecla para continuar...";
	getwchar();
	getwchar();
}
