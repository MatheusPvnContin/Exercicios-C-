#include <iostream>
#include <cctype>
#include <locale.h>
using namespace std;

int main()
{
    /*
    Fa�a um programa que deve perguntar ao usu�rio se ele deseja somar, subtrair, dividir, multiplicar ou sair do programa.
�	Caso ele queira somar (+), dever� informar dois n�meros e o computador informar� o resultado da soma.
�	Caso ele queira subtrair (-), dever� informar dois n�meros e o computador informar� o resultado da subtra��o.
�	Caso ele queira dividir (/), dever� informar dois n�meros e o computador informar� o resultado da divis�o.
�	Caso ele queira multiplicar (*), dever� informar dois n�meros e o computador informar� o resultado da multiplica��o.
�	Se o usu�rio quiser sair do programa informar� tal op��o (S).
�	Para qualquer outro caso o computador dever� informar (Op��o inv�lida).
    */


    setlocale(LC_ALL,"Portuguese");


    char opc;
    float num1,num2,resultado;

    do{

    cout << " ________________________________________________________________ " << endl<<endl;
    cout << "       === ESSE PROGRAMA FAZ OPER��ES MATEM�TICAS === " << endl;
    cout << " ________________________________________________________________ " << endl<<endl;
    cout << "       Se voc� deseja somar dois n�meros digite  (+) " << endl;
    cout << "       Se voc� deseja subtrair dois n�meros digite  (-)" << endl;
    cout << "       Se voc� deseja multiplicar dois n�meros digite  (*)" << endl;
    cout << "       Se voc� deseja dividir dois n�meros digite  (/)" << endl;
    cout << "       Se voc� deseja SAIR do programa digite  (S) " << endl;
    cout << " ________________________________________________________________ " << endl;

    cin >> opc;
    opc = toupper(opc);

/* Verifica se a entrada foi v�lida
        if (cin.fail()) {
            cin.clear(); // Limpa o erro do buffer
            cin.ignore(1000, '\n'); // Descarta a entrada inv�lida
            cout << "Entrada inv�lida! Por favor, digite uma op��o v�lida." << endl;
            continue; // Retorna ao loop

            /* O bloco de codigo acima verifica se o "cin" vai estar recebendo um valor valido,
            ou seja um n�mero; caso contrario o "cin>>opc" ou o "cin>>num" n�o consegue processar novas entradas*/

    switch (opc){
        case '+':
        cout << "       Digite um n�mero que deseja SOMAR: "<< endl;
        cin >> num1;
        cout << "       Digite outro n�mero para a SOMA: "<< endl;
        cin >> num2;
        resultado = num1+num2;
        cout << " ------------------------------------------------------------ " << endl;
        cout << "        O resultado da sua soma �: "<< resultado << endl;
        cout << " ------------------------------------------------------------ " << endl;
        break;

        case '-':
        cout << "       Digite um n�mero que deseja SUBTRAIR: "<< endl;
        cin >> num1;
        cout << "       Digite outro n�mero para a SUBTRAIR: "<< endl;
        cin >> num2;
        resultado = num1-num2;
        cout << "       O resultado da sua subtra��o �: "<< resultado << endl;
        break;

        case '*':
        cout << "       Digite um n�mero que deseja MULTIPLICAR: "<< endl;
        cin >> num1;
        cout << "       Digite outro n�mero para a MULTIPLICA��O: "<< endl;
        cin >> num2;
        resultado = num1*num2;
        cout << " ------------------------------------------------------------ " << endl;
        cout << "       O resultado da sua multiplica��o �: "<< resultado << endl;
        cout << " ------------------------------------------------------------ " << endl;
        break;

        case '/':
        cout << "      Digite um n�mero que deseja DIVIDIR: "<< endl;
        cin >> num1;
        cout << "      Digite outro n�mero para a DIVIS�O: "<< endl;
        cin >> num2;
        resultado = num1/num2;
        cout << " ------------------------------------------------------------ " << endl;
        cout << "       O resultado da sua multiplica��o �: "<< resultado << endl;
        cout << " ------------------------------------------------------------ " << endl;
        break;

        case 'S':
        cout << "       Saindo do programa... "<< endl;

        break;

        default:
            cout << "   Op��o Inv�lida !!!! " <<endl;
        }
        }
            while (opc != 'S');





    return 0;
}
