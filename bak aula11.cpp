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


    //Aula 11
    //Programa que diz quantos dias tem o mes.
        
    //(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    int ano, mes;
    cout << "Ano, mês: ";
    cin >> ano >> mes;

    switch (mes)
    {
        case 2:(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) ?
            cout << "Mês com 29 dias." : cout << "Mês com 28 dias."; break;

        // Essa é uma forma de pegar todos os casos repetidos e executar a mesma linha que seria necessaria para eles. Não precisando repetir o codigo varias vezes. O "break;" vai separar esses comandos.
        case 4:
        case 6:
        case 9:
        case 11:cout << "Mês com 30 dias."; break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:cout << "Mês com 31 dias."; break;
        default:cout << "Não válido!";
    }



// breakpoint
system("pause>0");
}


