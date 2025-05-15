#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n1, n2,soma;
    cout << "Sou aluno de BSI no IFSP" << endl;
    cout << "______________________________________________" << endl;
     cout << " Digite um número " <<endl;
     cin >> n1;
     cout << " O número informado foi: " << n1 << endl;
     cout << "______________________________________________" << endl;
     cout << " Digite mais um número para a somar com o primeiro: " << endl;
     cin >> n2;
     soma = n1+n2;
     cout<< " A soma dos dois números é: " << soma << endl;

    return 0;
}
