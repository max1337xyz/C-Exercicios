#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    /*
        Fa�a um programa que fa�a 5 perguntas para uma pessoa sobre um crime. As perguntas s�o: "Telefonou para a v�tima?" "Esteve no local do crime?" "Mora perto da v�tima?" "Devia para a v�tima?" "J� trabalhou com a v�tima?"

        O programa deve no final emitir uma classifica��o sobre a participa��o da pessoa no crime.

        Se a pessoa responder positivamente a 2 quest�es ela deve ser classificada como "Suspeita", entre 3 e 4 como "C�mplice" e 5 como "Assassino". Caso contr�rio, ele ser� classificado como "Inocente".
    */
    char choice = 0;
    int cont;
    cout << "*******************VAMOS BRINCAR*******************" << endl;
    cout << "Telefonou para a v�tima? [S] Para Sim, [N] Para nao: " << endl ;
    cin >> choice;
    if(choice == 's' || choice == 'S'){
        cont++;
    }
    cout << "Esteve no local do crime? [S] Para Sim, [N] Para nao:  " << endl;
    cout << cont;
    cin >> choice;
    if(choice == 's' || choice == 'S'){
        cont++;
     }
    cout << "Mora perto da v�tima?    [S] Para Sim, [N] Para nao:  " << endl;
     cout << cont;
     cin >> choice;
     if(choice == 's' || choice == 'S'){
        cont++;
     }


    cout << "Devia para a v�tima?,   [S] Para Sim, [N] Para nao:  " << endl;
     cin >> choice;
    if (choice == 's' || choice=='s'){
        cont++;
     }
    cout << "J� trabalhou com a v�tima?, [S] Para Sim, [N] Para nao:  " << endl;
     cin >> choice;
    if(choice == 's' || choice == 'S'){
        cont++;

    }



    if(cont==2)
        cout << "Voc� � suspeito!";
    else if(cont ==3 || cont ==4)
        cout << "Voc� � cumplice!";
    else if(cont >= 5)
        cout << "Voc� � o assasino!";
    else{
        cout << "Inocente!";
    }
    return 0;
}
