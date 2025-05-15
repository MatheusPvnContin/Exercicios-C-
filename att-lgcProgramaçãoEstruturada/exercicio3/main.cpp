#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()
{

    setlocale(LC_ALL,"Portuguese");

    float num1,num2,num3,soma,subtracao,divisao,multiplicacao;
    int resto,num4, num5;

    cout << "Este programa irá realizar operacoes matematicas " << endl;
    cout << "Cinco numeros serao necessarios "<< endl <<endl;
    cout << "--------------------------------------------------------- \n";
    cout << "Digite o primeiro número " << endl ;
    cin >> num1;
    cout << "Digite o segundo número  "<< endl ;
    cin >> num2;
    cout << "Digite o terceiro número  "<< endl ;
    cin >> num3;
    cout << "Digite o quarto número  "<< endl ;
    cin >> num4;
    cout << "Digite o quinto número  "<< endl ;
    cin >> num5;

    cout << "--------------------------------------------------------- \n";

    soma = num1 + num2;
    cout << "A soma do primeiro com o segundo é: " << soma <<endl;
    cout << "--------------------------------------------------------- \n";
    subtracao = num3 - num1;
    cout << "A subtracao do terceiro com o primeiro é: " <<subtracao <<endl;
    cout << "--------------------------------------------------------- \n";
    multiplicacao = num1 * num2;
    cout << "A multiplicacao do primeiro com o segundo é: " << multiplicacao <<endl;
    cout << "--------------------------------------------------------- \n";
    divisao = num2/num1;
    cout << "A divisao do segundo com o primeiro é: " <<setprecision(2) << divisao <<endl;
    cout << "--------------------------------------------------------- \n";
    resto = num4 % num5;
    cout << "O resto da div do quarto número com o quinto é: " << resto << endl;
    cout << "--------------------------------------------------------- \n";

        return 0;
}
