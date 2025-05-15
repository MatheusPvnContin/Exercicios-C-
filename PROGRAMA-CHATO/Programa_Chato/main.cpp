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
    cout << setw(42)<< "Qual é o seu nome? ";
    getline(cin, nome);
    cout << "\nNossa, " <<nome << ", que nome diferente, seus pais não devem gostar de você!\n";
    cout << "________________________________________________________________________________________________________________________"<<endl;

    //PERGUNTA 2
    while (true) {
    cout << setw(20)<< "Você tem alguma profissão? \n";
    cout << " Digite: [S] para Sim " << endl;
    cout << " Digite: [N] para Não " << endl;
    cin >> SimNao;
    cin.ignore(1000, '\n');
    SimNao = toupper(SimNao);

        if (SimNao == 'S') {
            cout << "E qual sua profissão? "<<endl;
            cin>> profissao;
            if (strlen(profissao) >= 1){
            cout << " Nossa que profissão chata não tinha coisa mais interessante para fazer não!!! " << endl;
    cout << "________________________________________________________________________________________________________________________"<<endl;

    //PERGUNTA 3
            cout << " Quanto que você ganha pra trabalhar com isso aí? ";
            cout << " Escolha pelo número:" << endl;
            cout << " 1 - Um salario mínimo" << endl;
            cout << " 2 - Entre 2000R$ e  3500R$ " << endl;
            cout << " 3 - Prefiro não dizer! " << endl;
            cin >> salario;

                if (cin.fail()) {
                    cin.clear(); // limpa o erro
                    cin.ignore(1000, '\n'); // limpa o buffer
                    salario = 0;
                    }

            if (salario == 1)
                cout << " Que miséria, tu não deve ter nem papel higienico em casa !!" << endl;
                else if (salario == 2)
                cout << " PARÁBENS AGORA VOCÊ SE ENQUADRA NA CATEGORIA DE POBRE PREMIUM !!!!!!!!!!!" << endl;
                else if (salario == 3)
                cout << " Alá, não ta querendo passar vergonha ou é muito metido :P " << endl;
            else
                cout << " Cara não é dificil responder entre 1, 2 e 3 qual seu problema?!!!! " << endl;
   cout << "_______________________________________________________________________________________________________________________"<<endl;
                }
        break;
        }
        else if (SimNao == 'N') {
            cout << " Nossa você não acha que ta na hora de deixar de ser vagabundo(a)!!" << endl;
   cout << "_______________________________________________________________________________________________________________________" << endl;
            break;
        }
        else {
            cout << " Não é difícil responder S ou N, como você passou num vestibular!!!!" << endl;
            cout << " Vou perguntar mais uma vez. " << endl;
   cout << "_______________________________________________________________________________________________________________________"<<endl;
        }
    }


        // PERGUNTA 4


    int tentativas = 0;
    cout << " \nVamos falar de filme \nQue tipo de filme você curte? " << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << " *Romance\n *Terror\n *Aventura\n *Fala outro\n> ";
    getline(cin, filme);
    cin.ignore();
    while (true) {
        // transforma em minúsculo para comparação segura
        string filmeLower = filme;
        for (char &c : filmeLower) c = tolower(c);

        if (filmeLower == "terror") {
            cout << " Ai sim, agora tu tem 1% do meu respeito! " << endl;
            break;
        }

        tentativas++;
        if (tentativas >= 3) {
            cout << " Não aguento mais, você realmente tem um péssimo gosto... " << endl;
            break;
        }

        cout << " \nNossa que mal gosto você tem, fala sério..... \n que filme você gosta: " << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << " *Romance\n *Terror\n *Aventura\n *Fala outro\n> ";
        getline(cin, filme);
    }

    cout << "________________________________________________________________________________________________________________________" << endl;

    //PERGUNTA 5

    cout <<" Você tem algum pet? \n [S] ou [N]? "<<endl;
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
            cout << " Acho que você deveria ter um, você parece muito amargurado(a)" << endl;
        break;

        default:
            cout << " Não é dificil responder S ou N..... Como pode errar isso!!!!" << endl;
            cout << endl;
    cout << "________________________________________________________________________________________________________________________"<<endl;
    }

    //PERGUNTA 7
    do {
    cout << "Me fala um número de 1 a 10" << endl;
    cin >> i;

    if (cin.fail() || i < 1 || i > 10) {// intervalo entre 1 e 10
        cin.clear(); // limpa o estado de erro
        cin.ignore(1000, '\n'); // limpa o buffer
        cout << " Número inválido! Tenta de novo, é de 1 a 10, ANIMAL... " << endl;
    } else {
        break; // número válido, sai do loop
    }
    } while (true);

    for (int j = 0; j < i; j++) {

    cout << " Eu " << nome << " AMO demais esse programa <3 " << endl;

    }
    cout << " Que isso... eu acho você agradável no máximo. "<<endl;
    cout << "________________________________________________________________________________________________________________________"<<endl;

    //PERGUNTA 8

    string experiencia;
    cout << " To ficando cansado de falar com você \n Me diz ai oque você achou dessa experiência? \n --(Pode falar bastante...ELOGIA..)--"<<endl;
    getline(cin,experiencia);

    cin.ignore(); // limpa o buffer antes do getline
    getline(cin, experiencia);

    cout << "________________________________________________________________________________________________________________________"<<endl;

    cout << " Blá Blá Blá Blá Blá Blá Blá Blá Blá Blá Blá Blá \n Blá Blá Blá Blá Blá Blá Blá Blá Blá Blá Blá Blá \n BláBláBláBlá Blá Blá BláBlá \n BláBláBláBláBláBláBláBlá... " <<endl;
    cout<< setw(55)<<" Que encheção de saco. TCHAU. " <<endl;

    return 0;
}

