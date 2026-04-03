#include <iostream>
using namespace std;

int main() {

    int nota;

    cout << "Digite a nota: ";
    cin >> nota;

    if (nota >= 90)
        cout << "Categoria A";
    else if (nota >= 80)
        cout << "Categoria B";
    else if (nota >= 70)
        cout << "Categoria C";
    else if (nota >= 60)
        cout << "Categoria D";
    else
        cout << "Categoria E";

    return 0;
}