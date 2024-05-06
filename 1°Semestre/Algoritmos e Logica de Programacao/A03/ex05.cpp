#include <iostream>
using namespace std;

int main(){
    double n1, n2;
    int escolha;

    cout << "Digite o primeiro valor: ";
    cin >> n1;
    cout << "Digite o segundo valor: ";
    cin >> n2;
    cout << "Qual operação você deseja realizar? \n1-Média dos números digitados. \n2-Diferença do maior para o menor. \n3-Produto dos números. \n4-Divisão do primeiro para o segundo. ";
    cin >> escolha;

    switch(escolha) {
        case 1:
            cout << "A média é: " << (n1 + n1) / 2;
        break;
        case 2:
            if(n1 > n2){
                cout << "A diferença é: " << n1 - n2;
            } else {  
                cout << "A diferença é: " << n2 - n1;
            }
        break;
        case 3:
            cout << "O produto é: " << n1 * n2;
        break;
        case 4:
            if(n1 != 0) {
                cout << "A divisão é: " << n1 / n2;
            } else {
                cout << "Não é possível dividir por zero.";
            }
        break;
    }

    return 0;
}