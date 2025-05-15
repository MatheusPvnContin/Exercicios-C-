#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
/*
Reescreva o programa do exercício anterior (exercício 5) considerando o zero como neutro, ou seja, se for digitado o valor zero, escrever a palavra zero.
*/

{
    setlocale( LC_ALL, "Portuguese" );


   int valor;

    cout << "Digite um valor: ";
    cin >> valor;

    if (cin.fail()) {
        cout << "Caractere inválido. Por favor, digite um número inteiro." << endl;
    } else {
        if (valor > 0) {
            cout << "O valor é positivo." << endl;

        } else if (valor < 0) {
            cout << "O valor é negativo." << endl;

        } else {
            cout << "Zero." << endl;
        }
    }




    return 0;
}
