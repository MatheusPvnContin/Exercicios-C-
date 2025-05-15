#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()
/*    4. Construa um programa em C++ que receba o nome e o valor de um produto,
         calcule o valor do produto após um desconto de 13%. Apresente o resultado como o abaixo:
                Produto: <nome do produto>
                Valor: <valor original do produto>
                Desconto: <valor do desconto>
                Valor Final: <valor do produto após o desconto>*/

{
    setlocale(LC_ALL,"Portuguese");

    char nome [35];
    float valor,desc,valorF;
    cout << " Informe o nome do produto: " << endl;
    cin>>nome;
    cout << " Agora informe o valor do produto: "<<endl;
    cin>>valor;
    desc = valor*0.13;
    valorF = valor - desc;
    cout << setw(5)<< " Produto: " << nome << endl;
    cout << " Valor: " << valor << endl;
    cout << " Desconto: " << desc << endl;
    cout << " Valor Final: " << valorF << endl;
    return 0;

}
