#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdio>

using namespace std;
    /*
    Escrever um programa que leia o c�digo do item pedido, a quantidade do item e calcule o valor a ser pago por aquele lanche.
    Considere que a cada execu��o somente ser� calculado um item. Informe que c�digo inv�lido caso seja digitado algo diferente.
    */



int main()
{
  setlocale(LC_ALL,"Portuguese");

    int opc;//op��o selecionada
    float quant,item,resultado;


    cout << " ________________________________________________________________ " << endl<<endl;
    cout << "      ---------  ESPECIFICA��O   |  C�DIGO |  PRE�O  --------- " << endl;
    cout << " ________________________________________________________________" << endl<<endl;
    cout << "      -------    Cachorro quente |  100    |  9,20  --------- " << endl;
    cout << "      -------    Bauru simples	 |  101    |  12,00 --------- " << endl;
    cout << "      -------    Bauru com ovo	 |  102    |  13,00 ---------" << endl;
    cout << "      -------    Hamburger       |  103    |  10,00 ---------" << endl;
    cout << "      -------    Cheeseburguer	 |  104    |  12,00 ---------" << endl;
    cout << "      -------    Refrigerante    |  105    |  5,00  ---------" << endl;
    cout << "      -------    �gua            |  106    |  3,00  ---------" << endl;
    //cout << "      -------       Digite S para sair do programa  ---------" << endl;
    cout << " ________________________________________________________________ " << endl;

    cin >> opc;
    cout<<fixed<<setprecision(2);//resultado com duas casas decimais

    switch (opc){

        case 100:
        cout << "       Muito bem, selecione  a quantidade de CACHORRO QUENTE: "<< endl;
        cin >> quant;
        item = 9.20;
        resultado = quant*item;
        cout << " ------------------------------------------------------------ " << endl;
        cout << "        O valor a ser pago �: "<< resultado<<"R$ " << endl;
        cout << " ------------------------------------------------------------ " << endl;
        break;

        case 101:
        cout << "       Muito bem, selecione  a quantidade de BAURU SIMPLES: "<< endl;
        cin >> quant;
        item = 12.00;
        resultado = quant*item;
        cout << " ------------------------------------------------------------ " << endl;
        cout << "       O valor a ser pago �: "<< resultado<<"R$ " << endl;
        cout << " ------------------------------------------------------------ " << endl;
        break;

        case 102:
        cout << "       Muito bem, selecione  a quantidade de BAURU COM OVO: "<< endl;
        cin >> quant;
        item = 13.00;
        resultado = quant*item;
        cout << " ------------------------------------------------------------ " << endl;
        cout << "       O valor a ser pago �: "<< resultado<<"R$ " << endl;
        cout << " ------------------------------------------------------------ " << endl;
        break;

        case 103:
        cout << "       Muito bem, selecione  a quantidade de HAMBURGUER: "<< endl;
        cin >> quant;
        item = 10.00;
        resultado = quant*item;
        cout << " ------------------------------------------------------------ " << endl;
        cout << "       O valor a ser pago �: "<< resultado<<"R$ " << endl;
        cout << " ------------------------------------------------------------ " << endl;
        break;

        case 104:
        cout << "       Muito bem, selecione  a quantidade de CHEESBURGUER: "<< endl;
        cin >> quant;
        item = 12.00;
        resultado = quant*item;
        cout << " ------------------------------------------------------------ " << endl;
        cout << "       O valor a ser pago �: "<< resultado<<"R$ " << endl;
        cout << " ------------------------------------------------------------ " << endl;
        break;

        case 105:
        cout << "       Muito bem, selecione  a quantidade de REFRIGERANTE LATA: "<< endl;
        cin >> quant;
        item = 5.00;
        resultado = quant*item;
        cout << " ------------------------------------------------------------ " << endl;
        cout << "       O valor a ser pago �: "<< resultado <<"R$ "<< endl;
        cout << " ------------------------------------------------------------ " << endl;
        break;

        case 106:
        cout << "       Muito bem, selecione  a quantidade de �GUA: "<< endl;
        cin >> quant;
        item = 3.00;
        resultado = quant*item;
        cout << " ------------------------------------------------------------ " << endl;
        cout << "       O valor a ser pago �: "<< resultado <<"R$ "<< endl;
        cout << " ------------------------------------------------------------ " << endl;
        break;

        /*case 's':
        cout << "      SAINDO DO PROGRAMA.... : "<< endl;
        < " ------------------------------------------------------------ " << endl;
        break;*/

        default:
            cout << "   C�digo Inv�lido !!!! " <<endl;
        }



}
