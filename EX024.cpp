#include <iostream>

using namespace std;

int main(){
    /*
        Faça um Programa que leia três números e mostre o maior e o menor deles.
    */
    int x,y,z;
    cout << "Digite um número: "  << endl;
    cin >> x;
    cout << "Digite outro numero: " << endl;
    cin >> y;
    cout << "Digite o ultimo numero: " << endl;
    cin >> z;

    if(x< y && x<z){
        cout << x;
    }

    else if(y< x && y<z){
        cout << y;
    }
    else{
        cout << z;
    }

    return 0;
}
