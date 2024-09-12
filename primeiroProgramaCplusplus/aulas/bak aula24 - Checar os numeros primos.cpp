#include <iostream>
#include <locale>
using std::cout;
using std::cin;
using std::endl;
using std::string;

bool isPrimeNumber(int number) 
{
	//bool isPrimeFlag = true;
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			//isPrimeFlag = false;
			//break;
			return false;
		}
	}
	//return isPrimeFlag;
	return true;
}

int main()
{
	//habilitando a acentuação no meu terminal
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
	//programa para checar os numeros primos
	int number;
	cout << "Número: ";
	cin >> number;

	bool isPrimeFlag = isPrimeNumber(number);

	if (isPrimeFlag)
	{
		cout << "Número Primo" << endl;
	}
	else 
	{
		cout << "Não é número Primo" << endl;
	}


	//Reusando a function do numero primo (poder das functions)
	for (int i = 1; i <= 1000; i++)
	{
		bool isPrime = isPrimeNumber(i);
		if (isPrime) 
		{
			cout << i << " é número primo.\n";
		}
	}



	// breakpoint
	system("pause>0");
}


