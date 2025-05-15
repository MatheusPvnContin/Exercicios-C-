#include <iostream>
#include <locale.h>
using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");
int num1 , num2,  num3;
bool resultado; // vai mostrar se é verdadeiro ou falso

    cout << "Operadores Relacionais!" << endl;
    cout << "Digite três números"<<endl;
    cin >> num1>>num2>>num3;
    cout << "------------------------------------------------- \n";
    resultado = num1 > num2;
    cout << "O resultado da operacao: número 1 é maior que número 2, é: " << resultado<<endl;
    cout << "------------------------------------------------- \n";
    resultado = num2 == num3;
    cout << "O resultado da operacao: número 2 é igual que número 3, é: " << resultado<<endl;
    cout << "------------------------------------------------- \n";
    resultado = num3!=num1;
    cout << "O resultado da operacao: número 3 é diferente do número 1, é:  "<<resultado<<endl;

    return 0;
}
