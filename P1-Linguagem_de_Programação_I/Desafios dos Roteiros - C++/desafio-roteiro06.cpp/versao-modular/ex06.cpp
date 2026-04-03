#include <iostream>
using namespace std;

float aplicar_desconto(float valor, float desconto) {
    return valor - (valor * desconto / 100);
}

int main() {

    float valor, desconto;

    cout << "Digite o valor do produto: ";
    cin >> valor;

    cout << "Digite o desconto (%): ";
    cin >> desconto;

    cout << "Valor final: " << aplicar_desconto(valor, desconto);

    return 0;
}