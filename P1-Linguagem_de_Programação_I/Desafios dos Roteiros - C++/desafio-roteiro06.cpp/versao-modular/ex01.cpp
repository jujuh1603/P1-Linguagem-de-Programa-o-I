#include <iostream>
using namespace std;

void verificar_paridade(int numero) {
    if (numero % 2 == 0) {
        cout << "O numero eh PAR";
    } else {
        cout << "O numero eh IMPAR";
    }
}

int main() {

    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    verificar_paridade(numero);

    return 0;
}