#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()

/* 9.	Escreva um programa para ler um n�mero inteiro
        (considere que ser�o lidos apenas valores positivos e inteiros) e escrever se � par ou �mpar.
  */

{

        setlocale(LC_ALL,"Portuguese");

    int numero;

    cout << "Digite um n�mero inteiro positivo: ";
    cin >> numero;

    if (cin.fail() || numero < 0) {
        cout << "Entrada inv�lida. Digite apenas n�meros inteiros positivos." << endl;
    }
    else {

        if (numero % 2 == 0) {
            cout << "O n�mero � par." << endl;
        }
        else {
            cout << "O n�mero � �mpar." << endl;
        }
    }

    return 0;
}
