#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
        setlocale(LC_ALL,"Portuguese");

    float porcentagem;

    porcentagem = 2112*0.12;
    cout << " 12% de 2112 � igual �: "<< porcentagem << endl;


    return 0;
}
