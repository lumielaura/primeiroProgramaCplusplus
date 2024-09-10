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

    //Aula 07
    //Trocar o valor de duas variaveis
    int a = 20;
    int b = 10;

    //primeira solução
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << "b = " << b << endl;

    //segunda solução
    a = a + b;//30
    b = a - b;//20
    a = a - b;//10

    cout << "a = " << a << "b = " << b << endl;



// breakpoint
system("pause>0");
}