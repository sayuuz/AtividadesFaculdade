#include <iostream>
using namespace std;

int main(){
	double op1 = 0;
	double op2 = 0;
	double op3 = 0;
	double investimento;
	int decisao;
	bool inputting = true;
	
	while(inputting){
		cout << "Insira o tipo de operacao" << endl;
		cout << "1. Poupanca" << endl;
		cout << "2. Poupanca plus" << endl;
		cout << "3. Fundos de renda fixa" << endl;
		cout << "0. Sair" << endl;
		cin >> decisao;
		if(decisao == 1 || decisao == 2 || decisao == 3){
			cout << "Insira o valor do investimento" << endl;
			cin >> investimento;
		}
		
		switch(decisao){
			case 0:
				inputting = false;
				break;
			case 1:
				op1 += investimento;
				break;
			case 2:
				op2 += investimento;
				break;
			case 3:
				op3 += investimento;
				break;
			default:
				cout << "Valor invalido, tente novamente" << endl;
				break;
		}
	}

	cout << "------------------------------\n";
	cout << "Valor investido na poupanca: " << op1 << endl;
	cout << "Juros na poupanca: " << op1*0.015 << endl;
	
	cout << "Valor investido na poupanca plus: " << op2 << endl;
	cout << "Juros na poupanca plus: " << op2*0.02 << endl;
	
	cout << "Valor investido na poupanca: " << op1 << endl;
	cout << "Juros na poupanca: " << op3*0.04 << endl;
	
	cout << "Total investido: " << op1 + op2 + op3 << endl;
	cout << "Total de juros: " << op3*0.04 + op2*0.02 + op1*0.015 << endl;

	return 0;
}
