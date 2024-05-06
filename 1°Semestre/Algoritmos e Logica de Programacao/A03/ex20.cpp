#include <iostream>
using namespace std;

int main() {
    int idade;
    string categoria;

    cout << "Qual sua idade? ";
    cin >> idade;

    if (idade <= 5) {
        cout << "Não tem categoria para a sua idade!";
    } else if (idade > 5 && idade <= 7) {
        cout << "Sua categoria é: Infantil";
    } else if (idade > 7 && idade <= 10) {
        cout << "Sua categoria é: Juvenil";
    } else if (idade > 10 && idade <= 15 ) {
        cout << "Sua categoria é: Adolescente";
    } else if (idade > 15 && idade <= 30) {
        cout << "Sua categoria é: Adulto";
    } else {
        cout << "Sua categoria é: Sênior";
    }

    return 0;
}