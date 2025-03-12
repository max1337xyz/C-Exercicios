#include <iostream>
#include <math.h>
using namespace std;

int main(){
    //Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

    /*
        Para calcularmos a aárea de um quadrado devemos:

    */
    float x;
    cout << "Digite o lado do quadrado" << endl;
    cin >> x;
    cout << "A area desse quadrado = " << pow(x,2)*2 << endl;
    return 0;
}
