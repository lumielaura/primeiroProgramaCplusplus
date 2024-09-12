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


    //Aula 4
    //Usuario digita numero integral 
    //Trabalhando com condicionais

    int numero;
    cout << "Escreva um número completo: ";
    cin >> numero;
    if (numero % 2 == 0) //o simbolo == checa se um lado é igual ao outro, enquanto = é usado para dar valor a uma variavel
    {   //true
        cout << "Você digitou um número Par." << endl;
    }
    else
    {   //false
        cout << "Voce digitou um número Impar." << endl;
    }

    cout << "Obrigado, Até mais.";


// breakpoint
system("pause>0");
}