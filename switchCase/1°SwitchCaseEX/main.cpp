#include <iostream>
#include <locale.h>
#include <cctype> //biblioteca util para usar o comando -- toupper (variavel);
using namespace std;

int main()
{
    setlocale (LC_ALL,"Portuguese");
    //SWITCH CASE usa apenas INT e CHAR
    //com o CHAR o caracter � entre --"E":-- no case
    int opc;
    cout << "Digite 1 para saber o pre�o do prato do dia " << endl;
    cout << "Digite 2 para saber o pre�o da Lasanha " << endl;
    cout << "Digite 3 para saber o pre�o da Picanha Grelhada " << endl;
    cout << "Digite 4 para saber o pre�o da Salada Simples " << endl;
    cin>> opc;

        switch (opc)
        {
        case 1:
            cout << " O pre�o do prato do dia � de 17.00 R$ " <<endl;
              cout << " ______________________________________ " <<endl;
            break;
        case 2:
            cout << " O pre�o da Lasanha � de 15.00 R$ " <<endl;
              cout << " ______________________________________ " <<endl;
            break;
        case 3:
            cout << " O pre�o Picanha Grelhada � de 25.50 R$ " <<endl;
              cout << " ______________________________________ " <<endl;
            break;
        case 4:
            cout << " O pre�o da Salada Simples � de 7.90 R$ " <<endl;
              cout << " ______________________________________ " <<endl;
            break;
        default:
            cout << " OP��O INV�LIDA !!!! " <<endl;
        } //fecha o bloco de codigo do switch.
    return 0;
}
