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



    //Aula 21
    // Desenhando triangulo
    // 
    int largura;
    cout << "Largura: ";
    cin >> largura;
    char simbolo;
    cout << "Símbolo: ";
    cin >> simbolo;

    for (int i = 1; i <= largura; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << simbolo;
        }
        cout << endl;
    }

    cout << endl << endl;

    for (int i = largura; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << simbolo;
        }
        cout << endl;
    }



// breakpoint
system("pause>0");
}
