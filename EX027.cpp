#include <iostream>

using namespace std;

int main(){

    /*
            Fa�a um Programa que pergunte em que turno voc� estuda. Pe�a para digitar M-matutino ou V-Vespertino ou N- Noturno.

            Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inv�lido!", conforme o caso.
    */
    char turno;
    cout << "Bem vindo ao colegio em qual turno voce vai estudar? [M]MANHA ,[V]VESPERTINO,[N]NOTURNO: " ;
    cin >> turno;
    if(turno == 'M' || turno == 'm'){
        cout << "\nVoce vai estudar no turno matutino, BOM DIA! " << endl;
    }
    else if(turno == 'V' || turno == 'v'){
        cout << "\nVoce vai estudar no turno da tarde, BOA TARDE! " << endl;

    }
    else if(turno == 'N' || turno == 'n'){
        cout << "\n Voce vai estudar no turno da noite, BOA NOITE! " << endl;
    }
    else{
        cout << "Valor Inv�lido!";
    }


    return 0;
}
