#include <iostream>

using namespace std;
#define calculo 72.7
#define calculo2 58;
int main(){

    //Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58
    float altura;
    cout << "Digite sua altura: ";
    cin >> altura;
    cout <<"\n" <<  "Seu peso ideal: " << (calculo*altura)-calculo2;
    
}