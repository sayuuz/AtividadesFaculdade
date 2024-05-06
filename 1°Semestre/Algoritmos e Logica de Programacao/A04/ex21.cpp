#include <iostream>
using namespace std;

int main(){
	int decisao = 0;
	int voto = 0;
	int voto1 = 0;
	int voto2 = 0;
	int voto3 = 0;
	int voto4 = 0;
	int nulo = 0;
	int branco = 0;
	int total = 0;
	bool inputting = true;
	
	while(inputting){
		cout << "Qual o codigo do voto?" << endl;
		cout << "Insira 1, 2, 3 ou 4 para os respectivos candidatos" << endl;
		cout << "Insira 5 para voto nulo e 6 para voto em branco" << endl;
		cout << "Insira 0 para terminar" << endl;
		cin >> decisao;
		
		if(decisao == 1 || decisao == 2 || decisao == 3 || decisao == 4 || decisao == 5 || decisao == 6){
			cout << "Qual a quantidade de votos?" << endl;
			cin >> voto;
		}
		
		switch(decisao){
			case 0:
				inputting = false;
				break;
			case 1:
				voto1 += voto;
				break;
			case 2:
				voto2 += voto;
				break;
			case 3:
				voto3 += voto;
				break;
			case 4:
				voto4 += voto;
				break;
			case 5:
				nulo += voto;
				break;
			case 6:
				branco += voto;
				break;
			default:
				cout << "Codigo invalido, tente novamente." << endl;
				break;
		}
	}
	
	total = voto1 + voto2 + voto3 + voto4 + nulo + branco;
	
	cout << "------------------------------\n";
	cout << "Total de votos do candidato 1: " << voto1 << endl;
	cout << "Total de votos do candidato 2: " << voto2 << endl;
	cout << "Total de votos do candidato 3: " << voto3 << endl;
	cout << "Total de votos do candidato 4: " << voto4 << endl;
	cout << "Total de votos nulos: " << nulo << endl;
	cout << "Total de votos em branco: " << branco << endl;
	cout << "Porcentagem de votos nulos: " << 100*nulo/(double)total << "%" << endl;
	cout << "Porcentagem de votos brancos: " << 100*branco/(double)total << "%" << endl;

	return 0;
}
