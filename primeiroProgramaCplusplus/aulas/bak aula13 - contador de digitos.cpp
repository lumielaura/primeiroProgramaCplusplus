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

    //segundo exemplo loops
    //contador de digitos
    int numero;
    cout << "Numero: ";
    cin >> numero;

    //se o numero digitado for zero
    if (numero == 0)
    {
        cout << "Voce digitou Zero.\n";
    }
    else
    {
        //convertendo o numero caso ele seja negativo
        if (numero < 0) 
        {
            numero = -1 * numero;
        }
            
        int contador = 0;
        while (numero > 0)
        {
            //numero = numero / 10;
            numero /= 10; //o mesmo resultado de cima
            contador++;
        }
        cout << "Numero contem " << contador << " digitos\n";
    }
    //Obs: o [int] só consegue contar ate 10 digitos, mas do que isso era causar erros e travamentos.



// breakpoint
system("pause>0");
}
