#include <iostream>

using namespace std;

int main(){
    system("color 2");
    char palavra[30],secret[30],letra,repeat;
    int tam,i,vidas,acertos;
    bool acertou = false;

    repeat ='s';
    i = 0;
    tam = 0;
    acertos = 0;
    vidas = 5;
    voltaloop:
    cout << "Digite uma palavra pro jogador adivinhar" << endl;
    cin >> palavra;
    system("cls");
    while(palavra[tam]  !='\0'){
        tam++;
    }
    for(i = 0; i < tam; i++){
        secret[i] = '-';
    }
    secret[tam]  = '\0';

    while((vidas>0) && (acertos < tam) && repeat == 's'){
         voltaLoop:

        cout << "Vidas Restantes: " << vidas  << "\n\n";
        cout << "Palavra secreta:" << secret << "\n\n";
        cout << "Digite uma letra: ";
        cin >> letra;

        acertou = false;

        for(i = 0;i<tam; i++)
            if(palavra[i] == letra && secret[i] == '-')  {
                acertou = true;
                acertos++;
                secret[i] = palavra[i];;
            }


        if(acertou == false){
            vidas--;
        }
        system("cls");



}
        if(acertos == tam){

            cout << "Voce ganhou!" << endl;
            cout << "Gostaria de tentar novamente? [s] para SIM, [n] para NAO" << endl;
            cin >> repeat;

            repeat ='s';
            i = 0;
            tam = 0;
            acertos = 0;
            vidas = 5;
            goto voltaloop;


        }
        else{
            cout << "Infelizmente Voce perdeu a palavra era: " <<palavra;

        }



    return 0;

}
