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


    // Aula 08
    // * BMI Calculator
    // * weight(Kg) / (height * height)(m)
    // * underweight   < 18.5
    // * overweight    > 25
    // * normal weight 18.5 - 25

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


// breakpoint
system("pause>0");
}
