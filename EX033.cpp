#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

int main(){
    /*
        Fa�a um programa que calcule as ra�zes de uma equa��o do segundo grau, na forma ax� + bx + c.

        O programa dever� pedir os valores de a, b e c e fazer as consist�ncias, informando ao usu�rio nas seguintes situa��es:
        Se o usu�rio informar o valor de A igual a zero, a equa��o n�o � do segundo
    grau e o programa n�o deve fazer pedir os demais valores,
    sendo encerrado;
    Se o delta calculado for negativo, a equa��o n�o possui ra�zes reais.
    Informe ao usu�rio e encerre o programa;
        Se o delta calculado for igual a zero a equa��o possui apenas uma raiz
    real; informe-a ao usu�rio;
    Se o delta for positivo, a equa��o possui duas raiz reais;
    informe-as ao usu�rio;
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
        cout << "n�o � equa��o" << endl;
    }

    else if (result <0){
        cout << "\nA Equa��o n�o possui raizes reais!";
        exit(0);
    }
    else if(result == 0){
        cout << "\nResultado igual a zero Possui apenas uma raiz real";
        exit(0);
    }
    else if(result>0){
        cout << "\nA Equa��o possui duas raizes reais " << result;
    }
    return 0;
}
