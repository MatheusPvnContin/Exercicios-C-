#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()

/* 9.	Escreva um programa para ler um número inteiro
        (considere que serão lidos apenas valores positivos e inteiros) e escrever se é par ou ímpar.
  */

{

        setlocale(LC_ALL,"Portuguese");

    int numero;

    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    if (cin.fail() || numero < 0) {
        cout << "Entrada inválida. Digite apenas números inteiros positivos." << endl;
    }
    else {

        if (numero % 2 == 0) {
            cout << "O número é par." << endl;
        }
        else {
            cout << "O número é ímpar." << endl;
        }
    }

    return 0;
}
