#include <iostream>
using namespace std;

int main(){
    double preco, desconto;
    int codigo;

    cout << "Digite o valor do produto: ";
    cin >> preco;
    cout << "Digite o codigo do produto: ";
    cin >> codigo;

    desconto = preco;

    if (preco <= 30){
        cout << "Seu produto não vai receber desconto.";
    } else if (preco > 30 && preco <= 100){
        desconto -= preco * 0.10;
        cout << "Seu produto recebeu um desconto de 10% ficando: R$" << desconto;
    } else {
        desconto -= preco * 0.15;
        cout << "Seu produto recebeu um desconto de 15% ficando: R$" << desconto;
    }

    return 0;
}