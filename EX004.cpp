#include <iostream>

using namespace std;

int main(){
    //Fa�a um Programa que pe�a as 4 notas bimestrais e mostre a m�dia.

    /*
        para calcular a m�dia devemos pegar os 4 n�meros e somalos e depois dividilos pelo n�mero de notas no caso 4;
    */
    int nota1,nota2,nota3,nota4;
    cout << "Digite a primeira nota" << endl;
    cin >> nota1;
    cout << "Digite a segunda nota" << endl;
    cin >> nota2;
    cout << "Digite a terceira nota" << endl;
    cin >> nota3;
    cout << "Digite a ultima nota" << endl;
    cin >> nota4;
    cout << "A nota foi: " << (nota1+nota2+nota3+nota4)/4 << endl;

    return 0;
}
