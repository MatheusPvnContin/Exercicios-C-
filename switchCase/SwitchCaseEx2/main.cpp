#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
   setlocale(LC_ALL,"Portuguese");

    int opc;
    float num1,num2,sub,soma;

    cout << " Se voc� deseja somar dois n�meros digite 1 " << endl;
    cout << " Se voc� deseja subtrair dois n�meros digite 2" << endl;
    cout << " Se voc� deseja SAIR do programa digite SAIR " << endl;
    cin >> opc;

    switch (opc){
        case 1:
        cout << " Digite um n�mero que deseja SOMAR: "<< endl;
        cin >> num1;
        cout << " Digite outro n�mero para a SOMA: "<< endl;
        cin >> num2;
        soma = num1+num2;
        cout << " O resultado da sua soma �: "<< soma << endl;
        break;

        case 2:
        cout << " Digite um n�mero que deseja SUBTRAIR: "<< endl;
        cin >> num1;
        cout << " Digite outro n�mero para a SUBTRAIR: "<< endl;
        cin >> num2;
        sub = num1-num2;
        cout << " O resultado da sua soma �: "<< sub << endl;
        break;

        default:
            cout << " voc� saiu do programa " <<endl;
}
    return 0;
}
