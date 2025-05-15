#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int golSP,golPalmeiras;

    cout << " **** Placar SÃO PAULO X PALMEIRAS ****" << endl;
    cout << "Digite a quantidade de gols do Palmeiras: " << endl;
    cin >> golPalmeiras;
    cout << "Digite a quantidade de gols do São Paulo: " << endl;
    cin >> golSP;

     if(golSP > golPalmeiras)
        cout << " A festa é tricolor " << endl;
     else
        cout << " A festa é dos poco " << endl;

    return 0;
}
