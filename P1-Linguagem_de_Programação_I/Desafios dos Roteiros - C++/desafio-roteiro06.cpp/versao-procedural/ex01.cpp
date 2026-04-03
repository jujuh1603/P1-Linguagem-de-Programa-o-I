#include <iostream>
using namespace std;

int main() {

    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "O numero eh PAR";
    } else {
        cout << "O numero eh IMPAR";
    }

    return 0;
}