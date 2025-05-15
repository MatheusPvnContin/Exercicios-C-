#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    double area, litros_necessarios;
    int latas_necessarias;
    double preco_total;

    // Solicita o tamanho da �rea a ser pintada
    cout << "Digite o tamanho da �rea a ser pintada (em metros quadrados): ";
    cin >> area;

    // Calcula a quantidade de litros necess�rios
    litros_necessarios = area / 3.0;

    // Calcula a quantidade de latas necess�rias
    latas_necessarias = static_cast<int>(litros_necessarios / 18.0); // Parte inteira da divis�o ou seja se for 1.6 vai ser contabilizado 1.0

        if (litros_necessarios / 18.0 - latas_necessarias > 0) {
        latas_necessarias++; // Adiciona 1 se houver resto (precisa de mais uma lata)
        }

    preco_total = latas_necessarias * 80.0;

    cout << "Quantidade de latas de tinta necess�rias: " << latas_necessarias << endl;
    cout << "Pre�o total: R$ " << preco_total << endl;

    return 0;
}
