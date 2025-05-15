#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

/*12.	Construir um programa que calcule a média aritmética de 20 valores inteiros positivos, fornecidos pelo usuário. Exiba o resultado da média.  */

int main()
{
     setlocale(LC_ALL,"Portuguese");

    int valor, soma = 0;

    for (int i = 1; i <= 20; i++) {
        cout << "Digite o " << i << "º valor inteiro positivo: ";
        cin >> valor;

        soma += valor;
    }

    cout<< "________________________________________________________________________"<<endl<<endl;;
    float media = soma / 20.0;
    cout << "A média aritmética dos 20 valores é: " << media << endl;
    cout<< "________________________________________________________________________"<<endl<<endl;;

    return 0;
}
