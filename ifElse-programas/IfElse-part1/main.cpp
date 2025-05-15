#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    int idade, idadereal;

    cout << " Digite qual sua idade" << endl;
    cin >> idade;

    if(idade>=18)
    {
        cout << " você é maior de idade " << endl;
    }
        else{
        idadereal = 18 - idade;
        cout << " Você é menor de idade ---- " << " \n Falta ainda -- " << idadereal << " anos para você se tornar maior de idade! "<<endl;
    }
    return 0;
}
