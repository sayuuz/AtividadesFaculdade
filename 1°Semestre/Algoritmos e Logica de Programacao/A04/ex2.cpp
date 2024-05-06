#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double preco;
	int vendidos, custo;;
	
	std::cout << std::fixed << std::setprecision(2);
	
	preco = 5.0;
	vendidos = 120;
	custo = 200;
	
	for(int i = 0; i <= 9; i++){
		cout << "################################################" << endl;
		cout << "# preco = " << preco << " # Vendidos: " << vendidos << " # lucro: " << preco*vendidos - custo << " #" << endl;
		
		
		preco = preco - 0.5;
		vendidos = vendidos + 26;
	}
	cout << "################################################" << endl;

	return 0;
}
