#include <iostream>
using namespace std;

int main(){
	int idade, countCon1, countCon2, countCon3, countCon4;
	double peso;
	
	countCon1 = 0;
	countCon2 = 0;
	countCon3 = 0;
	countCon4 = 0;
	
	for (int i = 0; i < 3; i++){
		cout << "Qual a idade?" << endl;
		cin >> idade;
		cout << "Qual o peso?" << endl;
		cin >> peso;
		
		switch (idade){
			case 1 ... 10:
				countCon1++;
				break;
			case 11 ... 20:
				countCon2++;
				break;
			case 21 ... 30:
				countCon3++;
				break;
			default:
				countCon4++;
				break;
		}
	}

	cout << "------------------------------\n";
	cout << "Pessoas com idade entre 1 e 10 anos: " << countCon1 << endl;
	cout << "Pessoas com idade entre 11 e 20 anos: " << countCon2 << endl;
	cout << "Pessoas com idade entre 21 e 30 anos: " << countCon3 << endl;
	cout << "Pessoas com idade maior que 31 anos: " << countCon4 << endl;

	return 0;
}
