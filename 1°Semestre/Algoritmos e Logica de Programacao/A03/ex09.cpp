#include <iostream>
using namespace std;

int main(){
    double saldoMedio, creditoEspecial;

    cout << "Qual foi seu saldo médio no ultimo ano? ";
    cin >> saldoMedio;

    if (saldoMedio <= 200){
        creditoEspecial = saldoMedio * 0.10;
    } else if (saldoMedio > 200 && saldoMedio <= 300){
        creditoEspecial = saldoMedio * 0.20;
    } else if (saldoMedio > 300 && saldoMedio <= 400){
        creditoEspecial = saldoMedio * 0.25;
    } else {
        creditoEspecial = saldoMedio * 0.30;
    }

    cout << "Saldo médio: " << saldoMedio << " \nCrédito especial: " << creditoEspecial;

    return 0;
}