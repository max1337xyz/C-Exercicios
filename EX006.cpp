#include <iostream>
#include <math.h>
using namespace std;
#define pi 3.14
int main(){
    //Fa�a um Programa que pe�a o raio de um c�rculo, calcule e mostre sua �rea.
    /*
        Are� de um cirulo � pi vezes o raio elevado a 2;
    */
    float raio;
    cout << "Digite o Raio do circulo" << endl;
    cin >> raio;
    cout << "a area desse circulo = " << (pi*pow(raio,2)) << endl;

    return 0;
}
