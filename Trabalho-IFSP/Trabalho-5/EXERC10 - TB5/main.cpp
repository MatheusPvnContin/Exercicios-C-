#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()

/**	Escrever um programa que l� o n�mero de identifica��o de um aluno (matr�cula), 3 notas (0 at� 10) obtidas nas atividades da disciplina.
    Calcular a m�dia de aproveitamento, usando a f�rmula:
        MA=  (N1+N2*2+N3*3)/6
O programa deve escrever o n�mero do aluno (matr�cula), suas notas, a m�dia de aproveitamento e o conceito correspondente.
De acordo com o conceito exiba a mensagem: APROVADO se o conceito for A,B ou C e REPROVADO se o conceito for D ou E.
 */

{
    setlocale(LC_ALL,"Portuguese");



    int matricula;
    float nota1, nota2, nota3;
    float media;
    char conceito;


    cout << "Digite o n�mero de matr�cula do aluno: ";
    cin >> matricula;


    cout << "Digite a primeira nota (0 a 10): ";
    cin >> nota1;

    cout << "Digite a segunda nota (0 a 10): ";
    cin >> nota2;

    cout << "Digite a terceira nota (0 a 10): ";
    cin >> nota3;

    // C�lculo da m�dia de aproveitamento
    media = (nota1 + nota2 *2 + nota3 * 3) / 6.0;

    // Atribui��o do conceito
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

    // Exibi��o dos resultados
    cout << fixed << setprecision(1);
    cout << "\nMatr�cula: " << matricula << endl;
    cout << "Notas: " << nota1 << ", " << nota2 << ", " << nota3 << endl;
    cout << "M�dia: " << media << endl;
    cout << "Conceito: " << conceito << endl;

    // Mensagem de aprova��o/reprova��o
    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        cout << "APROVADO" << endl;
    } else {
        cout << "REPROVADO" << endl;
    }


    return 0;
}
