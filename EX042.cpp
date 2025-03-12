#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    /*
        Um posto está vendendo combustíveis com a seguinte tabela de descontos: Álcool: até 20 litros, desconto de 3% por litro acima de 20 litros, desconto de 5% por litro Gasolina: até 20 litros, desconto de 4% por litro acima de 20 litros, desconto de 6% por litro

        Escreva um algoritmo que leia o número de litros vendidos, o tipo de
        combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,50 o preço do litro do álcool é R$ 1,90.
    */

    float gas =2.50;
    int qtd;
    float alcool  = 1.90;
    float descontsGas;
    float descontAlcool;
    char choice;
    cout << "O que deseja compra?, [g] Gasolina,[a]Alcool" << endl;
    cin >> choice;

    if(choice == 'g' || choice == 'G'){
        cout << "Digite quanto de gas vocoe gostaria: " << endl;
        cin >> qtd;
        gas = gas*qtd;

            if(qtd<=20){
                descontsGas = gas*(4.0)/100;
                cout << "O valor de Litros foi: " << qtd << " - " << "Logo tera um desconto de:   " << descontsGas<<"R$ " << "Logo o preço final e: " << gas-descontsGas << "R$";

            }
            if(qtd>=21){
                descontsGas = gas*(6.0)/100;
                cout << "O valor de Litros foi: " << qtd << " - " << "Logo tera um desconto de:   " << descontsGas<<"R$ " << "Logo o preço final e: " << gas-descontsGas << "R$";

    }
    }

    if(choice == 'a' || choice == 'A'){
        cout << "Digite quanto de Alcool voce gostaria: " << endl;
        cin >> qtd;
        alcool = alcool*qtd;
        //cout << "Quantidade de litros = " << gas;
            if(qtd <=20){
                descontAlcool = alcool*(3.0)/100;
                cout.precision(3);
                cout << "O valor de Litros foi: " << qtd << " - " << "Logo tera um desconto de:   " << descontAlcool<<"R$ " << "Logo o preço final e: " << alcool-descontAlcool << "R$";
            }
            if(qtd >=21 ){
                descontAlcool = alcool*(5.0)/100;
                cout << "O valor de Litros foi: " << qtd << " - " << "Logo tera um desconto de:   " << descontAlcool<<"R$ " << "Logo o preço final e: " << alcool-descontAlcool << "R$";
            }



    return 0;
}
}
