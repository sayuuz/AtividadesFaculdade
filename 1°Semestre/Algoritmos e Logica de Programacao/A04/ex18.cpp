#include <iostream>
using namespace std;

int main(){
	int idade, count, maiorIdade, menorIdade, mulherSalario, idadeSalario;
	string sexo, sexoMenorSalario;
	double salario, total, menorSalario;
	bool inputting;
	
	count = 0;
	inputting = true;
	menorIdade = 5000000;
	maiorIdade  = 0;
	total = 0;
	menorSalario = 50000000;
	mulherSalario = 0;
	idadeSalario = 0;
	
	while(inputting){
		cout << "Insira a idade" << endl;
		cin >> idade;
		if(idade > 0){
			count++;
			cout << "Qual o sexo? use M/F" << endl;
			cin >> sexo;
			cout << "Qual o salario?" << endl;
			cin >> salario;
			
			total += salario;
			
			if(idade > maiorIdade){
				maiorIdade = idade;
			}
			if (idade < menorIdade){
				menorIdade = idade;
			}
			
			if(sexo == "F" || sexo == "f"){
				if(salario > 200){
					mulherSalario++;
				}
			}
			
			if(salario < menorSalario){
				idadeSalario = idade;
				sexoMenorSalario = sexo;
				menorSalario = salario;
			}
			
		} else {
			inputting = false;
		}
	}
	
	cout << "------------------------------\n";
	cout << "Media salarial dos grupos: " << total/(double)count << endl;
	cout << "Maior idade do grupo: " << maiorIdade << endl;
	cout << "Menor idade do grupo: " << menorIdade << endl;
	cout << "Quantidade de mulheres com o salario ate 200 reais: " << mulherSalario << endl;
	cout << "Idade da pessoa com o menor salario: " << idadeSalario << endl;
	cout << "Sexo da pessoa com o menor salario: " << sexoMenorSalario << endl;
	cout << "Menor salario: " << menorSalario << " reais" << endl;
	
	return 0;
}
