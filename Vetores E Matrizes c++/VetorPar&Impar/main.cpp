#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const int tamanho = 3;
    int num[tamanho],i,par,impar;

    for (i=0;i<tamanho;i++){

    cout << " insira o "<< i+1<<"� n�mero" << endl;
    cin>> num[i];
    }
    for (i=0;i<tamanho;i++){
    if(num[i]%2==0 && num[i]!= 0){
        cout<<" O numero na " << i+1 <<"� posi��o  � " << num[i]<<" e � par"<<endl;

    }else if (num[i] == 0){
        cout<< " O n�mero na posi��o " << i+ 1 <<" � 0" <<endl;
    }
    else{
      cout<<" O numero na " << i+1 <<"� posi��o  � " << num[i]<<" e � impar"<<endl;
    }
    }

    return 0;
}
