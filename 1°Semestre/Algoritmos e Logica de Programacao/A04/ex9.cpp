#include <iostream>
using namespace std;

int main(){
	int idade, countCon2, countCon3;;
	double peso, altura, mediaIdade;
	
	for (int i = 0; i < 10; i++){
		cout << "Qual a idade?" << endl;
		cin >> idade;
		cout << "Qual o peso?" << endl;
		cin >> peso;
		cout << "Qual a altura?" << endl;
		cin >> altura;
		
		mediaIdade += idade;
		if(peso > 90 && altura < 1.5){
			countCon2++;
		}
		if(idade > 10 && idade < 30 && altura > 1.9){
			countCon3++;
		}
	}

	cout << "------------------------------\n";
	cout << "Media das idades: " << mediaIdade/10 << endl;
	cout << "Quantidade de pessoas com peso maior que 90 e altura menor que 1,5m: " << countCon2 << endl;
	cout << "Porcentagem de pessoas com idade entre 10 e 30 anos e com altura maior que 1,9m" << countCon3 << endl;

	return 0;
}
