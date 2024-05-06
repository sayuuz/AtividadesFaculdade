#include <iostream>
using namespace std;

int main(){
    int idade, mais50, media, cont, menos40;
    double peso, altura, mediaAltura, i, porcentagem;

    mais50 = 0;
    media = 0;
    cont = 0;
    menos40 = 0;

    for(i = 0; i <= 5 ; i++){
        cout << "Qual a sua idade? \n";
        cin >> idade;
        cout << "Qual é o seu peso? \n";
        cin >> peso;
        cout << "Qual é a sua altura? \n";
        cin >> altura;

        if (idade > 50){
            mais50++;
        } else if (idade >= 10 && idade <= 20){
            media += altura;
            cont++;
        } else if (peso < 40){
            menos40++;
        }
    }

    mediaAltura = media / cont; 
    porcentagem = (menos40 * 100) / i;

    cout << "------------------------------\n";
    cout << "Quantidade de pessoas com +50 anos: " << mais50 << endl;
    cout << "Media da altura de pessoas entre 10 e 20 anos: " << mediaAltura << endl;
    cout << "Media da altura de pessoas entre 10 e 20 anos: " << mediaAltura << endl;
    cout << "Porcentagem de pessoas com peso inferior a 40: " << mediaAltura << "%" << endl;

    return 0;
}