#include <iostream>
using namespace std;

int main(){
    int idade;

    cout << "Qual é a sua idade? ";
    cin >> idade;

    if (idade < 18) {
        cout << "Maioridade não atingida.";
    } else {
        cout << "Maioridade atingida.";
    }
    
    return 0;
}