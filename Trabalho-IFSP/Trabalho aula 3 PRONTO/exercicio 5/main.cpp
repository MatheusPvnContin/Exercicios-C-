#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
        setlocale(LC_ALL,"Portuguese");
float metros,cm;
    cout << " Escreva uma dist�ncia em metros: " << endl;
    cin >> metros;
    cm = metros *100;
    cout << " A convers�o de "<< metros<< " metros para centimetros �: "<< cm << "cm"<< endl;
    return 0;
}
