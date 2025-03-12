#include <iostream>

using namespace std;
#define calculoM1 72.7
#define calculoM2 58
#define calculoF1 62.1
#define calculoF2 44.7
int main(){

    //Tendo como dado de entrada a altura (h) de uma pessoa, 
    //construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7

    float h;
    char choice;

    cout << "Digite Qual Sexo voce se identica [M] = Masculino, [F] Feminino: " ;
    cin >> choice;
    cout <<    "\n "<<  "Agora digite Sua altura:";
    cin >> h;

    if(choice =='M' || "m"){
        cout << "Seu peso ideal: " <<(calculoM1*h)-calculoM2;

    }
    else{
        cout << "Seu peso ideal" << (calculoF1*h)-calculoF2;

    }
    return 0;
}