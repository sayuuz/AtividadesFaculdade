#include <iostream>
using namespace std;

int main(){
    int n1, n2, media;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    media = (n1 + n2) / 2;

    if (media <= 3){
        cout << "Média: " << media << ". Reprovado.";
    } else if (media > 3 && media <= 7) {
        cout << "Média: " << media << ". Exame.";
    } else {
        cout << "Média: " << media << ". Aprovado";
    }

    return 0;
}