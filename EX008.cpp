#include <iostream>

using namespace std;

int main(){
    //Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
    float ganho;
    float horas;

    cout << "Digite quanto ganha por hora trabalhada" << endl;
    cin >> ganho;
    cout << "Digite quantas horas Voce trabalha no mes" << endl;
    cin>> horas;

    cout << "O seu salario no fim do mes: " << horas*ganho;


    return 0;
}
