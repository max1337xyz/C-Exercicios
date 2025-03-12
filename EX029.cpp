#include <iostream>

using namespace std;

int main(){
    /*
            Fa�a um programa para o c�lculo de uma folha de pagamento, sabendo que os descontos s�o do Imposto de Renda, que depende do sal�rio bruto (conforme tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do Sal�rio Bruto, mas n�o � descontado (� a empresa que deposita).

            O Sal�rio L�quido corresponde ao Sal�rio Bruto menos os descontos. O programa dever� pedir ao usu�rio o valor da sua hora e a quantidade de horas trabalhadas no m�s.

            Desconto do IR: Sal�rio Bruto at� 900 (inclusive) - isento Sal�rio Bruto at� 1500 (inclusive) - desconto de 5% Sal�rio Bruto at� 2500 (inclusive) - desconto de 10% Sal�rio Bruto acima de 2500 - desconto de 20%

            Imprima na tela as informa��es, dispostas conforme o exemplo abaixo. No exemplo o valor da hora � 5 e a quantidade de hora � 220.

    Sal�rio Bruto: (5 * 220)        : R$ 1100,00
    (-) IR (5%)                     : R$   55,00
    (-) INSS ( 10%)                 : R$  110,00
    FGTS (11%)                      : R$  121,00
    Total de descontos              : R$  165,00
    Sal�rio Liquido                 : R$  935,00



    */
    float ir;
    float inss;
    float fgts;
    int horas;
    int dias;
    int salario;
    float descontos;
    cout << "Digite abaixo quantas horas Voce trabalha: " << endl;
    cin >> horas;
    cout << "Digite quantos dias Voce trabalha: " << endl;
    cin >> dias;
    salario = horas*dias;
    cout << salario << "R$";

    if(salario <=900 || salario <=1500){
        ir = salario*0.05;
        cout << "\nIR (5%) " << ir << "R$";
        inss = salario*0.10;
        cout << "\nINSS(10%) " <<  inss<< "R$";
        fgts = salario*0.11;
        cout << "\nFGTS(11%) " << fgts << "R$";
        descontos = salario-ir-inss;
        cout << "\nTotal de Descontos: " << salario-descontos<< "R$";
        cout << "\nSal�rio Liquido: " <<  descontos<< "R$";

    }
    else if(salario <=2500){
        ir = salario*0.10;
        cout << "\nIR (10%) " << ir << "R$";
        inss = salario*0.10;
        cout << "\nINSS(10%) " <<  inss<< "R$";
        fgts = salario*0.11;
        cout << "\nFGTS(11%) " << fgts << "R$";
        descontos = salario-ir-inss;
        cout << "\nTotal de Descontos: " << salario-descontos<< "R$";
        cout << "\nSal�rio Liquido: " <<  descontos<< "R$";
    }
    else if(salario >2500){
        ir = salario*0.20;
        cout << "\nIR (20%) " << ir << "R$";
        inss = salario*0.10;
        cout << "\nINSS(10%) " <<  inss<< "R$";
        fgts = salario*0.11;
        cout << "\nFGTS(11%) " << fgts << "R$";
        descontos = salario-ir-inss;
        cout << "\nTotal de Descontos: " << salario-descontos<< "R$";
        cout << "\nSal�rio Liquido: " <<  descontos<< "R$";
    }
    return 0;
}
