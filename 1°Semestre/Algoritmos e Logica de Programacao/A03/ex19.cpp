#include <iostream>
using namespace std;

int main(){
    double altura, peso;
    int sexo;

    cout << "Qual é seu sexo?\n 1- Mulher \n 2- Homem ";
    cin >> sexo;
    cout << "Qual é a sua altura? ";
    cin >> altura;

    switch (sexo){
    case 1:
        peso = (62.1 * altura) - 44.7;    
    break;
    case 2:
        peso = (72.7 * altura) - 58;
    break;
    }

    cout << "Seu peso ideal é de: " << peso;

    return 0;
}