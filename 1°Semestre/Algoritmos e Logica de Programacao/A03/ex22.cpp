#include <iostream>
using namespace std;

int main(){
    int idade, gpRisco;
    double peso;

    cout << "Qual é a sua idade? ";
    cin >> idade;
    cout << "Qual é o seu peso? ";
    cin >> peso;

    if (peso <= 60){
        if (idade < 20){
            gpRisco = 9;
        } else if (idade >= 20 && idade <= 50){
            gpRisco = 6;
        } else {
            gpRisco = 3;
        }
    } else if (peso > 60 && peso <= 90){
        if (idade < 20){
            gpRisco = 8;
        } else if (idade >= 20 && idade <= 50){
            gpRisco = 5;
        } else {
            gpRisco = 2;
        }
    } else {
        if (idade < 20){
            gpRisco = 7;
        } else if (idade >= 20 && idade <= 50){
            gpRisco = 4;
        } else {
            gpRisco = 1;
        }
    }

    cout << "Seu grupo de risco é o n°" << gpRisco;

    return 0;
}