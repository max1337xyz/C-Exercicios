#include <iostream>

using namespace std;

int main(){

    /*
        Fa�a um Programa que pe�a um n�mero inteiro e determine se ele � par ou impar. Dica: utilize o operador m�dulo (resto da divis�o).
    */
    int x;
    cout << "Digite o numeor e descubra se ele � par ou impar: ";
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
