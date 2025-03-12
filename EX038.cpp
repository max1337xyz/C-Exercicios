#include <iostream>

using namespace std;

int main(){

    /*
        Faça um Programa que peça um número inteiro e determine se ele é par ou impar. Dica: utilize o operador módulo (resto da divisão).
    */
    int x;
    cout << "Digite o numeor e descubra se ele é par ou impar: ";
    cin >> x;

    if(x%2 == 0){
        cout << "Numero Digitado: " << x << endl;
        cout << "\nPAR!!!";
    }
    else{
        cout << "\nIMPAR!!!";
    }
    return 0;
}
