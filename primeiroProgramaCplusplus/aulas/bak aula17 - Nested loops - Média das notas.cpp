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


    //Aula 17
    // Nested loops
    // for - do - while
    int nota, soma = 0;

    for (int i = 0; i < 3; i++)
    {
        do {
            cout << "Digite sua nota " << i + 1 << ": ";
            cin >> nota;
        } while (nota < 1 || nota>5);
        soma += nota;
    }

    cout << "Soma = " << soma << endl;
    cout << "Nota Média = " << (float)soma / 3.0 << endl;


// breakpoint
system("pause>0");
}

