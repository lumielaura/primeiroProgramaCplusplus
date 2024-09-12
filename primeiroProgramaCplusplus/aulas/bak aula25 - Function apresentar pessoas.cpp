#include <iostream>
#include <locale>
using std::cout;
using std::cin;
using std::endl;
using std::string;


void meApresente(string nome, string cidade, int idade=0) {
    cout << "Meu nome é " << nome << endl;
    cout << "Eu sou do " << cidade << endl;
    if (idade!=0)
    {
        cout << "Tenho " << idade << " anos" << endl;
    }
    cout << endl;
}



int main()
{

    //habilitando a acentuação no meu terminal
    setlocale(LC_ALL, "pt_BR.UTF-8");
    //a entrada do meu usuário não aceita acentos, tudo após os acentos é cortado

    //As variaveis podem ou não ser iguais aos parametros da função, os dois modos funcionam
    string nome, cidade1;
    int idade1;
    cout << "Nome: ";
    cin >> nome;
    cout << "Cidade: ";
    cin >> cidade1;
    cout << "Idade: ";
    cin >> idade1;

    meApresente(nome, cidade1, idade1);

    meApresente("Valdo","Amapá",54);
    meApresente("Suzana","Mato Grosso",49);
    meApresente("Anderson","Pará");
    meApresente("Daniela","Japão",17);
    meApresente("Bruna","Rio de Janeiro");


    // breakpoint
    system("pause>0");
}