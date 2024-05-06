#include <iostream>
using namespace std;

int main(){
    double hrsExtra, hrsFalta, minutos;

    cout << "Quantas horas extras você trabalhou? ";
    cin >> hrsExtra;
    cout << "Quantas horas você tem de falta? ";
    cin >> hrsFalta;

    minutos = (hrsExtra - (2/3 * hrsFalta)) * 60;   

    if (minutos < 600) {
        cout << "Sua bonificação foi de R$100.00";
    } else if (minutos >= 600 && minutos < 1200) {
        cout << "Sua bonificação foi de R$200.00";
    } else if (minutos >= 1200 && minutos < 1800){
        cout << "Sua bonificação foi de R$300.00";
    } else if (minutos >= 1800 && minutos < 2400) {
        cout << "Sua bonificação foi de R$400.00";
    } else {
        cout << "Sua bonificação foi de R$500.00";
    }
    
    return 0;
}
