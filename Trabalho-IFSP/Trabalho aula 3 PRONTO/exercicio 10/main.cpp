#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float porcentagem,num;

    cout << " Informe um numero para calcular a porcentagem dele: " << endl;
    cin >> num;
     porcentagem = num*0.12;
     cout << " 12% do numero escolhido é igual à: "<< porcentagem << endl;

}
