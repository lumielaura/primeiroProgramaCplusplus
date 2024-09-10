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

    //Aula 05
    //Resolvendo problemas usando if else
    //Definindo o tipo de triangulo | equilátero, escaléno e isóceles
    float a, b, c;
    cout << "Digite os lados do triângulo a, b, c: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "Triângulo Equilatero";
    }
    else
    {
        if (a != b && a != c && b != c)
        {
            cout << "Triângulo Escaleno";
        }
        else
        {
            cout << "Triângulo Isoceles";
        }
    }   
    //Opereadores C++
    //+,-,*,/,% - Operadores Aritmédicos (1)

    cout << 5 + 2 << endl; //7
    cout << 5 / 2 << endl; //2 - divide, mas caso nenhum do mumeros sejam um float o resultado sera um integral
    cout << 5 / 2.0 << endl; //2.5 - o resultado esperado da divisao
    cout << 5 % 2 << endl << endl; //1 - monstra o resto de uma divisao

    //++,-- | incremento e decremento - Operadores Relacionais (2)
    int counter = 7;
    counter++;
    cout << counter << endl; //8

    counter--;
    cout << counter << endl; //7

    int counter2 = 7;
    cout << counter2++ << endl; //7 - pos incremento, primero o valor é monstrado na tela (7), depois é realisado o incremento, que não aparece na tela (8).
    cout << ++counter2 << endl; //9 - pre incremento, o incremento é realisado primeiro e apenas depois é monstrado o valor na tela (9).

    cout << counter2-- << endl; //9 - pos decremento, primero o valor é monstrado na tela (9), depois é realisado o decremento, que não aparece na tela (8).
    cout << --counter2 << endl; //7 - pre decremento, o decremento é realisado primeiro e apenas depois é monstrado o valor na tela (7).

    system("cls"); //Limpa a tela


// breakpoint
system("pause>0");
}