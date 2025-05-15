#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()
/*    2. Escreva um programa em C++ que exiba as quatro mensagens:
            Meu nome é: <seu nome>.
            Sou do curso de Sistemas de Informação.
            Estou no primeiro ano.
            Gosto de programação!!!*/

{
    setlocale(LC_ALL,"Portuguese");
    char nome [50];

    cout << setw (4)<< " Meu nome é: ";
    cin>> nome;
    cout<<endl;
    cout<< " Sou do curso de Sistemas de Informação. " <<endl;
    cout<<endl;
    cout<< " Estou no primeiro ano. " <<endl;
    cout<<endl;
    cout<< " Gosto de programação!!! " <<endl;

    return 0;
}
