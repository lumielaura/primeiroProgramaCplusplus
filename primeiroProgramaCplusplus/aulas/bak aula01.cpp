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



    //Primeira Aula
    cout << "Olá Mundo!\n"; //this will output olá mundo
    cout << "Meu nome é Anderson" << endl;
    cout << "Hoje é Segunda" << endl;
    cout << "O clima esta ótimo" << endl << endl;



// breakpoint
system("pause>0");
}
