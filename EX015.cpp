#include <iostream>

using namespace std;

int main(){

    //Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
    //Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: salário bruto. quanto
    //pagou ao INSS. quanto pagou ao sindicato. o salário líquido. calcule os descontos e o salário líquido, conforme a tabela abaixo:


    int horas;
    float ganho;
    float salario;
    float imRenda;
    float inss;
    float sindicato;
    float liquido;
    cout << "Digite Quanto Ganha por hora trabalhada: ";
    cin >> ganho;
    cout << "\n" << "Digite Quantas horas trabalha por dia: ";
    cin >> horas;
    salario = horas*ganho;
    inss = salario*(11.0)/100;
    imRenda = salario*(8.0)/100;
    sindicato = salario*(5.0)/100;
    liquido = salario - inss - imRenda - sindicato;
    cout << "Salário Bruto : R$" << salario;
    cout << "\n" << "Imposta de renda(11%): " << imRenda << "R$";
    cout << "\n" << "Inss(8%): " << inss << "R$";
    cout << "\n" << "Sindicato(5%): " << sindicato << "R$";
    cout << "\n Salario Bruto: " << liquido << "R$";




    return 0;

}