#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
  setlocale(LC_ALL,"Portuguese");

    int n1,n2,n3;
    cout << "Informe tres numeros numero 1:" << endl;
    cin>> n1;
    cout << "numero 2:" << endl;
    cin>> n2;
    cout << "numero 3:" << endl;
    cin>> n3;

    if (n1>n2 && n1>n3)
        cout << "O maior numero é o: "<< n1<<endl;
    else if (n2>n1&&n2>n3)
        cout << "O maior numero é o: "<< n2<<endl;
    else
        cout << "O maior numero é o: "<< n3<<endl;

    return 0;
}
