#include <iostream>

using namespace std;

int main(){
    /*
        Faça um Programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto.

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
