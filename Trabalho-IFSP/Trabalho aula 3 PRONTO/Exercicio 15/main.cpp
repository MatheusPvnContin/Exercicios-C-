#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");


    int numero;
    cout << " Digite um número para saber se ele é positivo ou negativo " << endl;
    cin >> numero;

        if (numero<0){
            cout << "esse numero é negativo: "<< numero <<endl;

        }
        else
            cout << " Esse nuemro é positivo: "<< numero <<endl;


    return 0;
}
