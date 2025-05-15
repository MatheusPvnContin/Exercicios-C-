#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
        setlocale(LC_ALL,"Portuguese");

    int hora,mes, salario;
    cout << " Qual o valor que você ganha por hora no trabalho: " << endl;
    cin >> hora;
    cout << "Quantas horas você trabalha no mês: " << endl;
    cin >> mes;
    salario = hora *mes;
    cout << " O salario final é: "<< salario << endl;
    return 0;
}
