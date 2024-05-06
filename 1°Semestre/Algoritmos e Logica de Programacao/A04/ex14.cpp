#include <iostream>
using namespace std;

int main(){
	int idade, opiniao;
	int somaIdadeCon1, countCon1, countCon2, countCon3;
	
	somaIdadeCon1 = 0;
	countCon1 = 0;
	countCon2 = 0;
	countCon3 = 0;
	
	for(int i = 0; i < 15; i++){
		cout << "Qual a sua idade?" << endl;
		cin >> idade;
		cout << "Qual a sua opiniao do filme?" << endl << "otimo - 3, bom - 2, regular - 1" << endl;
		cin >> opiniao;
		
		if(opiniao == 3){
			somaIdadeCon1 += idade;
			countCon1++;
		}
		if(opiniao == 1){
			countCon2++;
		}
		if(opiniao == 2){
			countCon3++;
		}
	}
	
	if(countCon1 == 0){
		cout << "Media das idades das pessoas que responderam otimo: 0, ninguem respondeu otimo" << endl;
	} else {
		cout << "Media das idades das pessoas que responderam otimo: " << somaIdadeCon1/(double)countCon1 << endl;
	}

	cout << "------------------------------\n";
	cout << "Quantidade de pessoas que responderam regular: " << countCon2 << endl;
	cout << "Porcentagem de pessoas que responderam bom: " << countCon3/(double)15.0 << "%" << endl;

	return 0;
}
