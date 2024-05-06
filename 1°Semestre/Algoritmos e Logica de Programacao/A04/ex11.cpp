#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    float precoCarro, precoFinal, valorParcela;
    int parcelas;
    char pagamento;

    precoFinal = 0;
    valorParcela = 0;
    
    cout << "Digite o preco do carro: ";
    cin >> precoCarro;
    cout << "Digite a forma de pagamento \nV-A vista \nP-A prazo. ";
    cin >> pagamento;

    if (pagamento == 'p' || pagamento == 'P') {
        cout << "|Quantidade de Parcelas|Percentual de Acrescimo|" << endl;
        cout << "|          6           |           3%          |" << endl;
        cout << "|         12           |           6%          |" << endl;
        cout << "|         18           |           9%          |" << endl;
        cout << "|         24           |           12%         |" << endl;
        cout << "|         30           |           15%         |" << endl;
        cout << "|         36           |           18%         |" << endl;
        cout << "|         42           |           21%         |" << endl;
        cout << "|         48           |           24%         |" << endl;
        cout << "|         54           |           27%         |" << endl;
        cout << "|         60           |           30%         |" << endl;
        cout << "Digite a quantidade de parcelas desejada: ";
        cin >> parcelas;

        if (parcelas == 6) {
            precoFinal = precoCarro + (precoCarro * 0.03);
        } else if (parcelas == 12) {
            precoFinal = precoCarro + (precoCarro * 0.06);
        } else if (parcelas == 18) {
            precoFinal = precoCarro + (precoCarro * 0.09);
        } else if (parcelas == 24) {
            precoFinal = precoCarro + (precoCarro * 0.12);
        } else if (parcelas == 30) {
            precoFinal = precoCarro + (precoCarro * 0.15);
        } else if (parcelas == 36) {
            precoFinal = precoCarro + (precoCarro * 0.18);
        } else if (parcelas == 42) {
            precoFinal = precoCarro + (precoCarro * 0.21);
        } else if (parcelas == 48) {
            precoFinal = precoCarro + (precoCarro * 0.24);
        } else if (parcelas == 54) {
            precoFinal = precoCarro + (precoCarro * 0.27);
        } else if (parcelas == 60) {
            precoFinal = precoCarro + (precoCarro * 0.3);
            
        } else {
            cout << "Quantidade de parcelas invalida!" << endl;
            return 1; 
        }
        valorParcela = precoFinal / parcelas;
        
    } else if (pagamento == 'v' || pagamento == 'V') {
        precoFinal = precoCarro - (precoCarro * 0.20);
        
    } else {
        cout << "Forma de pagamento invalida!" << endl;
        return 1; 
    }

    cout << "------------------------------\n";
    cout << "Preco original do carro: " << precoCarro << endl;
    cout << "Quantidade de parcelas: " << parcelas << endl;
    cout << "Valor da parcela: " << valorParcela << endl;
    cout << "Preco final: " << precoFinal << endl;

    return 0;
}
