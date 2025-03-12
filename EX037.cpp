#include <iostream>
#include <string>
#include <vector>



using namespace std;

int main(){
    system("color 2");
    setlocale(LC_ALL,"portuguese");
    /*
        Fa�a um Programa para um caixa eletr�nico.

    O programa dever� perguntar ao usu�rio a valor do saque e depois informar quantas notas de cada valor ser�o fornecidas.

    As notas dispon�veis ser�o as de 1, 5, 10, 50 e 100 reais. O valor m�nimo � de 10 reais e o m�ximo de 600 reais.

    O programa n�o deve se preocupar com a quantidade de notas existentes na m�quina.

    Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1;

    Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece tr�s notas de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.
    */
    vector<int>notas = {100,50,10,5,1};
    vector<int>quantidade(5,0);
    int dinheiro;
    cout << left << cout.width(20) << cout.fill('*') <<"Bem vindo ao Banco" << right << cout.width(20) << cout.fill('*');
    cout << "\nDigite Quanto de dinheiro possui:" << endl;
    cin >> dinheiro;

    if(dinheiro <10 || dinheiro >600){
        cout << "Numero invalido n�o se encaixa no padr�o!" << endl;
        exit(0);

    }

    for (size_t i = 0; i < notas.size(); i++) {
        quantidade[i] = dinheiro / notas[i]; // Quantidade de notas dessa denomina��o
        dinheiro %= notas[i]; // Atualiza o valor restante
    }

    cout << "Voc� ganhara: " << endl;
    for(auto i = 0;i<notas.size();i++){
        if(quantidade[i] >0){
            cout << quantidade[i] << " Em notas: " << notas[i] << endl;
        }
    }





    return 0;
}
