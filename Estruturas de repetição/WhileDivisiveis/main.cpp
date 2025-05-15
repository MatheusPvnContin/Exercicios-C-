#include <iostream>

using namespace std;

int main()
{
    int contador = 0;

    while (contador < 100){
        contador = contador +10;// nesse while está dividindo o intervalo em 10 loops pois pula de 10 em 10.
     cout << "numeros divisiveis por 10 entre 1 e 100: "<< contador << endl;
    }
    return 0;
}
