#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int quant;



    cout << "Quantos produtos voc� vai lan�ar: " << endl;
    cin>> quant;

    float produtos[quant];
    int i;
    float valor = 0.0;


    for (i=0;i<quant;i++){
        cout<< "Digite o pre�o do produto "<< i+1<< ": "<<endl;
        cin>>produtos[i];
        valor+=produtos[i];
    }

    cout << "O valor da compre �: "<<valor<<endl;


    return 0;
}
