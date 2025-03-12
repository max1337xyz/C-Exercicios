#include <iostream>

using namespace std;

int main(){

    /*
        Faça um Programa que peça uma data no formato dd/mm/aaaa e determine se a mesma é uma data válida.

    */


    int day;
    int mes;
    int ano;
    cout << "Digite Sua data de nascimento: Formato dd/mm/aaaa: " << endl;
    cin >> day;
    cin >> mes;
    cin >> ano;


    if(day<=31 && mes<=12 && ano< 3000){
        cout << "Data Valida: " << day << "/"<< mes << "/" << ano ;
    }
    else
        cout << "Data invalida!";
    return 0;
}
