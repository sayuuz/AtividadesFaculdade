#include <iostream>
using namespace std;

int main(){
    double salario, receber;

    cout << "Digite seu salário: ";
    cin >> salario;

    receber = salario;

    if (salario <= 300){
        receber += salario * 0.15;
    } else if (salario > 300 && salario <= 600){
        receber += salario * 0.10;
    } else if (salario > 600 && salario <= 900){
        receber += salario * 0.05;
    }

    cout << "Seu salário final vai ser de: R$" << receber;

    return 0;
}