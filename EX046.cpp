#include <iostream>
#include <string>

using namespace std;

int main(){


    /*
        Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.
    */
    string user;
    string senha;

    while(true){
        cout << "\n\nDigite seu user: ";
        cin >> user;
        cout << "\n\nDigite sua senha: ";
        cin >> senha;
      

        if(senha == user){
            cout << "\n\nTente novamente!";
            system("cls");
        }
        else{
            cout <<"\nsucess: ";
            exit(0);
        }
    }
    return 0;
}