#include <iostream>

using namespace std;

int main(){
    int pessoas_faixa_1 = 0, pessoas_faixa_2 = 0, pessoas_faixa_3 = 0, pessoas_faixa_4 = 0, pessoas_faixa_5 = 0;
	int idade;
	
	for(int i = 0; i < 5; i++){
		cout << "Qual a idade?" << endl;
		cin >> idade;
		
		switch (idade){
			case 0 ... 15:
				pessoas_faixa_1++;
				break;
			case 16 ... 30:
				pessoas_faixa_2++;
				break;
			case 31 ... 45:
				pessoas_faixa_3++;
				break;
			case 46 ... 60:
				pessoas_faixa_4++;
				break;
			default:
				pessoas_faixa_5++;
				break;
		}
	}

	cout << "------------------------------\n";
	cout << "Pessoas na primeira faixa: " << pessoas_faixa_1 << endl;
	cout << "Pessoas na segunda faixa: " << pessoas_faixa_2 << endl;
	cout << "Pessoas na terceira faixa: " << pessoas_faixa_3 << endl;
	cout << "Pessoas na quarta faixa: " << pessoas_faixa_4 << endl;
	cout << "Pessoas na quinta faixa: " << pessoas_faixa_5 << endl;
	cout << "Porcentagem de pessoas na primeira faixa: " << (double)pessoas_faixa_1/5 << endl;
	cout << "Porcentagem de pessoas na ultima faixa: " << (double)pessoas_faixa_5/5 << endl;
	return 0;
}
