#include <iostream>

using namespace std;

int main(){
    //Fa�a um Programa que pe�a a temperatura em graus Celsius, transforme e mostre em graus Farenheit.
    int c;
    cout << "Digite os graus em Celsius" << endl;
    cin >> c;
    cout << "Convertido para farenheit" <<  "\n" << (c*1.8)+32;



    return 0;
}
