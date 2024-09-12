#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Voce pode usar os mesmo nomes, desde que os parametros sejam diferentes.
int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

//aula 26 - function overloading
int main()
{
	cout << sum(4, 3) << endl;
	cout << sum(4.4, 3.3) << endl;
	cout << sum(4.4, 3.3, 2.2) << endl;

	// breakpoint
	system("pause>0");
}


int sum(int a, int b) 
{
	//int resultado = a + b;
	//return resultado
	return a + b;
}

double sum(double a, double b)
{
	return a + b;
}

float sum(float a, float b, float c)
{
	return a + b + c;
}