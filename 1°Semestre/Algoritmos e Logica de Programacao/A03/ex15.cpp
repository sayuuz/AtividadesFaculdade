#include <iostream>
using namespace std;

int main(){
    int tipo;
    double valor, investido;

    cout << "Qual tipo de investimento você deseja fazer? \n 1-Poupança \n 2-Fundos de Renda Fixa ";
    cin >> tipo;
    cout << "Qual o valor do investimento? ";
    cin >> valor;

    investido = valor;

    if (tipo == 1){
        investido += valor * 0.03;
        cout << "Seu rendimento após um mês vai ser de: R$" << investido; 
    } else {
        investido += valor * 0.04;
        cout << "Seu rendimento após um mês vai ser de: R$" << investido; 
    }

    return 0;
}