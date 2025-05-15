#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float media;
    cout << " Digte a media do aluno!"  << endl;
    cin >> media;

    if(media >= 0 && media <=10)
    {

    cout << " A media é valida \n"    ;
        if(media >= 6){
          cout <<" Aluno foi aprovado com media "<<media<<endl;
        }
        else // do if interno
{

}
         cout << " Aluno foi Reprovado com media "<<media<<endl;


    else
    {
        cout << " A média é invalida "<<endl;
    }

        }

    }

    return 0;

