#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int num1,num2;
    setlocale (LC_ALL, "Portuguese");
    cout << " Escreva um número " << endl;
    cin >> num1;
    cout << " Escreva outro número " << endl;
    cin >> num2;

    if (num1>num2)
    {

        cout <<" O número " << num1 << " é maior que o " << num2 <<endl;
    }
    else {

        cout << " o número " << num2 << " é maior que o " << num1 <<endl;
    }

    return 0;
}
