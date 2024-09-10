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



    //Aula 20
    // loop - Desenhando um retangulo
    // 
    int altura, largura;
    cout << "Altura: ";
    cin >> altura;
    cout << "Largura: ";
    cin >> largura;
    char simbolo;
    cout << "Símbolo: ";
    cin >> simbolo;
    for (int h = 0; h < altura; h++)
    {
        for (int w = 0; w < largura; w++)
        {
            cout << " " << simbolo ;
        }
        cout << endl;
    }


// breakpoint
system("pause>0");
}
