#include <iostream>
#include <cctype>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    /*
        O Hipermercado Tabajara est� com uma promo��o de carnes que � imperd�vel. Confira:

                  At� 5 Kg           Acima de 5 Kg
File Duplo R$ 4,90 por Kg R$ 5,80 por Kg Alcatra R$ 5,90 por Kg R$ 6,80 por Kg Picanha R$ 6,90 por Kg R$ 7,80 por Kg

Para atender a todos os clientes, cada cliente poder� levar apenas um dos tipos de carne da promo��o, por�m n�o h� limites para a quantidade de carne por cliente.

Se compra for feita no cart�o Tabajara o cliente receber� ainda um desconto de 5% sobre o total da compra.

Escreva um programa que pe�a o tipo e a quantidade de carne comprada pelo usu�rio e gere um cupom fiscal, contendo as informa��es da compra: tipo de carne quantidade de carne pre�o total tipo de pagamento valor do desconto valor a pagar.

Estruturas de repeti��o

    */



    char tipo;
    char cart;
    float descont;
    float kg;
    float w = 5.80,x  = 6.80,y = 7.80;
    cout << left <<cout.width(20) << left << cout.fill('*') << "Bem vindo a loja" << right << cout.width(20) << right << cout.fill('*');
    cout << "\nDigite o tipo de carne que dejeja: [f]File Duplo R$5.80 [a] Alcatra R$5.90 [p]Picanha R$7.80  " << endl;
    cin >> tipo;
    if(tipo == 'f' || tipo == 'F'){
            cout << "Digite quantos KG Voce deseja: " << endl;
            cin >> kg;
            w = w*kg;
            cout << "Deseja Comprar no cartao da loja? [s]Sim,[n]NAO: " << endl;
            cin >> cart;
            if(cart == 's' || cart == 'S'){
                descont = w*(5.0)/100;
                cout << "Emitindo Culpon fiscal................." << endl;
                cout << "Tipo de Carne: File Duplo " << "Quantiade em KG: " << kg << " - " << "Pre�o Com Descont de 5% Por usar o cart�o: " << w-descont <<"R$";
            }
            else if (cart == 'n' || cart== 'N'){
                cout << "Emitindo Culpon fiscal................." << endl;
                cout << "Tipo de Carne: File Duplo " << "Quantiade em KG: " << kg << " - " << "Pre�o Final: " << w <<"R$";
            }

    }
    else if(tipo == 'a' || tipo == 'A'){
        cout << "Digite quantos KG Voce deseja: " << endl;
        cin >> kg;
        x = x*kg;
        cout << "Deseja Comprar no cartao da loja? [s]Sim,[n]NAO: " << endl;
        cin >> cart;
        if(cart == 's' || cart == 'S'){
            descont = x*(5.0)/100;
            cout << "Emitindo Culpon fiscal................." << endl;
            cout << "Tipo de Carne: Alcaltra " << "Quantiade em KG: " << kg << " - " << "Pre�o Com Descont de 5% Por usar o cart�o: " << x-descont <<"R$";
        }
        else if (cart == 'n' || cart== 'N'){
            cout << "Emitindo Culpon fiscal................." << endl;
            cout << "Tipo de Carne:  Alcaltra  " << "Quantiade em KG: " << kg << " - " << "Pre�o Final: " << x <<"R$";
        }
    }
    else if(tipo == 'p' || tipo == 'p'){
        cout << "Digite quantos KG Voce deseja: " << endl;
        cin >> kg;
        y = y*kg;
        cout << "Deseja Comprar no cartao da loja? [s]Sim,[n]NAO: " << endl;
        cin >> cart;
        if(cart == 's' || cart == 'S'){
            descont = y*(5.0)/100;
            cout << "Emitindo Culpon fiscal................." << endl;
            cout << "Tipo de Carne: Picanha " << "Quantiade em KG: " << kg << " - " << "Pre�o Com Descont de 5% Por usar o cart�o: " << y-descont <<"R$";
        }
        else if (cart == 'n' || cart== 'N'){
            cout << "Emitindo Culpon fiscal................." << endl;
            cout << "Tipo de Carne:  Picanha  " << "Quantiade em KG: " << kg << " - " << "Pre�o Final: " << y-descont <<"R$";
        }






    }


    return 0;
}
