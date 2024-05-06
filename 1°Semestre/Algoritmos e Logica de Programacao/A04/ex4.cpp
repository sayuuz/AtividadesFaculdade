#include <iostream>
using namespace std;

int main(){
    int n, resultado;

    cout << "Digite o número da tabuada: ";
    cin >> n;

    for (int i = 0; i <= 10; i++) {
        resultado = n * i;
        cout << n << " x " << i << " = " << resultado << endl;
    }

    return 0;
}