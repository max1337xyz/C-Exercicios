#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*
        Fa�a um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a m�dia alcan�ada por aluno e apresentar:
         A mensagem "Aprovado", se a m�dia alcan�ada for maior ou igual a sete; A
        mensagem "Reprovado", se a m�dia for menor do que sete; A mensagem "Aprovado com Distin��o", se a m�dia for igual a dez.
    */
    float x,y;
    cout << "Digite a primeiro nota do aluno: ";
    cin >> x;
    cout << "\nDigite a segunda nota do aluno: ";
    cin >> y;
    float media = (x+y)/2;


	
    if(media>= 7.0 && media <=9.0){
        cout.precision(3);
        cout << "A media foi :" << media << " Aluno esta APROVADO";

    }
    else if(media < 7.0){
        cout.precision(3);
        cout << "A media foi: " << media << " Aluno esta REPROVADO" << endl;
    }
    else{
        cout.precision(3);
        cout << "A media foi: " << media << " Aluno esta APROVADO COM DISTICAO" << endl;

    }


    return 0;
}
