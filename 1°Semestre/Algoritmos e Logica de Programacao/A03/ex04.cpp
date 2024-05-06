#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3, maior;

    cout << "Digite o primeiro valor: ";
    cin >> n1;
    cout << "Digite o segundo valor: ";
    cin >> n2;
    cout << "Digite o terceiro valor: ";
    cin >> n3;

    maior = n1;

    if (n2 > maior){
        maior = n2;
    }
    
    if (n3 > maior){
        maior = n3;
    }

    cout << "O maior número é: " << maior;

    return 0;
}