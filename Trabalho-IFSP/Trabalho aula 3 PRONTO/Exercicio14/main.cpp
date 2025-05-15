#include <iostream>
#include <locale.h>
using namespace std;

int main()

{
    //EXERCICIO 14
    setlocale(LC_ALL,"Portuguese");

    float pesoPeixe, multa,excedente;
    cout << " Qual o peso do peixe pescado: " << endl;
    cin >> (pesoPeixe);

    if (pesoPeixe > 50){

        excedente = pesoPeixe - 50;
        multa = excedente*4;
        cout << "O peso ultrapassa o regulamento logo você terá de pagar "<<multa<< "R$ de multa" << endl;
    }
    else
        cout << " Seu peixe se enquadro no regulamento de peso TUDO CERTO!! " << endl;


    return 0;
}
