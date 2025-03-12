#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char>notas = {'A','B','C','D','E'};
    float nota1;
    float nota2;
    float media;
    cout << "Digite a primeira nota do aluno: ";
    cin >> nota1;
    cout << "\nDigite a segunda nota do aluno: ";
    cin>> nota2;
    media = (nota1+nota2)/2;
    cout.precision(3);


    if(media >=9.1 || media==10.0){
        cout << "Sua media Foi: " << media << " Logo Voce tem um " << notas[0];
        cout <<"\nVOCE ESTA APROVADO!!!";
    }
    else if(media >= 7.6 || media ==9.0 ){
       cout << "Sua media Foi: " << media << " Logo Voce tem um " << notas[1];
       cout << "\nVOCE FOI APROVADO!!!";
    }
    else if(media >= 6.1 || media == 7.5 ){
        cout << "Sua media Foi: " << media << " Logo Voce tem um " << notas[2];
        cout << "\nVOCE FOI APROVADO!!!";
    }
    else if(media >= 4.1 || media == 6.0){
        cout << "Sua media Foi: " << media << " Logo Voce tem um " << notas[3];
        cout << "\nVOCE FOI REPROVADO!!!";
    }
    else{
        cout << "Sua media Foi: " << media << " Logo Voce tem um " << notas[4];
        cout << "\nVOCE FOI REPROVADO!!!";
    }

    return 0;
}
