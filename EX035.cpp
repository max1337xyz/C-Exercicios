#include <iostream>

using namespace std;

int main(){

    /*
        Fa�a um Programa que pe�a uma data no formato dd/mm/aaaa e determine se a mesma � uma data v�lida.

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
