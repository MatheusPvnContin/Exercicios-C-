#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;
/*Escrever um programa que leia 15 n�meros, um de cada vez, e conte quantos destes valores s�o negativos.
    Exiba a quantidade de n�meros negativos digitados*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,num,negativo;
    negativo = 0;

    for (i=1;i<=15;i++){

    cout << " Escreva o "<< i <<"� numero inteiro" << endl;
    cin >> num;

    if (num<0){
    negativo++;

    }
    }

    cout << " A quantidade de numeros negativos digitados foi de: "<< negativo<<endl;


    return 0;
}
