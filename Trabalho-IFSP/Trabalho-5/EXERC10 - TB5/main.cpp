#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()

/**	Escrever um programa que lê o número de identificação de um aluno (matrícula), 3 notas (0 até 10) obtidas nas atividades da disciplina.
    Calcular a média de aproveitamento, usando a fórmula:
        MA=  (N1+N2*2+N3*3)/6
O programa deve escrever o número do aluno (matrícula), suas notas, a média de aproveitamento e o conceito correspondente.
De acordo com o conceito exiba a mensagem: APROVADO se o conceito for A,B ou C e REPROVADO se o conceito for D ou E.
 */

{
    setlocale(LC_ALL,"Portuguese");



    int matricula;
    float nota1, nota2, nota3;
    float media;
    char conceito;


    cout << "Digite o número de matrícula do aluno: ";
    cin >> matricula;


    cout << "Digite a primeira nota (0 a 10): ";
    cin >> nota1;

    cout << "Digite a segunda nota (0 a 10): ";
    cin >> nota2;

    cout << "Digite a terceira nota (0 a 10): ";
    cin >> nota3;

    // Cálculo da média de aproveitamento
    media = (nota1 + nota2 *2 + nota3 * 3) / 6.0;

    // Atribuição do conceito
    if (media >= 9.0) {
        conceito = 'A';
    } else if (media >= 7.5) {
        conceito = 'B';
    } else if (media >= 6.0) {
        conceito = 'C';
    } else if (media >= 4.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    // Exibição dos resultados
    cout << fixed << setprecision(1);
    cout << "\nMatrícula: " << matricula << endl;
    cout << "Notas: " << nota1 << ", " << nota2 << ", " << nota3 << endl;
    cout << "Média: " << media << endl;
    cout << "Conceito: " << conceito << endl;

    // Mensagem de aprovação/reprovação
    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        cout << "APROVADO" << endl;
    } else {
        cout << "REPROVADO" << endl;
    }


    return 0;
}
