#include <iostream>

using namespace std;

int main(){
    /*
        Fa�a um Programa que leia tr�s n�meros e mostre o maior e o menor deles.
    */
    int x,y,z;
    cout << "Digite um n�mero: "  << endl;
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
