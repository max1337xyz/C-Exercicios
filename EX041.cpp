#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    /*
        Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são: "Telefonou para a vítima?" "Esteve no local do crime?" "Mora perto da vítima?" "Devia para a vítima?" "Já trabalhou com a vítima?"

        O programa deve no final emitir uma classificação sobre a participação da pessoa no crime.

        Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".
    */
    char choice = 0;
    int cont;
    cout << "*******************VAMOS BRINCAR*******************" << endl;
    cout << "Telefonou para a vítima? [S] Para Sim, [N] Para nao: " << endl ;
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
    cout << "Mora perto da vítima?    [S] Para Sim, [N] Para nao:  " << endl;
     cout << cont;
     cin >> choice;
     if(choice == 's' || choice == 'S'){
        cont++;
     }


    cout << "Devia para a vítima?,   [S] Para Sim, [N] Para nao:  " << endl;
     cin >> choice;
    if (choice == 's' || choice=='s'){
        cont++;
     }
    cout << "Já trabalhou com a vítima?, [S] Para Sim, [N] Para nao:  " << endl;
     cin >> choice;
    if(choice == 's' || choice == 'S'){
        cont++;

    }



    if(cont==2)
        cout << "Você é suspeito!";
    else if(cont ==3 || cont ==4)
        cout << "Você é cumplice!";
    else if(cont >= 5)
        cout << "Você é o assasino!";
    else{
        cout << "Inocente!";
    }
    return 0;
}
