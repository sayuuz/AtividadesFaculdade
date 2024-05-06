#include <iostream>
using namespace std;

int main(){
    string tipo;
    double valor, totalVista, totalPrazo, total, primeiraParcela;

    totalVista = 0;
    totalPrazo = 0;
    total = 0;

    for (int i = 0; i <= 15; i++){
        cout << "Digite o tipo de transação deseja fazer. \nV-A vista. \nP-A prazo. \n";
        cin >> tipo;

        cout << "\nDigite o valor da transação. \n";
        cin >> valor;
        
        if (tipo == "V" || tipo == "v"){
            totalVista += valor;
            total += valor;
        } else if (tipo == "P" || tipo == "p"){
            totalPrazo += valor;
            total += valor;
        }
    }
    primeiraParcela = totalPrazo / 3;

    cout << "------------------------------\n";
    cout << "Total de compras a vista: R$" << totalVista << endl;
    cout << "Total de compras a prazo: R$" << totalPrazo << endl;
    cout << "Total das compras: R$" << total << endl;       
    cout << "Valor da primeira parcela: R$" << primeiraParcela << endl;

    return 0;
}