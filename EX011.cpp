#include <iostream>
#include <math.h>
using namespace std;

int main(){

    //Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. 
    //a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.

    int x;
    int y;
    float z;
    cout << "Digite o primeir número: ";
    cin >> x;
    cout << "\n" << "Digite o segundo numero: ";
    cin >> y;
    cout << "\n" << "Digite o terceiro numero: " << endl;
    cin >> z;
  

    int a = (x*2)*(y/2);
    float b = (x*3)+z;
    float c = pow(z,3);


    cout << "Primeiro Calculo: " << a;
    cout << "\n" << "Segundo calculo: " << b;
    cout << "\n" << "Terceiro calculo:" << c;
    

    
    return 0;
}