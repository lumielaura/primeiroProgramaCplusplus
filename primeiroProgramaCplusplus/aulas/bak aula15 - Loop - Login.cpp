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

    //Aula 15
    //do while loop
    //Neste tipo de loop é primeiro executado o código e depois a condição será executada, por isso já contamos com esta primeira tentativa de login, só será necessario mais duas.
    // 
    //Login onde a conta sera bloqueada depois de 3 tentativas incorretas.
    int pinUsuario = 1234, pin, contadorErro = 0;
    do
    {
        cout << "PIN: ";
        cin >> pin;
        if (pin != pinUsuario)
        {
            contadorErro++;
        }
    } while (contadorErro < 3 && pin != pinUsuario);

    if (contadorErro<3)
    {
        cout << "Carregando...";
    }
    else 
    {
        cout << "Bloqueado...";
    }


// breakpoint
system("pause>0");
}