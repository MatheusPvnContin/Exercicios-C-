#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

/*12.	Construir um programa que calcule a m�dia aritm�tica de 20 valores inteiros positivos, fornecidos pelo usu�rio. Exiba o resultado da m�dia.  */

int main()
{
     setlocale(LC_ALL,"Portuguese");

    int valor, soma = 0;

    for (int i = 1; i <= 20; i++) {
        cout << "Digite o " << i << "� valor inteiro positivo: ";
        cin >> valor;

        soma += valor;
    }

    cout<< "________________________________________________________________________"<<endl<<endl;;
    float media = soma / 20.0;
    cout << "A m�dia aritm�tica dos 20 valores �: " << media << endl;
    cout<< "________________________________________________________________________"<<endl<<endl;;

    return 0;
}
