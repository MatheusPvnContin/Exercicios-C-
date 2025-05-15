#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int i,n;
    i=1;
     do
     {
        cout << " Informe um número: " << endl;
        cin >> n;
        cout << " Para sair do programa digite 0 !" << endl;
     }
   while (i=0 || i<=n);

    return 0;
}
