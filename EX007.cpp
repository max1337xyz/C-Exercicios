#include <iostream>
#include <math.h>
using namespace std;

int main(){
    //Fa�a um Programa que calcule a �rea de um quadrado, em seguida mostre o dobro desta �rea para o usu�rio.

    /*
        Para calcularmos a a�rea de um quadrado devemos:

    */
    float x;
    cout << "Digite o lado do quadrado" << endl;
    cin >> x;
    cout << "A area desse quadrado = " << pow(x,2)*2 << endl;
    return 0;
}
