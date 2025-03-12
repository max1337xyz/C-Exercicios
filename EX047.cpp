#include <iostream>
#include <vector>
#include <cstring>
using namespace std;


int main(){
    setlocale(LC_ALL,"Portuguese");
    /*
    
    Faça um programa que leia e valide as seguintes informações: Nome: maior que 3 caracteres; Idade
    : entre 0 e 150; Salário: maior que zero; Sexo: 'f' ou 'm'; Estado Civil: 's', 'c', 'v', 'd';
    */
   string name;
   char sexo,civil;
   int idade;
   float salario;

   while(true){
        cout <<"\n\nDigite seu nome: ";
        cin >> name;

        cout <<"\n\nDigite sua idade: ";
        cin >> idade;
        cout <<"\n\nDigite seu salario: ";
        cin >> salario;
        cout << "\n\nDigite seu sexo: ";
        cin >> sexo;
        cout <<"\nDigite seu estado civil: ";
        cin >> civil;
        if(name.size()>3){
            if(idade >0 && idade <=150){
                if(salario > 0){
                    if(sexo == 'f' || sexo == 'm'){
                        if(civil == 's' || 'c' || 'v' || 'd'){
                            cout <<"\n\n**************************SUAS INFORMAÇÕES**************";
                             cout << "\n\nSeu nome: " << name;
                             cout << "\nSua idade: " << idade;
                            cout << "\nSeu salario: "  << salario << "R$";
                            cout << "\nSeu Sexo: " << sexo;
                            cout << "\nSeu estado civil: " << civil;                                
                        }
                    }
                }
            }
        }
   }

    return 0;
}