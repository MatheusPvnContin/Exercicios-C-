#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float n1,n2;
    cout << "Escreva um n�mero: " << endl;
    cin >> n1;
    cout << "Escreva outro n�mero: " << endl;
    cin >> n2;

    if (n1>n2){
        cout << " O maior n�mero digitado �: " << n1 << endl;
    }
    else
        cout << " O maior n�mero digitado �: "<< n2 <<endl;
    return 0;
}
