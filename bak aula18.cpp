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


    //Aula 18
    // Nested loops
    // for - for
    //tabela de multiplicação

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++) 
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }


// breakpoint
system("pause>0");
}
