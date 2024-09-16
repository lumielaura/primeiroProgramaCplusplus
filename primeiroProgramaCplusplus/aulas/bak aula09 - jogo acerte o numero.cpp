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


    //Aula 9
    //Jogo - O guest precisa acertar o numero que o host colocou.
    int hostUserNum, guestUserNum;
    
    cout << "Host: ";
    cin >> hostUserNum;
    system("cls");

    cout << "Guest: ";
    cin >> guestUserNum;

    //primeiro solução
    (hostUserNum == guestUserNum) ? cout << "Correto!" : cout << "Errado!\nO número digitado pelo Host foi " << hostUserNum;

    //segunda solução
    //if (hostUserNum == guestUserNum)
    //    cout << "Correto!";
    //else
    //   cout << "Errado!";


// breakpoint
system("pause>0");
}

