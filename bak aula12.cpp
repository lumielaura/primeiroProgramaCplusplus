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


    //Comentar a linha atual - ctrl+k|c
    //Aula 12

    //3 blocos principais da programação: 
    //Selection, Sequencing, Iteration
    //Sequencing - O código é executado sequencialmente, linha por linha.
    //Selection - Fazer um seleção de qual bloco de codigos será executado, como se voce estivesse em uma encruzilhada e precisa escolher qual caminho seguir.
    //Itaration - Enquanto uma certa condição for verdadeira, um certo bloco de programação sera executado repetidamente.
        
    //While Loops - executando um bloco de código quando a condição for verdadeira.
    //Escreva todos os numeros entre 100-500 que são divisiveis por 3 e 5.
    int contador = 100;
    while (contador <= 500)
    {
        if (contador % 3 == 0 && contador % 5 == 0)
        {
            cout << contador << " é divisível\n";
        }
        contador++;
    }



// breakpoint
system("pause>0");
}

