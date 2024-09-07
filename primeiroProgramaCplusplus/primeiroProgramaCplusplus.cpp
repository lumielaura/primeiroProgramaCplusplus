#include <iostream>
//using namespace std;
//using std::;
using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
namespace lugar1 
{
    // mesmo possivel repetir uma ou mais variáveis colocando elas em uma "namespace" diferente, mas sera preciso chamar essa variável na hora que precisar dela.
    // exemplo: cout << lugar1::name << endl;
    string nome = "Anderson";
    int age = 31;
}
namespace lugar2 
{
    // exemplo: cout << lugar2::age << endl;
    string nome = "Daniela";
    int age = 17;
}
*/

int main()
{
    /*
        //Primeira Aula
        cout << "Ola Mundo!\n"; //this will output olá mundo
        cout << "Meu nome e Anderson" << endl;
        cout << "Hoje e Segunda" << endl;
        cout << "O clima esta otimo" << endl << endl;
    */
    /*
        //Segunda Aula
        float salarioAnual1 = 25000.99;
        float salarioMensal1 = salarioAnual1 / 12;
        cout << "Seu salario Anual e " << salarioMensal1 << endl;
        cout << "Em 10 anos vou vai ganhar " << salarioAnual1 * 10 << endl << endl;

        //com entrada de variavel
        float salarioAnual2;
        cout << "Digite o valor do seu salario anual: ";
        cin >> salarioAnual2;
        float salarioMensal2 = salarioAnual2 / 12;
        cout << "Seu salario Anual e " << salarioMensal2 << endl;
        cout << "Em 10 anos vou vai ganhar " << salarioAnual2 * 10 << endl << endl;

        //variavel com apenas 1 carac. pode ser usado aspas simples
        char caractere = 'a';
        // no nome da var. não pode haver espaços
        // recomendavel que o nome faça sentido para saber onde ela esta sendo usada

        int anoDeNascimento = 1994;
        char genero = 'm';
        bool maisVelhoQue18 = true;
        float notaMedia = 4.5;
        double balanco = 234346457345;

        cout << "Tamanho da INT e " << sizeof(int) << " bytes.\n";
        cout << "Valor minimo da INT e " << INT_MIN << endl;
        cout << "Valor maximo da INT e " << INT_MAX << endl;

        cout << "Tamanho da unsigned int e " << sizeof(unsigned int) << " bytes.\n";
        cout << "Valor maximo da INT e " << UINT_MAX << endl;

        cout << "Tamanho da bool e " << sizeof(bool) << " bytes.\n";
        cout << "Tamanho da char e " << sizeof(char) << " bytes.\n";
        cout << "Tamanho da float e " << sizeof(float) << " bytes.\n";
        cout << "Tamanho da double e " << sizeof(double) << " bytes.\n";

        int intMax = INT_MAX;
        cout << intMax << endl;
        cout << intMax + 1 << endl << endl;
    */
    /*
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
    */
    /*
        //Aula 4
        //Usuario digita numero integral 
        //Trabalhando com condicionais

        int numero;
        cout << "Escreva um numero completo: ";
        cin >> numero;
        if (numero % 2 == 0) //o simbolo == checa se um lado é igual ao outro, enquanto = é usado para dar valor a uma variavel
        {   //true
            cout << "Voce digitou um numero Par." << endl;
        }
        else
        {   //false
            cout << "Voce digitou um numero Impar." << endl;
        }

        cout << "Obrigado, Ate mais.";
    */
    /*
        //Resolvendo problemas usando if else
        //Definindo o tipo de triangulo | equilátero, escaléno e isóceles
        float a, b, c;
        cout << "Digite os lados do triangulo a, b, c: ";
        cin >> a >> b >> c;

        if (a == b && b == c)
        {
            cout << "Triangulo Equilatero";
        }
        else
        {
            if (a != b && a != c && b != c)
            {
                cout << "Triangulo Escaleno";
            }
            else
            {
                cout << "Triangulo Isoceles";
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

        //<,>,<=,>=,==,!= - Operadores Lógicos (3)

        int a = 5, b = 5;
        cout << (a > b); //0 = Falso | A não é maior que B
        cout << (a == b); //1 = Verdadeiro | A é igual ao B
        cout << (a <= b); //1 = Verdadeiro | A é igual ou menor que B
        cout << (a != b); //0 = Falso | A não é diferente de B
    
        system("cls");
    */
    /*
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
    */
    /*
        //Trocar o valor de duas variaveis
        int um = 20;
        int dois = 10;

        //primeira solução
        int temp = a;
        a = b;
        b = temp;

        cout << "a = " << a << "b = " << b << endl;

        //segunda solução
        a = a + b;//30
        b = a - b;//20
        a = a - b;//10

        cout << "a = " << a << "b = " << b << endl;
    */
    /*
        * BMI Calculator
        * weight(Kg) / (height * height)(m)
        * underweight   < 18.5
        * overweight    > 25
        * normal weight 18.5 - 25

        float peso, altura, bmi;
        cout << "Calculadora do Indice de Massa Corporal\nDigite seus dados\nPeso(Kg): ";
        cin >> peso;
        cout << "Altura(m): ";
        cin >> altura;

        bmi = peso / (altura * altura);
    
        if (bmi < 18.5)
            cout << "Abaixo do Peso" << endl;
        else if (bmi > 25)
            cout << "Acima do Peso" << endl;
        else
            cout << "Peso Normal" << endl;

        cout << "Seu Indice de Massa Corporal e " << bmi;
    */
    /*
        //Aula 9
        //Jogo - O guest precisa acertar o numero que o host colocou.
        int hostUserNum, guestUserNum;
    
        cout << "Host: ";
        cin >> hostUserNum;
        system("cls");

        cout << "Guest: ";
        cin >> guestUserNum;

        //primeiro solução
        (hostUserNum == guestUserNum) ? cout << "Correto!" : cout << "Errado!\nO numero digitado pelo Host foi " << hostUserNum;

        //segunda solução
        //if (hostUserNum == guestUserNum)
        //    cout << "Correto!";
        //else
        //   cout << "Errado!";
    */
    /*
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
            cout << "Nao Valido!";
        break;
    //Todos os outros caracteres nao listados tem esta saída
    default:cout << "Operacao nao valida!" << endl;
    }
    */
    /*
    //Aula 11
    //Programa que diz quantos dias tem o mes.
    
    //(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    int ano, mes;
    cout << "Ano, mes: ";
    cin >> ano >> mes;

    switch (mes)
    {
    case 2:(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) ?
        cout << "Mes com 29 dias." : cout << "Mes com 28 dias."; break;

    // Essa é uma forma de pegar todos os casos repetidos e executar a mesma linha que seria necessaria para eles. Não precisando repetir o codigo varias vezes. O "break;" vai separar esses comandos.
    case 4:
    case 6:
    case 9:
    case 11:cout << "Mes com 30 dias."; break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:cout << "Mes com 31 dias."; break;
    default:cout << "Nao valido!";
    }
    */
    /*
    */
    //Aula 12
    //
    



    system("pause>0");
}
