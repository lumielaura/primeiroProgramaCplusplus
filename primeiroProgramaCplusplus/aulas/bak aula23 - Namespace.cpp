#include <iostream>
#include <locale>
using std::cout;
using std::cin;
using std::endl;
using std::string;


namespace lugar1 
{
    // mesmo possivel repetir uma ou mais variáveis colocando elas em uma "namespace" diferente, mas sera preciso chamar essa variável na hora que precisar dela.
    // exemplo: cout << lugar1::nome << endl;
    string nome = "Anderson";
    int idade = 31;
}

namespace lugar2 
{
    // exemplo: cout << lugar2::idade << endl;
    string nome = "Daniela";
    int idade = 17;
}



int main()
{
    //habilitando a acentuação no meu terminal
    setlocale(LC_ALL, "pt_BR.UTF-8");


    //Aula 23
    cout << lugar1::nome << endl;
    cout << lugar1::idade << endl;
    cout << endl;
    cout << lugar2::nome << endl;
    cout << lugar2::idade << endl;




// breakpoint
system("pause>0");
}
