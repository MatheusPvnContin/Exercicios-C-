#include <iostream>
#include <locale.h>
using namespace std;

int main()

/*
Escreva um programa para calcular a soma dos números pares contidos entre 100 e 200, inclusive.
Exiba o resultado da soma.
*/
{
    setlocale(LC_ALL,"Portuguese");
   int a,soma;
   soma = 0;
   a=100;
    cout << "Esse programa vai calcular a soma dos números pares entre 100 e 200! " << endl;

    do{


       soma = soma+a;
       a = a+2; // pode ser escrito tbm como __ a +=2;

    cout<< "A soma dos números pares é: "<<soma<<endl;


    }
    while (a<=200);

    return 0;
}
