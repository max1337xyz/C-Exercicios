#include <iostream>
#include <string>
using namespace std;

int main(){
    /*
        Faça um Programa que leia um número inteiro maior que 0 e menor que 1000 e imprima a quantidade de centenas, dezenas e unidades do mesmo.

        Observando os termos no plural a colocação do "e", da vírgula entre outros.

        Exemplo: 326 = 3 centenas, 2 dezenas e 6 unidades 12 = 1 dezena e 2 unidades

        Testar com: 326, 300, 100, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16


    */
    bool centena = false;
    int x;
    cin >> x;
    int aux = x;
    string y_tostr = to_string(x);
    string meiox  = y_tostr.substr(1,1);
    string ultimo =  y_tostr.substr(2,2);
    string primeiro = y_tostr.substr(0,0);

    if(x>=100){
    string meiox  = y_tostr.substr(1,1);
    string ultimo =  y_tostr.substr(2,2);
    string primeiro = y_tostr.substr(0,0);
    centena = true;
    }
    if(x>0 && x<1000 && centena == true){
            while(aux >=10){
                aux /=10;
            }
            cout << "\nCentenas: " << aux << " Dezenas: " << meiox << " Unidades: " << ultimo;

    }
    else if(x>0 && x<1000 && x<=100 && centena == false){
            while(aux >=10){
                aux /=10;
            }

        cout << "\nCentenas: " << 0 <<  " Dezenas: " << aux << " Unidades: " << meiox;
    }



    return 0;
}
