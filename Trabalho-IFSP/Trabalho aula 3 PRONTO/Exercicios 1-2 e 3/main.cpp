#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n1, n2,soma;
    cout << "Sou aluno de BSI no IFSP" << endl;
    cout << "______________________________________________" << endl;
     cout << " Digite um n�mero " <<endl;
     cin >> n1;
     cout << " O n�mero informado foi: " << n1 << endl;
     cout << "______________________________________________" << endl;
     cout << " Digite mais um n�mero para a somar com o primeiro: " << endl;
     cin >> n2;
     soma = n1+n2;
     cout<< " A soma dos dois n�meros �: " << soma << endl;

    return 0;
}
