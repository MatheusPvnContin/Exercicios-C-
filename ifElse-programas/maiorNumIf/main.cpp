#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int num1,num2,num3;
    setlocale (LC_ALL, "Portuguese");

    cout << " Escreva um número " << endl;
    cin >> num1;
    cout << " Escreva um segundo número " << endl;
    cin >> num2;
    cout << " Escreva um terceiro número " << endl;
    cin >> num3;

        if (num1>num2 && num1>num3)
        {
        cout<< " O número " << num1 << " é o maior número digitado " <<endl;
        }
        else if (num2>num1 && num2>num3)
        {
        cout << " O maior numero digitado é o  " << num2 << endl;
        }
        else
        cout << " O maior número digitado é: " << num3 << endl;


    return 0;
}
