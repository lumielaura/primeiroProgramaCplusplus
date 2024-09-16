#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

//outro exemplo
//  template<class Type>
//  void troca(Type& a, Type& b) {}

template<typename T>
void troca(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    //programa de troca de dados
    //Usando as mesmas variaveis com diferentes tipos de dados
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    troca<int>(a, b);
    cout << a << " - " << b << endl;

    char c='c', d='d';
    cout << c << " - " << d << endl;
    troca<char>(c, d);
    cout << c << " - " << d << endl;
    
    // breakpoint
    system("pause>0");
}
