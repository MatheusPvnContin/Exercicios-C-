#include <iostream>
#include <locale.h>
using namespace std;

int main()
{

        /*Fa�a um programa para ler N n�meros inteiros � informe um de cada vez.
    A repeti��o ser� encerrada quando o usu�rio digitar o n�mero 0.
    O programa deve informar quantos n�meros foram digitados. */

    setlocale(LC_ALL,"Portuguese");

    int i,n,quant;
    i=1;
    quant = -1;
     do
     {
        cout << " Informe um n�mero: " << endl;
        cout << " Para sair digite 0 " << endl;
        cin >> n;
        quant = quant+1;
     }
   while (i<=n);
        cout << "  A quantidade de numeros digitado foram: "<< quant << endl;
    return 0;
}
