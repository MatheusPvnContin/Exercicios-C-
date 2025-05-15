#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
/*Escreva um programa em C++ para ler o raio de um círculo, calcular e escrever a sua área e perímetro.
    Fórmulas:  perímetro =  2pi*r   Area = pi*r^2 onde r é o raio e  vale 3.14*/

{
    setlocale(LC_ALL,"Portuguese");
    float raio,area,perimetro;
    cout << " ---- Informe o raio do circulo: " << endl;
    cin >> raio;
    cout<< fixed<<setprecision(2);//fixar em duas casas decimais
    area = M_PI*(pow(raio,2));
    perimetro = 2*M_PI*raio;
    cout << " O valor da area é: "<<area<<endl;
    cout << endl;
    cout << " O valor do perimetro é: "<< perimetro <<endl;
    return 0;
}
