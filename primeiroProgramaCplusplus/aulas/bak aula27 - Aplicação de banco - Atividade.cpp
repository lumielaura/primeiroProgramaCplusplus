#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void login();
void showMenu();


//aula 27 - Atividade - Banco
int main()
{
	//Login
	string luser, user = "fernando",user2 ="catia";
	int passwd = 12345, passwd2 = 54321, lpass;

	//checar o balanço, deposito, sacar, mostrar menu
	int option;
	double balanco1 = 500, balanco2 = 300, balanco;

	do
	{
		login();
		cin >> luser;
		cout << "Senha: ";
		cin >> lpass;

	} while ((luser == user && lpass == passwd) || (luser == user2 && lpass == passwd2));
	

	if (luser == user && lpass == passwd)
	{
		balanco = balanco1;
	}
	else if (luser == user2 && lpass == passwd2)
	{
		balanco = balanco2;
	} else
	{
		cout<<"Ocorreu um erro\n\tFim do programa";
		system("exit");
	}

	do
	{
		cout << "Seja bem vindo "<< luser << endl;
		showMenu();
		cin >> option;
		system("cls");

		switch (option)
		{
			case 1: 
			{ 
				cout << "Balanco: R$ " << balanco << endl; break;
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
			case 4: 
			{
				
				if (luser == "fernando")
				{						
					cout << "Quantia a ser transferida: R$ ";
					double quantiaTransferida;
					cin >> quantiaTransferida;
					balanco -+ quantiaTransferida;
					balanco1 = balanco;
					balanco2 += quantiaTransferida;
					break;
				}
				else if (luser == "catia")
				{
					cout << "Quantia a ser transferida: R$ ";
					double quantiaTransferida;
					cin >> quantiaTransferida;
					balanco -+ quantiaTransferida;
					balanco2 = balanco;
					balanco1 += quantiaTransferida;
					break;
				}
				else
				{
					cout << "Operacao Invalida"<< endl; break;
				}

			}
		}
		cout << endl;
	} while (option!=5);

	// breakpoint
	system("pause>0");
}

void login()
{
	string spaceBar = "********";
	cout << spaceBar << "Login\nUsuario: " << spaceBar << endl;
}

void showMenu() 
{
	string spaceBar = "********";
	cout << spaceBar << "Menu" << spaceBar << endl;
	cout << "1. Ver balanco" << endl;
	cout << "2. Despositar" << endl;
	cout << "3. Sacar" << endl;
	cout << "4. Transferencia" << endl;
	cout << "5. Sair" << endl;
	cout << spaceBar << "****" << spaceBar << endl;
	cout << "Option: ";
}