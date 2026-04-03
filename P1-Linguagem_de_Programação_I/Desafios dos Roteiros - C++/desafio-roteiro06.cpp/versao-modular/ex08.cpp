#include <iostream>
using namespace std;

string classificar_triangulo(int a, int b, int c) {

    if (a == b && b == c)
        return "Equilatero";
    else if (a == b || a == c || b == c)
        return "Isosceles";
    else
        return "Escaleno";
}

int main() {

    int a, b, c;

    cout << "Digite os tres lados: ";
    cin >> a >> b >> c;

    cout << classificar_triangulo(a, b, c);

    return 0;
}