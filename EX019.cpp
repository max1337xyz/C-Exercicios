#include <iostream>

using namespace std;

int main(){
    /*
        Fa�a um Programa que pe�a um valor e mostre na tela se o valor � positivo ou negativo.
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
