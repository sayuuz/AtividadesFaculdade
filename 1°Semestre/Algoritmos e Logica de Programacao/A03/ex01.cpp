#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3, n4, media;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;
    cout << "Digite a quarta nota: ";
    cin >> n4;

    media = (n1 + n2 + n3 + n4) / 4;

    if (media < 7){
        cout << "Média: " << media << ". Reprovado.";
    } else {
        cout << "Média: " << media << ". Aprovado";
    }

    return 0;
}