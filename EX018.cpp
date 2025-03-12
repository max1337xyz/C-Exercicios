#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    system("color 2");
    /*
        Faça um Programa que peça dois números e imprima o maior deles.


    */
    int x,y;
    cout << "Digite um numero: " << endl;
    cin >> x;
    cout << "\nDigite outro numero: " << endl;
    cin >> y;

    if(x>y){
        cout << "O maior numero foi: " << x;

    }else
        cout << "O maior numero foi: " << y;

    return 0;
}
