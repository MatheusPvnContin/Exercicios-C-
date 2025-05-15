#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

/*1.	A prefeitura de uma cidade fez uma pesquisa entre 15 habitantes, coletando dados sobre o sal�rio e n�mero de filhos. A prefeitura deseja saber:
�	m�dia do sal�rio da popula��o;
�	m�dia do n�mero de filhos;
�	maior sal�rio; .
 */

int main()
{
    setlocale(LC_ALL,"Portuguese");

      float salario, somaSalario = 0, maiorSalario = 0;
    int filhos, somaFilhos = 0;

    cout << fixed << setprecision(2);

    for (int i = 1; i <= 15; i++) {
        cout << "Habitante " << i << ":" << endl;

        // Leitura do sal�rio
        cout << "Digite o sal�rio: ";
        cin >> salario;



        // Leitura do n�mero de filhos
        cout << "Digite o n�mero de filhos: ";
        cin >> filhos;

        }


        somaSalario += salario;
        somaFilhos += filhos;

        if (salario > maiorSalario) {//comparador
            maiorSalario = salario;
        }


    float mediaSalario = somaSalario / 15.0;
    float mediaFilhos = somaFilhos / 15.0;

    cout << "\n--- Resultados ---" << endl;
    cout << "M�dia do sal�rio: R$ " << mediaSalario << endl;
    cout << "M�dia do n�mero de filhos: " << mediaFilhos << endl;
    cout << "Maior sal�rio informado: R$ " << maiorSalario << endl;



    return 0;


}
