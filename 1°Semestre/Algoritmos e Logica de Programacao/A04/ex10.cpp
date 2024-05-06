#include <iostream>
using namespace std;

int main(){
	int num;
	double somaPar, somaPrimo;
	bool prime;
	
	somaPar = 0;
	somaPrimo = 0;
	
	for(int i = 0; i < 10; i++){
		prime = true;
		cout << "Qual o valor do numero?" << endl;
		cin >> num;
		
		if(num % 2 == 0){
			somaPar += num;
		}
		for (int i = 2; i <= num / 2; ++i) {
        	if (num % i == 0) {
            	prime = false;;
        	}
    	}
    	
    	if(prime){
    		somaPrimo += num;
		}
	}

	cout << "------------------------------\n";
	cout << "Soma dos numeros pares: " << somaPar << endl;
	cout << "Soma dos numeros primos: " << somaPrimo << endl;
	
	return 0;
}
