#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;
/*13.	Escreva um programa que receba 20 n�meros do usu�rio (um de cada vez). Calcule a m�dia dos n�meros pares digitados */

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int valor, soma = 0;

    for (int i = 1; i <= 20; i++) {
        cout << "Digite o " << i << "� valor inteiro positivo: ";
        cin >> valor;

        if (valor % 2 == 0){// verifica se � par
        soma += valor;
        }else{
        cout << "Esse valor n�o foi par "<<endl;
        }

    }

    cout<< "________________________________________________________________________"<<endl<<endl;;
    float media = soma / 20.0;
    cout << "A m�dia aritm�tica dos 20 valores �: " << media << endl;
    cout<< "________________________________________________________________________"<<endl<<endl;;


    return 0;
}
