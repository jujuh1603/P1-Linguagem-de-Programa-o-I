#include <iostream>
using namespace std;

float calcular_area_retangulo(float base, float altura) {
    return base * altura;
}

int main() {

    float base, altura;

    cout << "Digite a base: ";
    cin >> base;

    cout << "Digite a altura: ";
    cin >> altura;

    cout << "Area: " << calcular_area_retangulo(base, altura);

    return 0;
}