#include <iostream>
#include <iostream>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{

setlocale(LC_ALL,"Portuguese");




 float n1, n2, n3;
 float rf, rp, media;

   cout << "Esse programa fará a soma de três números! \n";
   cout << "Insira o primeiro número: \n";
   cin >> n1;
   cout << "insira o segundo número: \n";
   cin >> n2;

rp = n1 + n2;
//cout << " o resultado preliminar é: \n" << rf;

   cout << "Digite o terceiro número \n";
   cin >> n3;

   cout << "\n";
   cout << "///////////////////////////////////////////// \n";
   cout << "\n";
rf = rp + n3;

   cout << "o resultado final da soma é: " << rf << "\n";
   media = rf/3;
   cout << "A media dos três numeros é: " << media << "\n";
    return 0;



}
