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

   cout << "Esse programa far� a soma de tr�s n�meros! \n";
   cout << "Insira o primeiro n�mero: \n";
   cin >> n1;
   cout << "insira o segundo n�mero: \n";
   cin >> n2;

rp = n1 + n2;
//cout << " o resultado preliminar �: \n" << rf;

   cout << "Digite o terceiro n�mero \n";
   cin >> n3;

   cout << "\n";
   cout << "///////////////////////////////////////////// \n";
   cout << "\n";
rf = rp + n3;

   cout << "o resultado final da soma �: " << rf << "\n";
   media = rf/3;
   cout << "A media dos tr�s numeros �: " << media << "\n";
    return 0;



}
