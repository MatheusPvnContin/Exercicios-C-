#include <iostream>
#include <locale.h>
using namespace std;
// PRIMEIRO PROGRAMA EM --"DO WHILE"--
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,num1;
    i = 0;
    cout << " Digite um numero: " << endl;
    cin >> num1;
        do
   {
        cout << " O antecessor do numero "<< num1<< " é: " << endl;
        num1 = num1 -1;
        i = i +1;
   }
    while (i<=10);

    return 0;
}
