#include <iostream>
#include <locale>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
    //habilitando a acentuação no meu terminal
    setlocale(LC_ALL, "pt_BR.UTF-8");

    //Aula 16
    // for loop
    // Calculando numero fatorial
    // 6! = 1*2*3*4*5*6=720

    //Primeira solução
    int numero;
    cout << "Número: ";
    cin >> numero;

    int fatorial = 1;

    //for (int i = 1; i <= numero; i++)
    //{ fatorial *= i; }
        

    //segunda solução
    for (int i = numero; i >= 1; i--)
    {
        fatorial *= i;
    }

    cout << "Fatorial: " << numero << "=" << fatorial << endl;
    //Obs: Esse programa não tem a solução para numeros negativos.


// breakpoint
system("pause>0");
}