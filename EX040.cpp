#include <iostream>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");

    /*
        Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar.

        O resultado da operação deve ser acompanhado de uma frase que diga se o número é: par ou ímpar; positivo ou negativo; inteiro ou decimal.
    */
    int choice;
    float x;
    float y;
    cout <<"Digite o primeiro numero: ";
    cin >> x;
    cout <<"\nDigite o segundo numero: "<< endl;
    cin >> y;
    cout <<"Digite qual operação pretender fazer: [0] Verificar se os dois numeros sao pares ou impares, [1] Se os dois numeros são positivos ou  negativos, [2] Se são decimais ou Inteiros;" << endl;
    cin >> choice;

    if(choice == 0)
        if((int)x%2==0 && (int)y%2==0)
            cout << "Pares";
        else if((int)x%3==0 && (int)y%3==0)
            cout <<"Impares";
        else
            cout <<"Numeros invalidos!";
    if(choice == 1)
        if((int)x>0 && (int)y>0)
            cout <<"Positivos";
        else if(x<0 && y<0)
            cout <<"Negativos";
        else
            cout <<"Numeros invalidos";
    if(choice == 2)
        if(x-(int)x==0 && y-(int)y==0)
                cout << "Numeros Inteiros!";
        else if (x-(int)x!=0 && y-(int)y!=0)
            cout <<"Numeros Decimais";
        else
            cout <<"Numeros Invalidos";
    return 0;
}
