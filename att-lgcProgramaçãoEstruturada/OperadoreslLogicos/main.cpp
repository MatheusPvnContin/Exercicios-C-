#include <iostream>
#include <locale.h>
using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");


    bool num1,num2;
    cout << "-------------------------------------- \n";
    cout << "Operadores  Logicos!" << endl;
    cout << "Digite dois n�meros, SENDO ELES APENAS 0 ou 1 em qualquer ordem"<< endl;
    cin >> num1 >> num2;
    cout << "-------------------------------------- \n";
    cout << "A nega��o do primeiro numero �: "<< !num1<< endl; // operador logico de nega��o !
    cout << "-------------------------------------- \n";
    cout << "A op. AND entre o primeiro e o segundo num �: "<< (num1 && num2)<< endl; // operador logico AND � &&
    cout << "-------------------------------------- \n";
    cout << "A op. OR entre o primeiro e o segundo num �: "<< (num1 || num2)<< endl; // operador logico OR � ||
    cout << "-------------------------------------- \n";

    return 0;
}
