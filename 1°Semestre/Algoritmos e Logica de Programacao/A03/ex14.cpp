#include <iostream>
using namespace std;

int main(){
    double salario, aumento;

    cout << "Qual é o seu salário atual? ";
    cin >> salario;

    aumento = salario;

    if (salario <= 300){
        aumento += salario * 0.50;
        cout << "Você teve um aumento de 50% no salário ficando no final: R$" << aumento;
    } else if (salario > 300 && salario <= 500){
        aumento += salario * 0.40;
        cout << "Você teve um aumento de 40% no salário ficando no final: R$" << aumento;
    } else if (salario > 500 && salario <= 700){
        aumento += salario * 0.30;
        cout << "Você teve um aumento de 30% no salário ficando no final: R$" << aumento;
    } else if (salario > 700 && salario <= 800){
        aumento += salario * 0.20;
        cout << "Você teve um aumento de 20% no salário ficando no final: R$" << aumento;
    } else if (salario > 800 && salario <= 1000){
        aumento += salario * 0.10;
        cout << "Você teve um aumento de 10% no salário ficando no final: R$" << aumento;
    } else {
        aumento += salario * 0.05;
        cout << "Você teve um aumento de 5% no salário ficando no final: R$" << aumento;
    }

    return 0;
}