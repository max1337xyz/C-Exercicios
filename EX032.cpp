#include <iostream>

using namespace std;

int main(){
    /*
        Faça um Programa que peça os 3 lados de um triângulo. O programa deverá
        informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.

        Dicas: Três lados formam um triângulo quando a soma de
        quaisquer dois lados for maior que o terceiro; Triângulo Equilátero: três lados iguais; Triângulo Isósceles: quaisquer dois lados iguais; Triângulo Escaleno: três lados diferentes;
    */
    int lado1,lado2,lado3;
    cout << "Informe o primeiro lado: ";
    cin >> lado1;
    cout << "\nInforme o segundo lado: ";
    cin >> lado2;
    cout << "\nInforme o terceiro lado: ";
    cin >> lado3;

    if(lado1+lado1 >lado3 && lado1==lado3 && lado2==lado3){
        cout << "\nForma um triangulo!" << endl;
        cout << "Forma um triangulo Equilatero!";
    }
    else if(lado1+lado1 >lado3 && lado1==lado2 || lado2==lado3 || lado3==lado1 || lado2==lado1){
        cout << "\nForma um triangulo!" << endl;
        cout << "Forma um triangulo Isoceles!";
    }
    else if(lado1+lado1 >lado3 && lado1!=lado3 && lado2!=lado3){
        cout << "\nForma um triangulo!" << endl;
        cout << "Forma um triangulo Escaleno!";
    }
    return 0;
}
