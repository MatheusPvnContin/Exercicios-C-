#include <iostream>
#include <locale.h>
using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");

    float salario = 1000;
    float comissao = 5;
    float salarioFinal, valorVendas;

    cout << "Digite o valor total de vendas no m�s! \n " << endl;
    cin >> valorVendas;
    cout << "\n";
    cout << " --------------------------- ";
    cout << "\n";
    salarioFinal = salario + ((valorVendas * comissao) /100);
    cout << " O sal�rio final �: " << salarioFinal << " Reais";
    cout << "\n";
    return 0;
}
