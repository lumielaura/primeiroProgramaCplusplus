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


    //aula 3 - ASCII - como sao representados os carac. para o computador
    cout << (int)'a' << endl;
    cout << int('a') << endl;
    cout << int('A') << endl;
    cout << char('65') << endl;

    cout << int('A') << endl << int('n') << endl << int('d') << endl << int('e') << endl << int('r') << endl << int('s') << endl << int('o') << endl << int('n') << endl;


    //criando varias variaveis
    char c1, c2, c3, c4, c5;
    cout << "Digite 5 letras: " << endl;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "Mensagem ASCII: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;


// breakpoint
system("pause>0");
}