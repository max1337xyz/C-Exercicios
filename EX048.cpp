#include <iostream>

using namespace std;

int main(){
    /*
        Supondo que a popula��o de um pa�s A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% e que a popula��o de B seja 200000 habitantes com uma taxa de crescimento de 1.5%.

    Fa�a um programa que calcule e escreva o n�mero de anos necess�rios para que a popula��o do pa�s A ultrapasse ou iguale a popula��o do pa�s B, mantidas as taxas de crescimento.
    */
    float p = 80000;
    float b = 200000;
    int anos = 0;


    while(true){
        anos++;
        p  = p*(1+(3.0/100));
        b  = b*(1+(1.5/100));

        if(p>=b){
            cout << "Demorou Tantos Anos: " << anos;
            break;
        }
    }
    return 0;
}
