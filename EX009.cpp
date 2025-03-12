#include <iostream>

using namespace std;

int main(){

    //Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).
    int f;
    cout << "Digite quantos graus em Farenheit esta no momemento" << endl;
    cin >> f;
    cout << "Convertidos para graus celsius: " << (5*(f-32)/9);


    return 0;
}
