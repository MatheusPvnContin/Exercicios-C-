#include <iostream>
#include <locale.h>
#define DIM  5//declaro um constante chamado DIM

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor [DIM] = {10,15,20,25,30};
    int vetor1 [] = {10,20,30,40,50,60,-1};
    int i;

    cout << "Vetor com tamnho pré-defino com #DEFINE" << endl;
    for(i=0;i<DIM;i++){
        cout<< "Vetor na posição "<< i + 1<< " = "<<vetor[i]<<endl;
    }
    cout<< "\n\nVetor terminado por -1 " <<endl;
    for (i=0;vetor1[i]>0;i++){
    cout << " Vetor na POSIÇÃO "<< i + 1<< " = "<< vetor1[i] <<endl;
    }


    //VETORES INICIAM NA POSIÇÃO 0
    return 0;
}
