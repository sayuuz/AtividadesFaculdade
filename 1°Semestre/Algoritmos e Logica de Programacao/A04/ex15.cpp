#include <iostream>
using namespace std;

int main(){
	string sexo, resposta;
	int countCon1, countCon2, countCon3, countCon4, countHomem;
	
	countCon1 = 0;
	countCon2 = 0;
	countCon3 = 0;
	countCon4 = 0;
	countHomem = 0;
	
	for(int i = 0; i < 15; i++){
		cout << "Qual o seu sexo?" << endl << "use H/M" << endl;
		cin >> sexo;
		cout << "Voce gostou do filme?" << endl << "use S/N" << endl;
		cin >> resposta;
		
		if(resposta == "S" || resposta == "s"){
			countCon1++;
		}		
		if(resposta == "N" || resposta == "n"){
			countCon2++;
		}
		if((resposta == "S" || resposta == "s") & (sexo == "M" || sexo == "m")){
			countCon3++;
		}
		if(sexo == "H" || sexo == "h"){
			countHomem++;
			if(resposta == "N" || resposta == "n"){
				countCon4++;
			}
		}
	}

	cout << "------------------------------\n";
	cout << "Numero de pessoas que responderam sim: " << countCon1 << endl;
	cout << "Numero de pessoas que responderam nao: " << countCon2 << endl;
	cout << "Numero de mulheres que responderam sim: " << countCon3 << endl;
	if(countHomem == 0){
		cout << "Porcentagem dos homens que responderam nao: 0%" << endl;
	} else {
		cout << "Porcentagem dos homens que responderam nao: " << 100*countCon4/(double)countHomem << "%" << endl;
	}

	return 0;
}
