#include <iostream>

using namespace std;

int main(){

    /*
        Altere o programa anterior permitindo ao usu�rio informar as popula��es e as taxas de crescimento iniciais. Valide a entrada e permita repetir a opera��o.
    */


    float a;
    float b;
    float tax,tax2;
    cout << "Digite o valor de a e b";
    cin >> a>> b >> tax >> tax2;
    int anos;
    while(true){
        anos++;
        a *=1+(tax/100);
        b *=1 +(tax2/100);

        if(a>=b){
            cout << "Demorou tantos anos: " << anos;
            break;
        }

    }

    return 0;
}
