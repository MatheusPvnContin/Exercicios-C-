#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()
/*    2. Escreva um programa em C++ que exiba as quatro mensagens:
            Meu nome �: <seu nome>.
            Sou do curso de Sistemas de Informa��o.
            Estou no primeiro ano.
            Gosto de programa��o!!!*/

{
    setlocale(LC_ALL,"Portuguese");
    char nome [50];

    cout << setw (4)<< " Meu nome �: ";
    cin>> nome;
    cout<<endl;
    cout<< " Sou do curso de Sistemas de Informa��o. " <<endl;
    cout<<endl;
    cout<< " Estou no primeiro ano. " <<endl;
    cout<<endl;
    cout<< " Gosto de programa��o!!! " <<endl;

    return 0;
}
