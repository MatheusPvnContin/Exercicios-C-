#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
        setlocale(LC_ALL,"Portuguese");

    float raio, area;
    cout << " Qual o raio do circulo que deseja calcular a �rea!" << endl;
    cin >> raio;
    area = 3.14 * pow (raio,2); // pow � igual expoente
    cout << "O valor da �rea do circulo �: "<< area<< endl;

    return 0;
}
