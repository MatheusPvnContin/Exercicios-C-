#include <iostream>
#include <locale.h>
using namespace std;

int main()
{

     /*
    3.	Escreva um programa para exibir os n�meros contidos no intervalo de 10 a 100, inclusive.
    */
setlocale(LC_ALL,"Portuguese");

   int i = 10; // Inicializa com 10

    do {

        cout << "    " << endl;
        cout << i << " ";// Exibe o n�mero
        i++;
    } while (i <= 100);

    cout << "    " << endl;


    return 0;
}
