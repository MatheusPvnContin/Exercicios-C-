#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
/*5.Escreva um programa para ler um valor e escrever se � positivo ou negativo. Considere o valor zero como positivo.*/

{
    setlocale(LC_ALL,"Portuguese");
    int valor;

    cout << "Digite um valor: ";
    cin >> valor;

    if (cin.fail()) {
        cout << "Caractere inv�lido. Por favor, digite um n�mero inteiro." << endl; // verifica se o valor inserido est� correto
    } else {
        if (valor >= 0) {
            cout << "O valor � positivo." << endl;
        } else {
            cout << "O valor � negativo." << endl;
        }
    }

    return 0;
}
