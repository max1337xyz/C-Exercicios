#include <iostream>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");

    /*
        Fa�a um Programa que leia 2 n�meros e em seguida pergunte ao usu�rio qual opera��o ele deseja realizar.

        O resultado da opera��o deve ser acompanhado de uma frase que diga se o n�mero �: par ou �mpar; positivo ou negativo; inteiro ou decimal.
    */
    int choice;
    float x;
    float y;
    cout <<"Digite o primeiro numero: ";
    cin >> x;
    cout <<"\nDigite o segundo numero: "<< endl;
    cin >> y;
    cout <<"Digite qual opera��o pretender fazer: [0] Verificar se os dois numeros sao pares ou impares, [1] Se os dois numeros s�o positivos ou  negativos, [2] Se s�o decimais ou Inteiros;" << endl;
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
