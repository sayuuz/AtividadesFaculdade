#include <iostream>
using namespace std;

int main(){
    double preco, distribuidor, imposto, vFinal;

    cout << "Qual é o valor do carro? ";
    cin >> preco;

    vFinal = preco;

    if (preco <= 12000){
        distribuidor = preco * 0.05;
        vFinal += distribuidor;
    } else if (preco > 12000 && preco <= 25000){
        distribuidor = preco * 0.10;
        imposto = preco * 0.15;
        vFinal += distribuidor + imposto;
    } else {
        distribuidor = preco * 0.15;
        imposto = preco * 0.20;
        vFinal += distribuidor + imposto;
    }

    cout << "Preço final do carro é de: R$" << vFinal;

    return 0;
}