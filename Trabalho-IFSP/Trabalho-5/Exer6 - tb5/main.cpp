#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
/*
Reescreva o programa do exerc�cio anterior (exerc�cio 5) considerando o zero como neutro, ou seja, se for digitado o valor zero, escrever a palavra zero.
*/

{
    setlocale( LC_ALL, "Portuguese" );


   int valor;

    cout << "Digite um valor: ";
    cin >> valor;

    if (cin.fail()) {
        cout << "Caractere inv�lido. Por favor, digite um n�mero inteiro." << endl;
    } else {
        if (valor > 0) {
            cout << "O valor � positivo." << endl;

        } else if (valor < 0) {
            cout << "O valor � negativo." << endl;

        } else {
            cout << "Zero." << endl;
        }
    }




    return 0;
}
