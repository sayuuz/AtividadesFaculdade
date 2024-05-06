#include <iostream>
using namespace std;

int main(){
    int n, resultado;

    n = 1;

    while (n <= 10){
        for (int i = 0; i <= 10; i++){
            resultado = n * i;
            cout << n << " x " << i << " = " << resultado << endl;
        }
        
        cout << "-------------\n";
        n += 1;
    }

    return 0;
}