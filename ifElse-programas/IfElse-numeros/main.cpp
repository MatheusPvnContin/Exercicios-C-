#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int num1,num2;
    setlocale (LC_ALL, "Portuguese");
    cout << " Escreva um n�mero " << endl;
    cin >> num1;
    cout << " Escreva outro n�mero " << endl;
    cin >> num2;

    if (num1>num2)
    {

        cout <<" O n�mero " << num1 << " � maior que o " << num2 <<endl;
    }
    else {

        cout << " o n�mero " << num2 << " � maior que o " << num1 <<endl;
    }

    return 0;
}
