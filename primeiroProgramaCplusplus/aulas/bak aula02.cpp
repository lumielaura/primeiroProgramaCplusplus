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


    //Segunda Aula
    float salarioAnual1 = 25000.99;
    float salarioMensal1 = salarioAnual1 / 12;
    cout << "Seu salário Anual é " << salarioMensal1 << endl;
    cout << "Em 10 anos você vai ganhar " << salarioAnual1 * 10 << endl << endl;

    //com entrada de variavel
    float salarioAnual2;
    cout << "Digite o valor do seu salário anual: ";
    cin >> salarioAnual2;
    float salarioMensal2 = salarioAnual2 / 12;
    cout << "Seu salário Anual e " << salarioMensal2 << endl;
    cout << "Em 10 anos você vai ganhar " << salarioAnual2 * 10 << endl << endl;

    //variavel com apenas 1 carac. pode ser usado aspas simples
    char caractere = 'a';
    // no nome da var. não pode haver espaços
    // recomendavel que o nome faça sentido para saber onde ela esta sendo usada

    int anoDeNascimento = 1994;
    char genero = 'm';
    bool maisVelhoQue18 = true;
    float notaMedia = 4.5;
    double balanco = 234346457345;

    cout << "Tamanho da INT é " << sizeof(int) << " bytes.\n";
    cout << "Valor mínimo da INT é " << INT_MIN << endl;
    cout << "Valor máximo da INT é " << INT_MAX << endl;

    cout << "Tamanho da unsigned int é " << sizeof(unsigned int) << " bytes.\n";
    cout << "Valor maximo da INT é " << UINT_MAX << endl;

    cout << "Tamanho da bool é " << sizeof(bool) << " bytes.\n";
    cout << "Tamanho da char é " << sizeof(char) << " bytes.\n";
    cout << "Tamanho da float é " << sizeof(float) << " bytes.\n";
    cout << "Tamanho da double é " << sizeof(double) << " bytes.\n";

    int intMax = INT_MAX;
    cout << intMax << endl;
    cout << intMax + 1 << endl << endl;


// breakpoint
system("pause>0");
}
