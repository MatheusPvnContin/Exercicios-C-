#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");


    int numero;
    cout << " Digite um n�mero para saber se ele � positivo ou negativo " << endl;
    cin >> numero;

        if (numero<0){
            cout << "esse numero � negativo: "<< numero <<endl;

        }
        else
            cout << " Esse nuemro � positivo: "<< numero <<endl;


    return 0;
}
