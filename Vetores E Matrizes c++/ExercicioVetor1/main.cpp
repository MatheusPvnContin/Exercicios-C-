#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int quant;



    cout << "Quantos produtos você vai lançar: " << endl;
    cin>> quant;

    float produtos[quant];
    int i;
    float valor = 0.0;


    for (i=0;i<quant;i++){
        cout<< "Digite o preço do produto "<< i+1<< ": "<<endl;
        cin>>produtos[i];
        valor+=produtos[i];
    }

    cout << "O valor da compre é: "<<valor<<endl;


    return 0;
}
