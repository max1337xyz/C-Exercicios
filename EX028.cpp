#include <iostream>

using namespace std;

int main(){
    /*
        As Organiza��es Tabajara resolveram dar um aumento de sal�rio aos seus colaboradores e lhe contrataram para desenvolver o programa que calcular� os reajustes.

        Fa�a um programa que recebe o sal�rio de um colaborador e o reajuste segundo o seguinte crit�rio, baseado no sal�rio atual:

sal�rios at� R$ 280,00 (incluindo) : aumento de 20%
sal�rios entre R$ 280,00 e R$ 700,00 : aumento de 15%
sal�rios entre R$ 700,00 e R$ 1500,00 : aumento de 10%
sal�rios de R$ 1500,00 em diante :
    aumento de 5% Ap�s o aumento ser realizado,
informe na tela:
    o sal�rio antes do reajuste;
    o percentual de aumento aplicado;
    o valor do aumento;
    o novo sal�rio, ap�s o aumento.
    */
    double salario,novoSalario;
    cout << "Digite seu salario abaixo: " << endl;
    cin >> salario;


    if(salario <= 280){
        novoSalario = salario*0.20;
        cout << "Devido ao seu salario ser menor que 280R$ Voce ira receber um bonus de: 20% logo" << endl;
        cout << "o sal�rio antes do reajuste: " << salario << "R$";
        cout << "\nAumento: 20% ";
        cout << "\nNovo salario: " << salario + novoSalario;
    }
    else if(salario >281 || salario >=700){
        novoSalario = salario*0.15;
        cout << "Devido ao seu salario ser maior  que 280R$ e menor ou igual a 700RS$ Voce ira receber um bonus de: 15% logo" << endl;
        cout << "o sal�rio antes do reajuste: " << salario << "R$";
        cout << "\nAumento: 15% ";
        cout << "\nNovo salario: " << salario + novoSalario;
    }
    else if(salario >=701 || salario >=1500){
           novoSalario = salario*0.10;
        cout << "Devido ao seu salario ser maior  que 700$ e menor ou igual a 1500RS$ Voce ira receber um bonus de: 10% logo" << endl;
        cout << "o sal�rio antes do reajuste: " << salario << "R$";
        cout << "\nAumento: 10% ";
        cout << "\nNovo salario: " << salario + novoSalario + salario*0.5;
    }


    return 0;
}
