#include <iostream>

using namespace std;

int main(){
    /*
        Fa�a um Programa que pe�a um n�mero correspondente a um determinado ano e em seguida informe se este ano � ou n�o bissexto.

    */
    int ano;
    cout << "Informe um ano:" << endl;
    cin >> ano;
    int bisexto =  ano %100;

    if(bisexto%4==0){
        cout << "Ano bisexto";
    }
    return 0;
}
