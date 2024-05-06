#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n1, n2, resultado;
    int escolha;

    cout << "Digite o primeiro valor: ";
    cin >> n1;
    cout << "Digite o segundo valor: ";
    cin >> n2;
    cout << "Qual operação você deseja realizar? \n1-Primeiro número elevado ao segundo. \n2-Raiz quadrada de cada um dos números. \n3-Raiz cúbica de cada um dos números.";
    cin >> escolha;

    switch (escolha){
    case 1:
        resultado = pow(n1, n2);
        cout << "Resultado: " << resultado;
    break;
    case 2:
        cout << "Resultado: " << pow(n1, 2) << " e " << pow(n2, 2);
    break;
    case 3:
        cout << "Resultado: " << pow(n1, 3) << " e " << pow(n2, 3);
    break;
    }

    return 0;
}