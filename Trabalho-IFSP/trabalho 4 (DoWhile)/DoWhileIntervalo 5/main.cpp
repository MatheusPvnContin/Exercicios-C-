#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
  /* 5.	Escreva um programa para exibir os números contidos no intervalo de n a m, inclusive.
  n e m devem ser valores informados pelo usuário (os números devem ser exibidos em ordem crescente).*/




setlocale(LC_ALL,"Portuguese");

   int n,m;

        cout << " Informe dois numeros para saber o intervalo entre eles: " << endl;
        cout << " numero 1: " << endl;
        cin>>n;
        cout << "numero 2: "<<endl;
        cin>> m;


        // Garante que n seja o menor valor
    if (n > m) {
        swap(n, m); // Troca os valores se necessário
}

      do {

        cout << n << " ";// Exibe o número
        n++;

        }
     while (n <= m);


    cout << "    " << endl;
    return 0;
}
