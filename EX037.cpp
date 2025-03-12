#include <iostream>
#include <string>
#include <vector>



using namespace std;

int main(){
    system("color 2");
    setlocale(LC_ALL,"portuguese");
    /*
        Faça um Programa para um caixa eletrônico.

    O programa deverá perguntar ao usuário a valor do saque e depois informar quantas notas de cada valor serão fornecidas.

    As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais.

    O programa não deve se preocupar com a quantidade de notas existentes na máquina.

    Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1;

    Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.
    */
    vector<int>notas = {100,50,10,5,1};
    vector<int>quantidade(5,0);
    int dinheiro;
    cout << left << cout.width(20) << cout.fill('*') <<"Bem vindo ao Banco" << right << cout.width(20) << cout.fill('*');
    cout << "\nDigite Quanto de dinheiro possui:" << endl;
    cin >> dinheiro;

    if(dinheiro <10 || dinheiro >600){
        cout << "Numero invalido não se encaixa no padrão!" << endl;
        exit(0);

    }

    for (size_t i = 0; i < notas.size(); i++) {
        quantidade[i] = dinheiro / notas[i]; // Quantidade de notas dessa denominação
        dinheiro %= notas[i]; // Atualiza o valor restante
    }

    cout << "Você ganhara: " << endl;
    for(auto i = 0;i<notas.size();i++){
        if(quantidade[i] >0){
            cout << quantidade[i] << " Em notas: " << notas[i] << endl;
        }
    }





    return 0;
}
