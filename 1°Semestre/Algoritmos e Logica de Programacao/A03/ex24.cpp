#include <iostream>
using namespace std;

int main() {
    double preco, precoAumento, imposto;
    string situacao;
    int categoria;

    cout << "Qual é o preço do produto? ";
    cin >> preco;
    cout << "\nCategorias: \n 1 - Limpeza. \n 2 - Alimentação. \n 3 - Vestuário. \n Em qual dessas categorias o produto se encaixa? ";
    cin >> categoria;
    cout << "\nSituações: \n R - Produtos que precisam de refrigeração. \n N - Produtos que não precisa de refrigeração. \n Qual é a situação do produto? ";
    cin >> situacao;

    precoAumento = preco;

    if (preco <= 25) {
        switch (categoria){
        case 1:
            precoAumento += preco * 0.05;
            cout << "\nO aumento do produto foi de 5% ficando R$" << precoAumento;
        break;
        case 2:
            precoAumento += preco * 0.08;
            cout << "\nO aumento do produto foi de 8% ficando R$" << precoAumento;
        break;
        case 3:
            precoAumento += preco * 0.10;
            cout << "\nO aumento do produto foi de 10% ficando R$" << precoAumento;
        break;
        }
    } else {
        switch (categoria){
        case 1:
            precoAumento += preco * 0.12;
            cout << "\nO aumento do produto foi de 12% ficando R$" << precoAumento;
        break;
        case 2:
            precoAumento += preco * 0.15;
            cout << "\nO aumento do produto foi de 15% ficando R$" << precoAumento;
        break;
        case 3:
            precoAumento += preco * 0.18;
            cout << "\nO aumento do produto foi de 18% ficando R$" << precoAumento;
        break;
        }
    }

    if (categoria == 2 || situacao == "R") {
        imposto = preco * 0.05;
        cout << "\nO produto tem um imposto de 5%";
    } else {
        imposto = preco * 0.08;
        cout << "\nO produto tem um imposto de 8%";
    }

    cout << "\nO valor do final do produto ficou: R$" << (precoAumento -= imposto);

    if(preco <= 50) {
        cout << "\nSeu produto é considerado um produto de preço barato.";
    } else if (preco >= 50 && preco < 120){
        cout << "\nSeu produto é considerado um produto de preço normal.";
    } else {
        cout << "\nSeu produto é considerado um produto de preço caro.";
    }

    return 0;
}