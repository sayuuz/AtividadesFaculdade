#include <iostream>
using namespace std;

int main(){
    int codOrigem;
    string procedencia;

    cout << "Qual é o código de origem? ";
    cin >> codOrigem;

    if (codOrigem == 1) {
        procedencia = "Sul";
    } else if (codOrigem == 2) {
        procedencia = "Norte";
    } else if (codOrigem == 3) {
        procedencia = "Leste";
    } else if (codOrigem == 4) {
        procedencia = "Oeste";
    } else if (codOrigem == 5 || codOrigem == 6){
        procedencia = "Nordeste";
    } else if (codOrigem >= 7 && codOrigem <= 9){
        procedencia = "Sudeste";
    } else if (codOrigem >= 10 && codOrigem <= 20){
        procedencia = "Centro-Oeste";
    } else if (codOrigem > 20 && codOrigem <= 30){
        procedencia = "Nordeste";
    } else {
        procedencia = "Não existe procedencia para esse código!";
    }

    cout << "A procedência do produto é de: " << procedencia;

    return 0;
}