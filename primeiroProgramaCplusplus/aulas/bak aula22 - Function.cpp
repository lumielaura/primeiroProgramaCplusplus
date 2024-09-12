#include <iostream>
#include <locale>
using std::cout;
using std::cin;
using std::endl;
using std::string;


//Aula 22 - function
//as functions precisam estar antes da sua main ou não será possivel executar elas. O programa não vai ter conhecimento do conteudo se ele for colocado após a main.

//O outro modo mais recomendado é fazer a definição (definition) e a declaração (declaration) da função (function).
//declaration - antes da main
//definition - depois da main

void function(); //declaration (recomendado - No inicio do código)


int main()
{
    //habilitando a acentuação no meu terminal
    setlocale(LC_ALL, "pt_BR.UTF-8");



    // Functions
    // Conhecendo como ele funciona
    cout << "Olá, aqui é a main()\n";
    function();



    // breakpoint
    system("pause>0");
}


void function() //Aula 22 - Definition (recomendado - No fim do código)
{
    cout << "Olá, aqui é a function()\n";

}