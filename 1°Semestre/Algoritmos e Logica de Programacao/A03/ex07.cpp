#include <iostream>
using namespace std;

int main(){
    double salario, salarioR;

    cout << "Qual é o seu salário? ";
    cin >> salario;

    salarioR = salario;

    if (salario <= 300){
        salarioR += salario * 0.30;
        cout << "Seu salário reajustado é de: R$" << salarioR;
    } else {
        cout << "Você não tem direito de receber o aumento.";
    }

    return 0;
}