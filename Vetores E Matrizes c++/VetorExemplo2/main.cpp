#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //cria��o do vetor
    float notas[5], media = 0.0;
    int i = 0;
    for (i=0;i<5;i++){//percores todos os espa�os do vetor

        cout<<" Digite a nota do aluno "<< i+1 << ": "<<endl;
        cin>> notas[i]; // digitar dentro dos vetor
        media+=notas[i];
    }
    cout << "\nM�dia das notas: " << media/5 << endl;



    return 0;
}
