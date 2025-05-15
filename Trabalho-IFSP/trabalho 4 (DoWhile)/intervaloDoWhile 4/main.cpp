#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    /*
    4.	Escreva um programa para exibir os números contidos no intervalo de 50 a 10, inclusive.
    */


   setlocale(LC_ALL,"Portuguese");

   int i = 50; // Inicializa com 50

    do {

        cout << "    " << endl;
        cout << i << " ";// Exibe o número
        i--;
    } while (i >= 10);

    cout << "    " << endl;


    return 0;
}
