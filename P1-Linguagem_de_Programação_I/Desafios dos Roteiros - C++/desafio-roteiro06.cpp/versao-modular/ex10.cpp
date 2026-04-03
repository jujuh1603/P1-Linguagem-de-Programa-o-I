#include <iostream>
using namespace std;

void gerar_tabuada(int numero) {

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}

int main() {

    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    gerar_tabuada(numero);

    return 0;
}