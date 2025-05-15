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

    cout << " insira o "<< i+1<<"° número" << endl;
    cin>> num[i];
    }
    for (i=0;i<tamanho;i++){
    if(num[i]%2==0 && num[i]!= 0){
        cout<<" O numero na " << i+1 <<"° posição  é " << num[i]<<" e é par"<<endl;

    }else if (num[i] == 0){
        cout<< " O número na posição " << i+ 1 <<" é 0" <<endl;
    }
    else{
      cout<<" O numero na " << i+1 <<"° posição  é " << num[i]<<" e é impar"<<endl;
    }
    }

    return 0;
}
