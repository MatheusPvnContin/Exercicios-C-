#include <iostream>
#include <windows.h>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    string nome, filme;
    char SimNao;
    char profissao [100], nPet [100];
    int salario,tamanho,i;

    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    cout << "________________________________________________________________________________________________________________________"<<endl;
    cout << setw(50)<< "OPA E AI VAMO BATE UM PAPO " << endl;

    //PERGUNTA 1
    cout << setw(42)<< "Qual � o seu nome? ";
    getline(cin, nome);
    cout << "\nNossa, " <<nome << ", que nome diferente, seus pais n�o devem gostar de voc�!\n";
    cout << "________________________________________________________________________________________________________________________"<<endl;

    //PERGUNTA 2
    while (true) {
    cout << setw(20)<< "Voc� tem alguma profiss�o? \n";
    cout << " Digite: [S] para Sim " << endl;
    cout << " Digite: [N] para N�o " << endl;
    cin >> SimNao;
    cin.ignore(1000, '\n');
    SimNao = toupper(SimNao);

        if (SimNao == 'S') {
            cout << "E qual sua profiss�o? "<<endl;
            cin>> profissao;
            if (strlen(profissao) >= 1){
            cout << " Nossa que profiss�o chata n�o tinha coisa mais interessante para fazer n�o!!! " << endl;
    cout << "________________________________________________________________________________________________________________________"<<endl;

    //PERGUNTA 3
            cout << " Quanto que voc� ganha pra trabalhar com isso a�? ";
            cout << " Escolha pelo n�mero:" << endl;
            cout << " 1 - Um salario m�nimo" << endl;
            cout << " 2 - Entre 2000R$ e  3500R$ " << endl;
            cout << " 3 - Prefiro n�o dizer! " << endl;
            cin >> salario;

                if (cin.fail()) {
                    cin.clear(); // limpa o erro
                    cin.ignore(1000, '\n'); // limpa o buffer
                    salario = 0;
                    }

            if (salario == 1)
                cout << " Que mis�ria, tu n�o deve ter nem papel higienico em casa !!" << endl;
                else if (salario == 2)
                cout << " PAR�BENS AGORA VOC� SE ENQUADRA NA CATEGORIA DE POBRE PREMIUM !!!!!!!!!!!" << endl;
                else if (salario == 3)
                cout << " Al�, n�o ta querendo passar vergonha ou � muito metido :P " << endl;
            else
                cout << " Cara n�o � dificil responder entre 1, 2 e 3 qual seu problema?!!!! " << endl;
   cout << "_______________________________________________________________________________________________________________________"<<endl;
                }
        break;
        }
        else if (SimNao == 'N') {
            cout << " Nossa voc� n�o acha que ta na hora de deixar de ser vagabundo(a)!!" << endl;
   cout << "_______________________________________________________________________________________________________________________" << endl;
            break;
        }
        else {
            cout << " N�o � dif�cil responder S ou N, como voc� passou num vestibular!!!!" << endl;
            cout << " Vou perguntar mais uma vez. " << endl;
   cout << "_______________________________________________________________________________________________________________________"<<endl;
        }
    }


        // PERGUNTA 4


    int tentativas = 0;
    cout << " \nVamos falar de filme \nQue tipo de filme voc� curte? " << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << " *Romance\n *Terror\n *Aventura\n *Fala outro\n> ";
    getline(cin, filme);
    cin.ignore();
    while (true) {
        // transforma em min�sculo para compara��o segura
        string filmeLower = filme;
        for (char &c : filmeLower) c = tolower(c);

        if (filmeLower == "terror") {
            cout << " Ai sim, agora tu tem 1% do meu respeito! " << endl;
            break;
        }

        tentativas++;
        if (tentativas >= 3) {
            cout << " N�o aguento mais, voc� realmente tem um p�ssimo gosto... " << endl;
            break;
        }

        cout << " \nNossa que mal gosto voc� tem, fala s�rio..... \n que filme voc� gosta: " << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << " *Romance\n *Terror\n *Aventura\n *Fala outro\n> ";
        getline(cin, filme);
    }

    cout << "________________________________________________________________________________________________________________________" << endl;

    //PERGUNTA 5

    cout <<" Voc� tem algum pet? \n [S] ou [N]? "<<endl;
    cin >> SimNao;
    SimNao = toupper(SimNao);

    switch(SimNao)
    {
        case 'S':
            //PERGUNTA 6
            cout << "E qual o nome dele? "<<endl;
            cin>> nPet;
            if (strlen(nPet) >= 1){
            cout << " Nossa deve ser de familia esse mal gosto por nomes... " << endl;
    cout << "________________________________________________________________________________________________________________________"<<endl;
                }
        break;
        case 'N':
            cout << " Acho que voc� deveria ter um, voc� parece muito amargurado(a)" << endl;
        break;

        default:
            cout << " N�o � dificil responder S ou N..... Como pode errar isso!!!!" << endl;
            cout << endl;
    cout << "________________________________________________________________________________________________________________________"<<endl;
    }

    //PERGUNTA 7
    do {
    cout << "Me fala um n�mero de 1 a 10" << endl;
    cin >> i;

    if (cin.fail() || i < 1 || i > 10) {// intervalo entre 1 e 10
        cin.clear(); // limpa o estado de erro
        cin.ignore(1000, '\n'); // limpa o buffer
        cout << " N�mero inv�lido! Tenta de novo, � de 1 a 10, ANIMAL... " << endl;
    } else {
        break; // n�mero v�lido, sai do loop
    }
    } while (true);

    for (int j = 0; j < i; j++) {

    cout << " Eu " << nome << " AMO demais esse programa <3 " << endl;

    }
    cout << " Que isso... eu acho voc� agrad�vel no m�ximo. "<<endl;
    cout << "________________________________________________________________________________________________________________________"<<endl;

    //PERGUNTA 8

    string experiencia;
    cout << " To ficando cansado de falar com voc� \n Me diz ai oque voc� achou dessa experi�ncia? \n --(Pode falar bastante...ELOGIA..)--"<<endl;
    getline(cin,experiencia);

    cin.ignore(); // limpa o buffer antes do getline
    getline(cin, experiencia);

    cout << "________________________________________________________________________________________________________________________"<<endl;

    cout << " Bl� Bl� Bl� Bl� Bl� Bl� Bl� Bl� Bl� Bl� Bl� Bl� \n Bl� Bl� Bl� Bl� Bl� Bl� Bl� Bl� Bl� Bl� Bl� Bl� \n Bl�Bl�Bl�Bl� Bl� Bl� Bl�Bl� \n Bl�Bl�Bl�Bl�Bl�Bl�Bl�Bl�... " <<endl;
    cout<< setw(55)<<" Que enche��o de saco. TCHAU. " <<endl;

    return 0;
}

