#include <iostream>

using namespace std;

int main(){
    /*
        Fa�a um Programa que verifique se uma letra digitada � "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inv�lido.
    */
    char x;
    int y = 1;

    while(y == 1){
        cout << "Digite seu genero: Conforme a letra escrever: F - Feminino, M - Masculino" << endl;
        cin >> x;
        if(x == 'm' || x =='M'){
        cout << "M = MASCULINO" << endl;
    }
        else if(x == 'f' || x ==  'F'){
        cout << "F = FEMININO" << endl;
        }
        else{
        cout << "Sexo Invalido";
        }
    cout << "Deseja continuar?: 0 = nao, 1 = sim" <<  endl;
    cin >> y;
    }



    return 0;
}
