#include <iostream>

using namespace std;

int main(){
    /*
        As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contrataram para desenvolver o programa que calculará os reajustes.

        Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:

salários até R$ 280,00 (incluindo) : aumento de 20%
salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
salários de R$ 1500,00 em diante :
    aumento de 5% Após o aumento ser realizado,
informe na tela:
    o salário antes do reajuste;
    o percentual de aumento aplicado;
    o valor do aumento;
    o novo salário, após o aumento.
    */
    double salario,novoSalario;
    cout << "Digite seu salario abaixo: " << endl;
    cin >> salario;


    if(salario <= 280){
        novoSalario = salario*0.20;
        cout << "Devido ao seu salario ser menor que 280R$ Voce ira receber um bonus de: 20% logo" << endl;
        cout << "o salário antes do reajuste: " << salario << "R$";
        cout << "\nAumento: 20% ";
        cout << "\nNovo salario: " << salario + novoSalario;
    }
    else if(salario >281 || salario >=700){
        novoSalario = salario*0.15;
        cout << "Devido ao seu salario ser maior  que 280R$ e menor ou igual a 700RS$ Voce ira receber um bonus de: 15% logo" << endl;
        cout << "o salário antes do reajuste: " << salario << "R$";
        cout << "\nAumento: 15% ";
        cout << "\nNovo salario: " << salario + novoSalario;
    }
    else if(salario >=701 || salario >=1500){
           novoSalario = salario*0.10;
        cout << "Devido ao seu salario ser maior  que 700$ e menor ou igual a 1500RS$ Voce ira receber um bonus de: 10% logo" << endl;
        cout << "o salário antes do reajuste: " << salario << "R$";
        cout << "\nAumento: 10% ";
        cout << "\nNovo salario: " << salario + novoSalario + salario*0.5;
    }


    return 0;
}
