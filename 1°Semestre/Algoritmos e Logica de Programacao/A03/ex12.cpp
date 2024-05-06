#include <iostream>
using namespace std;

int main(){
    double salario, receber, imposto;

    cout << "Digite seu salário: ";
    cin >> salario;

    imposto = salario * 0.07;
    receber = salario;

    if (salario <= 350){
        receber += 100 - imposto;
    } else if (salario > 350 && salario <= 600){
        receber += 75 - imposto;
    } else if (salario > 600 && salario <= 900){
        receber += 50 - imposto;
    } else {
        receber += 35 - imposto;
    }

    cout << "Seu salário final vai ser de: R$" << receber;

    return 0;
}