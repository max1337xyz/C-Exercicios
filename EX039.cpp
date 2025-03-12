#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
using namespace std;

int main(){

    /*
        Faça um Programa que peça um número e informe se o número é inteiro ou decimal. Dica: utilize uma função de arredondamento.
    */
    float x;
    cin >> x;

    if(x-(int)x==0){
        cout <<"Inteiro";
    }
    else
        cout <<"Decimal";
     return 0;
}


