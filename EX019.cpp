#include <iostream>

using namespace std;

int main(){
    /*
        Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
    */
    int x;
    cout << "Digite um valor: " << endl;
    cin >> x;
    if(x>= 0){
        cout << "POSITIVO"  << "\nNumero digitado: " << x;
    }
    else
        cout << "NEGATIVO" << "\nNumero digitado: "  << x;

    return 0;
}
