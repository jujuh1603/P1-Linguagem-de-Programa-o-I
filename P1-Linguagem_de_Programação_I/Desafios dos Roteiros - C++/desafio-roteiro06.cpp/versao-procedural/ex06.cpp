#include <iostream>
using namespace std;

int main() {

    float valor, desconto, valorFinal;

    cout << "Digite o valor do produto: ";
    cin >> valor;

    cout << "Digite o desconto (%): ";
    cin >> desconto;

    valorFinal = valor - (valor * desconto / 100);

    cout << "Valor final: " << valorFinal;

    return 0;
}