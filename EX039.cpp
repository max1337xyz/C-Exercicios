#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <time.h>
using namespace std;

int main(){

    /*
        Fa�a um Programa que pe�a um n�mero e informe se o n�mero � inteiro ou decimal. Dica: utilize uma fun��o de arredondamento.
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


