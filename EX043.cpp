#include <iostream>

using namespace std;

int main(){

    float descont;
    float descont2;
    float apple = 2.20,morango = 1.50;

    int qtd1;
    int qtd2;


    cout << left <<cout.width(20) << cout.fill('*') << "Bem-vindo ao mercado" << right << cout.width(20) << cout.fill('*');
    cout << "\nDigite quantos kg de Morango: " << endl;
    cin >> qtd1;
    cout << "Digite quantos kg de Apple: "<< endl;
    cin>> qtd2;
    morango = morango*qtd1;
    apple = apple*qtd2;



    if(morango>20 && apple>20){
        descont = morango*(10.0)/100;
        descont2 = apple*(10.0)/100;
        float descontFinal = (morango+apple) - descont-descont2;

        cout.precision(3);
        cout << "Voce comprou Tantos de KG: " << morango << "R$  -  " << "E de KG: " << apple << "R$" << " E o Desconto final Foi: " <<  descontFinal;
    }
    return 0;
}
