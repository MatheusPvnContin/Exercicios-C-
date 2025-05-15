#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
        setlocale(LC_ALL,"Portuguese");

     float n1,n2,n3,n4, media;
    cout << "Informe sua nota " << endl;
    cin >> n1;
    cout << "Informe sua segunda nota " << endl;
    cin >> n2;
    cout << "Informe sua terceira nota " << endl;
    cin >> n3;
    cout << "Informe sua quarta nota " << endl;
    cin >> n4;
    media = (n1+n2+n3+n4)/4;
    cout << "A media desse aluno é: "
    return 0;
}
