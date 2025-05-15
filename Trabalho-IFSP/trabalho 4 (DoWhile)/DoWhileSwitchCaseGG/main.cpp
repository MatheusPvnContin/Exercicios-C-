#include <iostream>
#include <cctype>
#include <locale.h>
using namespace std;

int main()
{
    /*
    Faça um programa que deve perguntar ao usuário se ele deseja somar, subtrair, dividir, multiplicar ou sair do programa.
•	Caso ele queira somar (+), deverá informar dois números e o computador informará o resultado da soma.
•	Caso ele queira subtrair (-), deverá informar dois números e o computador informará o resultado da subtração.
•	Caso ele queira dividir (/), deverá informar dois números e o computador informará o resultado da divisão.
•	Caso ele queira multiplicar (*), deverá informar dois números e o computador informará o resultado da multiplicação.
•	Se o usuário quiser sair do programa informará tal opção (S).
•	Para qualquer outro caso o computador deverá informar (Opção inválida).
    */


    setlocale(LC_ALL,"Portuguese");


    char opc;
    float num1,num2,resultado;

    do{

    cout << " ________________________________________________________________ " << endl<<endl;
    cout << "       === ESSE PROGRAMA FAZ OPERÇÕES MATEMÁTICAS === " << endl;
    cout << " ________________________________________________________________ " << endl<<endl;
    cout << "       Se você deseja somar dois números digite  (+) " << endl;
    cout << "       Se você deseja subtrair dois números digite  (-)" << endl;
    cout << "       Se você deseja multiplicar dois números digite  (*)" << endl;
    cout << "       Se você deseja dividir dois números digite  (/)" << endl;
    cout << "       Se você deseja SAIR do programa digite  (S) " << endl;
    cout << " ________________________________________________________________ " << endl;

    cin >> opc;
    opc = toupper(opc);

/* Verifica se a entrada foi válida
        if (cin.fail()) {
            cin.clear(); // Limpa o erro do buffer
            cin.ignore(1000, '\n'); // Descarta a entrada inválida
            cout << "Entrada inválida! Por favor, digite uma opção válida." << endl;
            continue; // Retorna ao loop

            /* O bloco de codigo acima verifica se o "cin" vai estar recebendo um valor valido,
            ou seja um número; caso contrario o "cin>>opc" ou o "cin>>num" não consegue processar novas entradas*/

    switch (opc){
        case '+':
        cout << "       Digite um número que deseja SOMAR: "<< endl;
        cin >> num1;
        cout << "       Digite outro número para a SOMA: "<< endl;
        cin >> num2;
        resultado = num1+num2;
        cout << " ------------------------------------------------------------ " << endl;
        cout << "        O resultado da sua soma é: "<< resultado << endl;
        cout << " ------------------------------------------------------------ " << endl;
        break;

        case '-':
        cout << "       Digite um número que deseja SUBTRAIR: "<< endl;
        cin >> num1;
        cout << "       Digite outro número para a SUBTRAIR: "<< endl;
        cin >> num2;
        resultado = num1-num2;
        cout << "       O resultado da sua subtração é: "<< resultado << endl;
        break;

        case '*':
        cout << "       Digite um número que deseja MULTIPLICAR: "<< endl;
        cin >> num1;
        cout << "       Digite outro número para a MULTIPLICAÇÃO: "<< endl;
        cin >> num2;
        resultado = num1*num2;
        cout << " ------------------------------------------------------------ " << endl;
        cout << "       O resultado da sua multiplicação é: "<< resultado << endl;
        cout << " ------------------------------------------------------------ " << endl;
        break;

        case '/':
        cout << "      Digite um número que deseja DIVIDIR: "<< endl;
        cin >> num1;
        cout << "      Digite outro número para a DIVISÃO: "<< endl;
        cin >> num2;
        resultado = num1/num2;
        cout << " ------------------------------------------------------------ " << endl;
        cout << "       O resultado da sua multiplicação é: "<< resultado << endl;
        cout << " ------------------------------------------------------------ " << endl;
        break;

        case 'S':
        cout << "       Saindo do programa... "<< endl;

        break;

        default:
            cout << "   Opção Inválida !!!! " <<endl;
        }
        }
            while (opc != 'S');





    return 0;
}
