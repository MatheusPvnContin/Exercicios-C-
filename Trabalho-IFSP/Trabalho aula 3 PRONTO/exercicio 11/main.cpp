#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float salario,IR;

    cout << "Informe o valor do seu salario!" << endl;
    cin >> salario;
    IR = salario - (salario * 0.07);
    cout << " Seu salario sem imposto de renda aplicado � de: "<< salario<< "R$ \n J� com a aplica��o do imposto seu salario final � de: "<< IR << "R$"<< endl;

    return 0;

}
