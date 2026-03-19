#include <iostream>
#include <locale.h>
#include "Quick"
using namespace std;
setlocale(LC_ALL, "Portuguese");

cout << " Ordenação através de SELECTION SORT " << endl;

char opc;
int vetor[5];
bool vetorPreenchido = false;

do
{
    cout << "\n----------------------------------\n";
    cout << " \n- MENU DE ORDENAÇÃO COMPLETO - \n"
         "1-- Preencher o vetor \n"
         "2-- Ordenar com Selection Sort \n"
         "S-- Sair \n"
         "[-->] ";

    cin >> opc;
    opc = toupper(opc);

    switch(opc)
    {
    case '1':
        criarVetor(vetor);
        vetorPreenchido = true;
        break;

    case '2':
        if (vetorPreenchido) OrdenarSelection(vetor);
        else cout << "\n [AVISO]: Preencha o vetor primeiro! \n";
        break;

    case 'S':
        cout << " Finalizando... \n";
        break;

    default:
        cout << " Opção inválida! \n";
    }
}
while(opc != 'S');

return 0;
}
