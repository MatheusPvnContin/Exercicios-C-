#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
        setlocale(LC_ALL,"Portuguese");
float metros,cm;
    cout << " Escreva uma distância em metros: " << endl;
    cin >> metros;
    cm = metros *100;
    cout << " A conversão de "<< metros<< " metros para centimetros é: "<< cm << "cm"<< endl;
    return 0;
}
