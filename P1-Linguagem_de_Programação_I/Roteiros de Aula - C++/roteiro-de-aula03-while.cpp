#include <iostream>
using namespace std;

int main() {
    int estoque;

    do {
        cout << "Digite a quantidade (não pode ser negativa): ";
        cin >> estoque;
    } while (estoque < 0);

    cout << "Você digitou o número correto?";

    return 0;
}