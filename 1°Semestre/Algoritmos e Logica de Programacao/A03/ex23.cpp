#include <iostream>
using namespace std;

int main(){
    int codigo, quantidade;
    double precoTotal, precoUnidade;

    cout << "Qual é o código do produto? ";
    cin >> codigo;
    cout << "Qual foi a quantidade comprada? ";
    cin >> quantidade;

    if (codigo <= 10){
        precoUnidade = 10;
    } else if (codigo > 10 && codigo <= 20){
        precoUnidade = 15;
    } else if (codigo > 20 && codigo <= 30){
        precoUnidade = 20;
    } else {
        precoUnidade = 30;
    }

    cout << "\nO preço unidade desse produto é de R$" << precoUnidade;

    precoTotal = precoUnidade * quantidade;
    cout << "\nO preço total da nota ficou: R$" << precoTotal;

    if (precoTotal <= 250) {
        precoTotal -= precoTotal * 0.05;
        cout << "\nSeu produto ganhou 5% de desconto ficando R$" << precoTotal << " no final.";
    } else if (precoTotal > 250 && precoTotal <= 250){
        precoTotal -= precoTotal * 0.1;
        cout << "\nSeu produto ganhou 10% de desconto ficando R$" << precoTotal << " no final."; 
    } else {
        precoTotal -= precoTotal * 0.15;
        cout << "\nSeu produto ganhou 15% de desconto ficando R$" << precoTotal << " no final."; 
    }

    return 0;
}