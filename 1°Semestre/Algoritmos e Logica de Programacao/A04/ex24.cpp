#include <iostream>
using namespace std;

int main(){
	int num1, maior, maior;
	bool inputting;
	
	inputting = true;
	maior = -1000;
	maior = 50000000;
	
	while(inputting){
		cout << "Insira o valor" << endl;
		cout << "O valor deve ser positivo" << endl;
		cout << "Insira ''0'' para parar de calcular" << endl;
		cin >> num1;
		cout << endl;
		
		if(num1 < 0){
			cout << "Valor invalido, insira um valor maior que 0." << endl;
		} else if(num1 == 0){
			inputting = false;
		} else {
			if(num1 < maior){
				maior = num1;
			}
			if(num1 > maior){
				maior = num1;
			}
		}
	}
	
	cout << "------------------------------\n";
	cout << "Maior numero: " << maior << endl;
	cout << "Menor numero: " << maior << endl;

	return 0;
}
