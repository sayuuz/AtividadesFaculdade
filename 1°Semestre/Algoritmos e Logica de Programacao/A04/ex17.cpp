#include <iostream>
using namespace std;

int main(){
	int canal1 = 0;
	int canal2 = 0;
	int canal3 = 0;
	int canal4 = 0;
	int totalPessoas = 0;
	int canal;
	int pessoas;
	bool inputting = true;
	
	while(inputting){
		cout << "Qual o canal assistido? insira 4, 5, 7 ou 12" << endl << "insira 0 para parar" << endl;
		cin >> canal;
		
		if(canal != 0){
			cout << "Qual a quantidade de pessoas assistindo?" << endl;
			cin >> pessoas;
		}
		
		switch (canal){
			case 4:
				canal1 += pessoas;
				break;
			case 5:
				canal2 += pessoas;
				break;
			case 7:
				canal3 += pessoas;
				break;
			case 12:
				canal4 += pessoas;
				break;
			case 0:
				inputting = false;
				break;
			default:
				cout << "Valor inserido invalido" << endl;
				return 0;
				break;
		}
	}
	
	totalPessoas = canal1 + canal2 + canal3 + canal4;
	
	cout << "------------------------------\n";
	cout << "Pessoas vendo o canal 1: " << 100*canal1/(double)totalPessoas << "%" << endl;
	cout << "Pessoas vendo o canal 2: " << 100*canal2/(double)totalPessoas << "%" << endl;
	cout << "Pessoas vendo o canal 3: " << 100*canal3/(double)totalPessoas << "%" << endl;
	cout << "Pessoas vendo o canal 4: " << 100*canal4/(double)totalPessoas << "%" << endl;

	return 0;
}
