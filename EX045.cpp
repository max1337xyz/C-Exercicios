#include <iostream>

using namespace std;

/*
    Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.
*/

int main(){
    char cont = 's';
    int x;
    
    while(cont == 's'){
        cout  << "Digite Um num";
        cin >> x;
        if(x== 0 || x<=10){
            exit(EXIT_FAILURE);
            break;
        }
    }

    return 0;
}