#include <iostream>

using namespace std;


int main(){
    
// João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.

// Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.

// João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso.

// Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.
float peso;

cout << "Lembrando que se ultrapassar o valor de 50 kg voce vai pagar uma taxa de 4 reais por cada kg que ultrapassar";
cout << "\n"<<"Digite o peso do Peixe: ";

cin >> peso;

if(peso >50){
    peso+=4;
    cout << "\n"<<  "Devido Voce ultrapasou o peso estabelecido Voce ira pagar uma taxa e calculando a taxa voce vai pagar R$: " << peso; 
    
}
else{
    cout << "Como voce Não ultrapassou o limite estabelecido voce nao vai pagar uma taxa  aqui esta o peso que voce possui" << peso;
}
    return 0;

}