#include <iostream>
#include <locale.h>
using namespace std;

int main()
{

setlocale(LC_ALL,"Portuguese");

    float n1,n2, media;
    cout << " Escreva sua primeira nota " << endl;
    cin >> n1;
    cout << " Escreva sua segunda nota " << endl;
    cin >> n2;
    media = (n1+n2) / 2;
        if (media >=7 && media <10){ //limitar o intervalo
            cout << " Voc� foi APROVADO " << endl;

    }
        else if (media<7) {
            cout << " Voc� foi REPROVADO" << endl;

    }
        else
            cout << " Aprovado com Distin��o  " <<endl;


    return 0;
}
