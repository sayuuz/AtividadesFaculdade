#include <iostream>
using namespace std;

int main(){
	int idade, idadeSoma, count;
	bool inputting;
	
	inputting = true;
	count = 0;
	
	while(inputting){
		count++;
		cout << "Qual a idade?" << endl;
		cin >> idade;
		if(idade == 0){
			inputting = false;
			count--;
		} else {
			idadeSoma += idade;
		}
	}
	
	cout << "------------------------------\n";
	cout << "Media das idades: " << idadeSoma/(double)count << endl;

	return 0;
}
