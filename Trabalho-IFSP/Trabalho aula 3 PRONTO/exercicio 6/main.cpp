#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
        setlocale(LC_ALL,"Portuguese");

    float raio, area;
    cout << " Qual o raio do circulo que deseja calcular a área!" << endl;
    cin >> raio;
    area = 3.14 * pow (raio,2); // pow é igual expoente
    cout << "O valor da área do circulo é: "<< area<< endl;

    return 0;
}
