#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

/*Elabore um algoritmo que receba n�meros e os armazene em uma matriz M x M. Imprima a matriz sem os n�meros da diagonal principal. */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int M,N,i,j;

    cout << "Digite o tamanho da matriz quadrada" << endl;
    cin>>M;
    N=M;

    int matriz[M][N];

        for(i=0;i<M;i++){//linha
            for(j=0;j<N;j++){//coluna
            cout<< "Digite o valor para preencher a matriz na posi��o ["<<i<<", "<<j<<"]:"<<endl;
             cin>>matriz[i][j];//ver a posi��o linha = i e j = coluna

         }
        }
        cout<<endl;

        for(i=0;i<M;i++){//linha
            for(j=0;j<N;j++){//coluna
                    if (i!=j){
            cout<< matriz[i][j]<<"\t";
        }else {
        cout<< " _ "<<"\t";// o \t � um tab
        }
        }
           cout<<endl;
        }


    return 0;
}

