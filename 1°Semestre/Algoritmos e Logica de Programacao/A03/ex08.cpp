#include <iostream>
using namespace std;

int main(){
    double salario, salarioR;

    cout << "Qual é o seu salário? ";
    cin >> salario;

    salarioR = salario;

    if (salario <= 300){
        salarioR += salario * 0.35;
    } else {
        salarioR += salario * 0.15;
    }

    cout << "Seu salário reajustado é: R$" << salarioR;

    return 0;
}