#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cout << "Digite os tres lados: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Triangulo Equilatero";
    else if (a == b || a == c || b == c)
        cout << "Triangulo Isosceles";
    else
        cout << "Triangulo Escaleno";

    return 0;
}