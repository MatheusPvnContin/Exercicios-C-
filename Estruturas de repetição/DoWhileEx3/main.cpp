#include <iostream>
#include <locale.h>
using namespace std;

int main()
{

        /*Faça um programa para ler N números inteiros – informe um de cada vez.
    A repetição será encerrada quando o usuário digitar o número 0.
    O programa deve informar quantos números foram digitados. */

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
