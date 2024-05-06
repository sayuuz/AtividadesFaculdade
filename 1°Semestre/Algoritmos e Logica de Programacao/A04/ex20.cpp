#include <iostream>
using namespace std;

int main(){
	int decisao;
	double num1, num2, num3, peso1, peso2, peso3;
	bool inputting;
	
	inputting = true;
	
	while(inputting){
		cout << "Escolha a opcao" << endl;
		cout << "Menu de opcoes:" << endl;
		cout << "1. Media aritmetica" << endl;
		cout << "2. Media ponderada" << endl;
		cout << "3. Sair" << endl;
		cin >> decisao;
		
		switch (decisao){
			case 1:
				cout << "Insira a primeira nota" << endl;
				cin >> num1;
				cout << "Insira a segunda nota" << endl;
				cin >> num2;
				cout << "Media aritmetica: " << (num1 + num2)/(double)2 << endl;
				break;
			case 2:
				cout << "Insira a primeira nota" << endl;
				cin >> num1;
				cout << "Insira a segunda nota" << endl;
				cin >> num2;
				cout << "Insira a terceira nota" << endl;
				cin >> num3;
				cout << "Insira o primeiro peso" << endl;
				cin >> peso1;
				cout << "Insira o segundo peso" << endl;
				cin >> peso2;
				cout << "Insira o terceiro peso" << endl;
				cin >> peso3;
				cout << "Media ponderada: " << (num1*peso1 + num2*peso2 + num3*peso3)/(double)(peso1 + peso2 + peso3) << endl;
				break;
			case 3:
				inputting = false;
				break;
			default:
				cout << "Opcao invalido, tente novamente." << endl;
				break;
		}
	}

	return 0;
}
