#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void showMenu() 
{
	string spaceBar = "********";
	cout << spaceBar << "Menu" << spaceBar << endl;
	cout << "1. Ver balanco" << endl;
	cout << "2. Despositar" << endl;
	cout << "3. Sacar" << endl;
	cout << "4. Sair" << endl;
	cout << spaceBar << "****" << spaceBar << endl;
}

//aula 27 - 
int main()
{
	//checar o balanço, deposito, sacar, mostrar menu
	int option;
	double balanco = 500;

	do
	{
		showMenu();
		cout << "Option: ";
		cin >> option;
		system("cls");

		switch (option)
		{
			case 1: 
			{ 
				cout << "Balanco: " << "R$ " << balanco << endl; break;
			}
			case 2: 
			{
				cout << "Quantia a ser depositada: R$ ";
				double quantiaDepositada;
				cin >> quantiaDepositada;
				balanco += quantiaDepositada;
				break;
			}
			case 3: 
			{
				cout << "Quantia a sacar: R$ ";
				double quantiaSacada;
				cin >> quantiaSacada;
				if (quantiaSacada <= balanco)
				{
					balanco -= quantiaSacada;
					break;
				}
				else
				{
					cout << "Dinheiro Insuficiente\nOperacao nao pode ser executada" << endl;
					break;
				}
			}
		}
		cout << endl;
	} while (option!=4);

	// breakpoint
	system("pause>0");
}