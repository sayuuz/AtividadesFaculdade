#include <iostream>
using namespace std;

int main(){
    double preco, nPreco;
    string classificacao;

    cout << "Digite o preço do produto: ";
    cin >> preco;

    nPreco = preco;

    if (preco <= 50) {
        nPreco += preco * 0.05;
    } else if (preco > 50 && preco <= 100){
        nPreco += preco * 0.10;
    } else {
        nPreco += preco * 0.15;
    }

    if (nPreco <= 80) {
        classificacao = "barato";
    } else if (nPreco > 80 && preco <= 120){
        classificacao = "normal";
    } else if (nPreco < 120 && preco <= 200){
        classificacao = "caro";
    } else {
        classificacao = "muito caro";
    }
    
    cout << "O valor final do seu produto é de: R$" << nPreco << " e é considerado um produto " << classificacao;

    return 0;
}