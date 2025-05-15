#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
/*5.Escreva um programa para ler um valor e escrever se é positivo ou negativo. Considere o valor zero como positivo.*/

{
    setlocale(LC_ALL,"Portuguese");
    int valor;

    cout << "Digite um valor: ";
    cin >> valor;

    if (cin.fail()) {
        cout << "Caractere inválido. Por favor, digite um número inteiro." << endl; // verifica se o valor inserido está correto
    } else {
        if (valor >= 0) {
            cout << "O valor é positivo." << endl;
        } else {
            cout << "O valor é negativo." << endl;
        }
    }

    return 0;
}
