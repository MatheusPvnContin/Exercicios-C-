#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //criação do vetor
    float notas[5], media = 0.0;
    int i = 0;
    for (i=0;i<5;i++){//percores todos os espaços do vetor

        cout<<" Digite a nota do aluno "<< i+1 << ": "<<endl;
        cin>> notas[i]; // digitar dentro dos vetor
        media+=notas[i];
    }
    cout << "\nMédia das notas: " << media/5 << endl;



    return 0;
}
