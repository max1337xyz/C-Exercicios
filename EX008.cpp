#include <iostream>

using namespace std;

int main(){
    //Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.
    float ganho;
    float horas;

    cout << "Digite quanto ganha por hora trabalhada" << endl;
    cin >> ganho;
    cout << "Digite quantas horas Voce trabalha no mes" << endl;
    cin>> horas;

    cout << "O seu salario no fim do mes: " << horas*ganho;


    return 0;
}
