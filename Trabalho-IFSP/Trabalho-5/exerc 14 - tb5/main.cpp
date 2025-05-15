#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

/*1.	A prefeitura de uma cidade fez uma pesquisa entre 15 habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
•	média do salário da população;
•	média do número de filhos;
•	maior salário; .
 */

int main()
{
    setlocale(LC_ALL,"Portuguese");

      float salario, somaSalario = 0, maiorSalario = 0;
    int filhos, somaFilhos = 0;

    cout << fixed << setprecision(2);

    for (int i = 1; i <= 15; i++) {
        cout << "Habitante " << i << ":" << endl;

        // Leitura do salário
        cout << "Digite o salário: ";
        cin >> salario;



        // Leitura do número de filhos
        cout << "Digite o número de filhos: ";
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
    cout << "Média do salário: R$ " << mediaSalario << endl;
    cout << "Média do número de filhos: " << mediaFilhos << endl;
    cout << "Maior salário informado: R$ " << maiorSalario << endl;



    return 0;


}
