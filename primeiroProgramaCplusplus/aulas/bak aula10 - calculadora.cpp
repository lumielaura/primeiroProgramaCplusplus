#include <iostream>
#include <locale>
//#include <iomanip> //aula 17
//using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;



int main()
{
    //habilitando a acentuação no meu terminal
    setlocale(LC_ALL, "pt_BR.UTF-8");


    //Aula 10
    //Contruindo uma calculadora
    float num1, num2;
    char operation;
    cout << "**Calculadora**" << endl;
    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '-':cout << num1 << operation << num2 << "=" << num1 - num2; break;
    case '+':cout << num1 << operation << num2 << "=" << num1 + num2; break;
    case '/':cout << num1 << operation << num2 << "=" << num1 / num2; break;
    case '*':cout << num1 << operation << num2 << "=" << num1 * num2; break;
    case '%':

    bool isNum1Int, isNum2Int;
    isNum1Int = ((int)num1 == num1);//5==5.0
    isNum2Int = ((int)num2 == num2);

    if (isNum1Int && isNum2Int)
        cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
    else
        cout << "Não Válido!";
    break;
    //Todos os outros caracteres nao listados tem esta saída
    default:cout << "Operação não válida!" << endl;
    }



// breakpoint
system("pause>0");
}

