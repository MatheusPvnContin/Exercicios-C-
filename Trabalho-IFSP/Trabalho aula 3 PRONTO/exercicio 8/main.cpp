#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
        setlocale(LC_ALL,"Portuguese");

    int hora,mes, salario;
    cout << " Qual o valor que voc� ganha por hora no trabalho: " << endl;
    cin >> hora;
    cout << "Quantas horas voc� trabalha no m�s: " << endl;
    cin >> mes;
    salario = hora *mes;
    cout << " O salario final �: "<< salario << endl;
    return 0;
}
