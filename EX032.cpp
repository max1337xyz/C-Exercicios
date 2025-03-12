#include <iostream>

using namespace std;

int main(){
    /*
        Fa�a um Programa que pe�a os 3 lados de um tri�ngulo. O programa dever�
        informar se os valores podem ser um tri�ngulo. Indique, caso os lados formem um tri�ngulo, se o mesmo �: equil�tero, is�sceles ou escaleno.

        Dicas: Tr�s lados formam um tri�ngulo quando a soma de
        quaisquer dois lados for maior que o terceiro; Tri�ngulo Equil�tero: tr�s lados iguais; Tri�ngulo Is�sceles: quaisquer dois lados iguais; Tri�ngulo Escaleno: tr�s lados diferentes;
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
