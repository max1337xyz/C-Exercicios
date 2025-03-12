#include <iostream>
#include <math.h>
using namespace std;
#define pi 3.14
int main(){
    //Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
    /*
        Areá de um cirulo é pi vezes o raio elevado a 2;
    */
    float raio;
    cout << "Digite o Raio do circulo" << endl;
    cin >> raio;
    cout << "a area desse circulo = " << (pi*pow(raio,2)) << endl;

    return 0;
}
