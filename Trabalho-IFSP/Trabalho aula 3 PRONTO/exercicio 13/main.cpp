#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float n1,n2;
    cout << "Escreva um número: " << endl;
    cin >> n1;
    cout << "Escreva outro número: " << endl;
    cin >> n2;

    if (n1>n2){
        cout << " O maior número digitado é: " << n1 << endl;
    }
    else
        cout << " O maior número digitado é: "<< n2 <<endl;
    return 0;
}
