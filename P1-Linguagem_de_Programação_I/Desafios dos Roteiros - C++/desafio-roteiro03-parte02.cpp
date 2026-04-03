#include <iostream>
using namespace std;

int main() {

    int numero = 0;

    while(numero <= 10){
        cout << "Digite um numero: ";
        cin >> numero;
    }

    cout << "Obrigado! Voce digitou um numero maior que 10." << endl;

    return 0;
}