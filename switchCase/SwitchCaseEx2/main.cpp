#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
   setlocale(LC_ALL,"Portuguese");

    int opc;
    float num1,num2,sub,soma;

    cout << " Se você deseja somar dois números digite 1 " << endl;
    cout << " Se você deseja subtrair dois números digite 2" << endl;
    cout << " Se você deseja SAIR do programa digite SAIR " << endl;
    cin >> opc;

    switch (opc){
        case 1:
        cout << " Digite um número que deseja SOMAR: "<< endl;
        cin >> num1;
        cout << " Digite outro número para a SOMA: "<< endl;
        cin >> num2;
        soma = num1+num2;
        cout << " O resultado da sua soma é: "<< soma << endl;
        break;

        case 2:
        cout << " Digite um número que deseja SUBTRAIR: "<< endl;
        cin >> num1;
        cout << " Digite outro número para a SUBTRAIR: "<< endl;
        cin >> num2;
        sub = num1-num2;
        cout << " O resultado da sua soma é: "<< sub << endl;
        break;

        default:
            cout << " você saiu do programa " <<endl;
}
    return 0;
}
