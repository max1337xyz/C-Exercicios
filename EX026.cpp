#include <iostream>
#include <vector>
using namespace std;

int main(){
    /*
        Faça um Programa que leia três números e mostre-os em ordem decrescente.
    */
     int c,v,n;
     cout << "Digite um numero: " << endl;
     cin >> c;
     cout << "Digite outro numeri: " << endl;
     cin >> v;
     cout << "Digite o outro numero" << endl;
     cin >> n;

    if(c>v && v>n){
        cout << c << endl;
        cout << v << endl;
        cout << n << endl;
    }
    else if(v>c && c>n){
        cout << v << endl;
        cout << c << endl;
        cout << n << endl;
    }
    else if(n>c && v<c){
        cout << n << endl;
        cout << c << endl;
        cout << v << endl;
    }
    else{
        cout << n << endl;
        cout << v << endl;
        cout << c << endl;
    }







    return 0;
}
