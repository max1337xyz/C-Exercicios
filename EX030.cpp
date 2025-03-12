#include <iostream>
#include <vector>
using namespace std;

int main(){
    /*
        Faça um Programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.
    */
    vector<int>diasSemans = {0,1,2,3,4,5,6};

    cout << "DIGITE EM QUAL DIA DA SEMANA VOCE SE ENCONTRA: ";
    for(int i = 0; i<diasSemans.size();i++){
        cin >> diasSemans[i];
        if(diasSemans[i] == 0){
            cout << "Parabens voce esta no DOMINGO!";
            break;
        }
        else if(diasSemans[i] == 1){
            cout << "Parabens voce esta numa SEGUNDA-FEIRA";
            break;
        }
        else if(diasSemans[i] == 2){
            cout << "parabens voce esta numa TERCA-FEIRA";
            break;
        }
        else if(diasSemans[i] == 3){
            cout << "parabens voce esta numa QUARTA-FEIRA";
            break;
        }
        else if(diasSemans[i] == 4){
            cout << "parabens voce esta numa QUINTA-FEIRA";
            break;
        }
        else if(diasSemans[i] == 5){
            cout << "parabens voce esta numa SEXTA-FEIRA SEXTOUUUU";
            break;
        }
        else if(diasSemans[i] == 6){
            cout << "parabens voce esta num SABADO";
            break;
        }

        else{
            cout << "invalido";
            break;
        }
    }


    return 0;
}
