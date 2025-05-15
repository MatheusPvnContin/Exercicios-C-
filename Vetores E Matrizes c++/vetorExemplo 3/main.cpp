#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    const int tamanho = 5;
    float notas[tamanho],media= 0.0;
    int i = 0, j;
    cout<<fixed<<setprecision(2);

    do{
            if(i>=tamanho){
                cout<< "Buffer Lotado "<<endl;
                i++;
                break;

            }
        cout << "Digite a nota do aluno "<< i+1 << ": " << endl;
        cin>>notas[i];

    }while (notas[i++]>=0);


    for(j = 0 ; j<i; j++){

        media+=notas[j];
    }
    cout << "\nMédia das notas: " << media/i << endl;


    return 0;
}
