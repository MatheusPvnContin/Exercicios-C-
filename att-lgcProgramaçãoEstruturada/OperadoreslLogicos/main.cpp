#include <iostream>
#include <locale.h>
using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");


    bool num1,num2;
    cout << "-------------------------------------- \n";
    cout << "Operadores  Logicos!" << endl;
    cout << "Digite dois números, SENDO ELES APENAS 0 ou 1 em qualquer ordem"<< endl;
    cin >> num1 >> num2;
    cout << "-------------------------------------- \n";
    cout << "A negação do primeiro numero é: "<< !num1<< endl; // operador logico de negação !
    cout << "-------------------------------------- \n";
    cout << "A op. AND entre o primeiro e o segundo num é: "<< (num1 && num2)<< endl; // operador logico AND é &&
    cout << "-------------------------------------- \n";
    cout << "A op. OR entre o primeiro e o segundo num é: "<< (num1 || num2)<< endl; // operador logico OR é ||
    cout << "-------------------------------------- \n";

    return 0;
}
