#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int i,n,quant;
    i=1;
    quant = -1;
     do
     {
        cout << " Informe um número: " << endl;
        cout << " Para sair digite 0 " << endl;
        cin >> n;
        quant = quant+1;
     }
   while (i<=n);
        cout << "  A quantidade de numeros digitado foram: "<< quant << endl;
    return 0;
}
