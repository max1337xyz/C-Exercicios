#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main(){
    /*
        Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax² + bx + c.

        O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:
        Se o usuário informar o valor de A igual a zero, a equação não é do segundo
    grau e o programa não deve fazer pedir os demais valores,
    sendo encerrado;
    Se o delta calculado for negativo, a equação não possui raízes reais.
    Informe ao usuário e encerre o programa;
        Se o delta calculado for igual a zero a equação possui apenas uma raiz
    real; informe-a ao usuário;
    Se o delta for positivo, a equação possui duas raiz reais;
    informe-as ao usuário;
    */
    system("color 2");
    setlocale(LC_ALL,"portuguese");


    int a,b,c;
    cout << "Informe o primeiro numero: ";
    cin >> a;
    cout << "\nInforme o segundo numero: ";
    cin >> b;
    cout << "\nInforme o terceiro numero: ";
    cin >> c;
    int delta1 = pow(b,2);
    int delta2 = 4*a * c;
    int result = delta1+delta2;


    if(a<=0){
        cout << "não é equação" << endl;
    }

    else if (result <0){
        cout << "\nA Equação não possui raizes reais!";
        exit(0);
    }
    else if(result == 0){
        cout << "\nResultado igual a zero Possui apenas uma raiz real";
        exit(0);
    }
    else if(result>0){
        cout << "\nA Equação possui duas raizes reais " << result;
    }
    return 0;
}
