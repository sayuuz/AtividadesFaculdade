#include <iostream>
using namespace std;

int main(){
	int num, countPrimo;
	bool prime;
	
	for(int i = 0; i < 10; i++){
		prime = true;
		cout << "Qual o numero?" << endl;
		cin >> num;
		
		for (int i = 2; i <= num / 2; ++i) {
        	if (num % i == 0) {
            	prime = false;;
        	}
    	}
    	
    	if(prime){
    		countPrimo++;
		}
	}

	return 0;
}
