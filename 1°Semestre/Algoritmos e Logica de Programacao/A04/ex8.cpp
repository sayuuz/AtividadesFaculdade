#include <iostream>
using namespace std;

int main(){
	int idade, con1, somaCon2, countCon2, countCon3, countCon4;
	double peso, altura;
	string olho, cabelo;
	
	for(int i = 0; i < 6; i++){
		cout << "Qual a idade? " << endl;
		cin >> idade;
		cout << "Qual o peso?" << endl;
		cin >> peso;
		cout << "Qual a altura?" << endl;
		cin >> altura;
		cout << "Qual a cor do olho? A = azul; P = preto; V = verde; e C = castanho" << endl;
		cin >> olho;
		cout << "Qual a cor do cabelo? P = preto; C = castanho; L = louro; e R = ruivo" << endl;
		cin >> cabelo;
		
		if(idade > 50 && peso < 60){
			con1++;
		}
		if(altura < 1.5){
			somaCon2 += idade;
			countCon2++;
		}
		if(olho == "A" || olho == "a"){
			countCon3++;
		}
		if(cabelo == "R" && olho != "A"){
			countCon4++;
		}
	}

	cout << "------------------------------\n";
	cout << "Pessoas com idade maior que 50 e peso menor que 60: " << con1 << endl;
	if(countCon2 != 0){
		cout << "Media das idades das pessoas com altura menor que 1,5m: " << somaCon2/(double)countCon2 << endl;
	} else {
		cout << "Media das idades das pessoas com altura menor que 1,5m: 0" << endl;
	}
	cout << "Porcentagem das pessoas com olhos azuis: " << countCon3/6 << endl;
	cout << "Quantidade das pessoas ruivas que nao possuem olhos azuis: " << countCon4;
	
	return 0;
}
