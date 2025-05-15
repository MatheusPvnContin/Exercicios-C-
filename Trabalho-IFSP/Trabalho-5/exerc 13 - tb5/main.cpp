#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;
/*13.	Escreva um programa que receba 20 números do usuário (um de cada vez). Calcule a média dos números pares digitados */

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int valor, soma = 0;

    for (int i = 1; i <= 20; i++) {
        cout << "Digite o " << i << "º valor inteiro positivo: ";
        cin >> valor;

        if (valor % 2 == 0){// verifica se é par
        soma += valor;
        }else{
        cout << "Esse valor não foi par "<<endl;
        }

    }

    cout<< "________________________________________________________________________"<<endl<<endl;;
    float media = soma / 20.0;
    cout << "A média aritmética dos 20 valores é: " << media << endl;
    cout<< "________________________________________________________________________"<<endl<<endl;;


    return 0;
}
