#include <iostream>

using namespace std;

int main(){

    /*
        Fa�a um programa que pergunte o pre�o de tr�s produtos e informe qual produto voc� deve comprar, sabendo que a decis�o � sempre pelo mais barato.
    */
    string prod[3] = {"Insider","Polo","Jaqueta"};
    float insPrice = 25.99,poloPrice= 15.25,jaquetaPrice = 150.99;
    int choice;
    cout << "Qual produto Voce gostaria de checar o pre�o: [0], [1]Polo, [2]Jaqueta" << endl;
    cin >> choice;
    if(choice == 0){
        cout << "O preco da Insider : " << insPrice << "R$" << endl;
    }
    else if(choice == 1){
        cout << "O preco da Polo : " << poloPrice << "R$" << endl;
    }
    else{
        cout << "O preco da Jaqueta : " << jaquetaPrice << "R$" << endl;
    }
    cout << "Aqui estao Todos os precos: \n"  <<insPrice  << "R$"  << "\n" << poloPrice  << "R$" << "\n" << jaquetaPrice  << "R$" << endl;
    cout << "Logo Voce deveria comprar a Golo Polo pois o seu preco e o mais barato: " << poloPrice <<"R$" <<  endl;


    return 0;
}
