#include <iostream>
#include <locale.h>
using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");
int num1 , num2,  num3;
bool resultado; // vai mostrar se � verdadeiro ou falso

    cout << "Operadores Relacionais!" << endl;
    cout << "Digite tr�s n�meros"<<endl;
    cin >> num1>>num2>>num3;
    cout << "------------------------------------------------- \n";
    resultado = num1 > num2;
    cout << "O resultado da operacao: n�mero 1 � maior que n�mero 2, �: " << resultado<<endl;
    cout << "------------------------------------------------- \n";
    resultado = num2 == num3;
    cout << "O resultado da operacao: n�mero 2 � igual que n�mero 3, �: " << resultado<<endl;
    cout << "------------------------------------------------- \n";
    resultado = num3!=num1;
    cout << "O resultado da operacao: n�mero 3 � diferente do n�mero 1, �:  "<<resultado<<endl;

    return 0;
}
