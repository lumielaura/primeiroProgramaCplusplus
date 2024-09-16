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


    //terceiro exemplo
    //Revertendo um numero

    int numero, numeroRevertido = 0;
    cout << "Número: ";
    cin >> numero;

    while (numero != 0)
    {
        ////numeroRevertido = numeroRevertido * 10;
        //numeroRevertido *= 10;
        //int ultimoDigito = numero % 10;
            
        ////numeroRevertido = numeroRevertido + ultimoDigito;
        //numeroRevertido += ultimoDigito;
        //numero /= 10;

        //Deixar a conta mais limpa e o seu codigo mais curto
        numeroRevertido *= 10;
        numeroRevertido += numero % 10;
        numero /= 10;
    }
    cout << "Revertido: " << numeroRevertido << endl;


// breakpoint
system("pause>0");
}

