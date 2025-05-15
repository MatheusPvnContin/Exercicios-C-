#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;


/*Elabore um algoritmo para gerar duas matrizes MxN. Calcule e imprima a matriz soma.*/


/*Para realizar a soma de matrizes ambas devem ter a mesma quantidade de linhas e colunas */
int main()
{
    setlocale(LC_ALL, "Portuguese");


    int M,N,i,j;


    cout << "*************************************************************************************************"<<endl;
    cout<< "\n programa voc� ir� definir o tamanho de uma matriz \n e Ap�s isso fazer a soma de tal "<<endl;
    cout << "*************************************************************************************************"<<endl;

    cout << "Digite o tamanho da linha da matriz  ";
    cin>>M;
     cout << "Digite o tamanho da coluna da matriz  ";
    cin>>N;

    int matriz[M][N]; //Linha/Coluna
    int matrizDois[M][N]; //matriz dois para a soma
    int matrizSoma [M][N]; // matriz repons�vel pela soma


        // MATRIZ 1
        for(i=0;i<M;i++){//linha
            for(j=0;j<N;j++){//coluna
            cout<< "Digite o valor para preencher a matriz na posi��o ["<<i<<", "<<j<<"]:"<<endl;
             cin>>matriz[i][j];//ver a posi��o linha = i e j = coluna

         }
        }
        cout<<endl;


        //MATRIZ 2
        for(i=0;i<M;i++){//linha
            for(j=0;j<N;j++){//coluna
            cout<< "Digite o valor para preencher a 2� matriz na  posi��o ["<<i<<", "<<j<<"]:"<<endl;
             cin>>matrizDois[i][j];//ver a posi��o linha = i e j = coluna

         }
        }
        cout<<endl;


        //C�culo da matriz soma
         for(i=0;i<M;i++){//linha
            for(j=0;j<N;j++){//coluna

        matrizSoma [i][j] =  matriz [i][j] + matrizDois [i][j];

        }
       }


        // Impress�o da matriz soma
        cout << setw(24)<<" Matriz SOMA:" << endl;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
            cout <<setw(10)<<matrizSoma[i][j] << "\t";
        }
        cout << endl;
       }


    return 0;
}
