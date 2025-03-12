#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){

    /*
        Faça um Programa que verifique se uma letra digitada é vogal ou consoante.
    */
    char letra;
    vector<char>vogais = {'a','A','e','E','i','I','o','O','u','U'};
    vector<char>con = {'b','B','c','C','d','D','f','F','g','G','j','J','k','K','l','L','m','M','n','N','p','P','q','Q','s','S','t','T','v','V','w','W','x','X','z','Z'};
    cout << "Digite uma letra: ";
    cin >> letra;
    int i = 0;
    for(i = 0;i<vogais.size();i++){
        if(letra == vogais[i]){
            cout << "\nA letra foi: " << setw(2)<< setfill('*')  << letra   << "*"   << " Logo e igual a VOGAL!" << endl;
        }

    }
    for(i =0; i< con.size();i++){
        if(letra == con[i]){
            cout << "\nA letra foi: " << setw(2)<< setfill('*')  << letra   << "*"   << " Logo e igual a CONSOANTE!" << endl;
        }
    }

    return 0;
}
