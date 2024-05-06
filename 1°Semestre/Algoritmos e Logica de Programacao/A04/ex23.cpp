#include <iostream>
using namespace std;

int main(){
	float salario, ferias;
	int decision, mesesTrabalhado;
	bool inputting, mesesInv;
	
	inputting = true;
	mesesInv = true;
	
	while(inputting){
		cout << "Escolha uma opcao:" << endl;
		cout << "Menu de opcoes" << endl;
		cout << "1. Novo salario" << endl;
		cout << "2. Ferias" << endl;
		cout << "3. Decimo terceiro" << endl;
		cout << "4. Sair" << endl;
		cin >> decision;
		
		switch (decision){
			case 1:
				cout << "Insira o salario" << endl;
				cin >> salario;
				switch ((int)salario){
					case 0 ... 210:
						salario *= 1.15;
						break;
					case 211 ... 600:
						salario *= 1.10;
						break;
					default:
						salario *= 1.05;
						break;
				}
				cout << "Novo salario: " << salario << endl;
				break;
			case 2:
				cout << "Insira o salario" << endl;
				cin >> salario;
				ferias = salario*4/3;
				cout << "Valor das ferias: " << ferias << endl;
				break;
			case 3:
				cout << "Insira o salario" << endl;
				cin >> salario;
				while(mesesInv){
					cout << "Insira o numero de meses trabalhados" << endl;
						cin >> mesesTrabalhado;
				
					if(mesesTrabalhado <= 12){
						cout << "Valor do decimo terceiro: " << salario*mesesTrabalhado/12 << endl;
						mesesInv = false;
					} else {
						cout << "Valor invalido de meses, insira um valor menor que 12" << endl;
					}
				}
				break;
			case 4:
				inputting = false;
				break;
			default:
				cout << "Valor invalido, insira um valor entre 1 e 4 incluso" << endl;
				break;
		}
	}

	return 0;
}
