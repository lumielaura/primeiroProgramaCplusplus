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


    //Aula 06    
    //<,>,<=,>=,==,!= - Operadores Lógicos (3)

    int a = 5, b = 5;
    cout << (a > b); //0 = Falso | A não é maior que B
    cout << (a == b); //1 = Verdadeiro | A é igual ao B
    cout << (a <= b); //1 = Verdadeiro | A é igual ou menor que B
    cout << (a != b); //0 = Falso | A não é diferente de B
    
    system("cls");


    // &&,||,! - Tabela verdade
    // && - Apenas quando os dois são verdadeiros o resultado será TRUE.
    cout << (a == 5 && b == 5) << endl; //1

    // || - Apenas quando os dois são falsos o resultado será FALSE.
    cout << (a == 5 || b == 7) << endl; //1

    // !  - Nega todo o resultado
    cout << !(a == 5 && b == 5) << endl; //0

    
    //Prioridade de Operadores - Ordem de Execução
    //1 - Operadores Aritméticos
    //2 - Operadores Relacionais
    //3 - Operadores Lógicos

    cout << (a == 5 && b == 2 + 3); //1 - Foi primeiro feita a soma (aritmética) depois a relação lógica.

    // Operadores de atribuição
    // =,+=,-=,*=,/=,%=
    int x = 5;

    x += 7; //x = x + 7
    cout << x << endl; //12
    
    x -= 7; //x = x - 7
    cout << x << endl; //-2


    //More exemples
    int a = 5, b = 4;
    cout << a + (b++) << endl;//9
    cout << (--a) + b << endl;//9

    cout << !(true && false) << endl;//1
    cout << (true && false || true) << endl;//1

    int x = 7;
    cout << (++x <= 9 && x + 2 >= 10) << endl;//1

    int y = 3;
    cout << (y == y++) << endl;//1

    float z = 8;
    z += 2;
    cout << z << endl;//10
    z /= 2;
    cout << z << endl;//5



// breakpoint
system("pause>0");
}