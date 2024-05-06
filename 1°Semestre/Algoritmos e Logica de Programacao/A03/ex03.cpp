#include <iostream>
using namespace std;

int main(){
    int n1, n2, menor;

    cout << "Digite o primeiro valor: ";
    cin >> n1;
    cout << "Digite o segundo valor: ";
    cin >> n2;

    menor = n1;

    if(n2 < menor){
        menor = n2;
    }

    cout << "O menor número é: " << menor;

    return 0;
}