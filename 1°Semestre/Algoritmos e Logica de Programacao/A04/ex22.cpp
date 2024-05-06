#include <iostream>
using namespace std;

int main(){
	int idade, count;
	double altura, altura50;
	bool inputting;
	
	count = 0;
	inputting = true;
	altura50 = 0;
	
	while(inputting){
		cout << "Digite a idade." << endl;
		cout << "Use idade menor que 0 para parar de inserir" << endl;
		cin >> idade;
		
		if(idade <= 0){
			inputting = false;
			break;
		}
		
		cout << "Digite a altura." << endl;
		cin >> altura;
		if(idade > 50){
			count++;
			altura50 += altura;
		}
	}

	cout << "------------------------------\n";
	cout << "A media das alturas das pessoas com mais de 50 anos e: " << altura50/(double)count << endl;

	return 0;
}
