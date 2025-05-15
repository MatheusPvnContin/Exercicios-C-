#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

int main()
{
        setlocale(LC_ALL,"Portuguese");

    int L,area,dobro;
    cout << "informe o lado de um quadrado!" << endl;
    cin >> L;
    area = pow (L,2);
    dobro =  area *2;
    cout << " O dobro da area do quadrado é: " << dobro<<endl;
    return 0;
}
