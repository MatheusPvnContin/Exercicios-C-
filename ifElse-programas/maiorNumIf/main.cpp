#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int num1,num2,num3;
    setlocale (LC_ALL, "Portuguese");

    cout << " Escreva um n�mero " << endl;
    cin >> num1;
    cout << " Escreva um segundo n�mero " << endl;
    cin >> num2;
    cout << " Escreva um terceiro n�mero " << endl;
    cin >> num3;

        if (num1>num2 && num1>num3)
        {
        cout<< " O n�mero " << num1 << " � o maior n�mero digitado " <<endl;
        }
        else if (num2>num1 && num2>num3)
        {
        cout << " O maior numero digitado � o  " << num2 << endl;
        }
        else
        cout << " O maior n�mero digitado �: " << num3 << endl;


    return 0;
}
