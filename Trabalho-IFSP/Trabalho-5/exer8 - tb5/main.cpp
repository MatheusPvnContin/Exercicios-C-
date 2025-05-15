#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()
{

    /*8.	Tendo como dados de entrada a altura e o sexo de uma pessoa (M para masculino e F para feminino),
            construa um programa que calcule o peso ideal de uma pessoa, utilizando as seguintes fórmulas:
                - para pessoa do sexo masculino: peso Ideal =  (72.7*h)-58
                - para pessoa do sexo feminino: peso Ideal = (62.1*h)-44.7
                Exiba as informações incluindo o peso ideal.*/

      setlocale(LC_ALL,"Portuguese");

      char sexo;
      float h,peso;

    cout << " Vamos calcular seu indice médio corporal (IMC) " << endl;
    cout << " Informe seu sexo sendo (F) para Feminino | (M) para Masculino " << endl;
    cin >> sexo;
    sexo = toupper(sexo);
    cout<<fixed<<setprecision(2);

    if (sexo == 'F'){
        cout << " Muito bem agora informe sua altura: " << endl;
        cin >> h;
        peso = (62.1*h)-44.7;
        cout<< " Seu peso Ideal é de: "<< peso <<endl;

    }else if (sexo == 'M'){
        cout << " Informe sua altura: "<<endl;
        cin >> h;
        peso = (72.7*h)-58;
        cout<< " Seu peso Ideal é de: "<< peso <<endl;
    }else{
    cout << " Informe uma resposta correta " <<endl;
    }



    return 0;
}
