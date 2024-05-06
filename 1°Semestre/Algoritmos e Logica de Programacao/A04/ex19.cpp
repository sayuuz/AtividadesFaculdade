#include <iostream>
using namespace std;

int main() {
    string tipo;
    double precoCompra, precoVenda, lucro, total = 0.0;
    int maior1000 = 0, menor200 = 0;
    bool inputting = true;

    while (inputting) {
        cout << "Digite o tipo da acao ou ''F'' para finalizar: " << endl;
        cin >> tipo;

        if (tipo == "F" || tipo == "f") {
            inputting = false;
        } else {
        	cout << "Digite o preco de compra: " << endl;
        	cin >> precoCompra;
        	cout << "Digite o preco de venda: " << endl;
        	cin >> precoVenda;

        	lucro = precoVenda - precoCompra;
        	cout << "Lucro da acao: R$ " << lucro << endl;

        	if (lucro > 1000.0) {
            	maior1000++;
        	} else if (lucro < 200.0) {
            	menor200++;
        	}
        	total += lucro;
		}
    }

    cout << "------------------------------\n";
    cout << "Quantidade de acoes com lucro maior que R$ 1.000,00: " << maior1000 << endl;
    cout << "Quantidade de acoes com lucro menor que R$ 200,00: " << menor200 << endl;
    cout << "Lucro total da empresa: R$ " << total << endl;

    return 0;
}
