#include <iostream>
using namespace std;

int main() {

    string texto;
    int contador = 0;

    cout << "Digite uma palavra ou frase: ";
    getline(cin, texto);

    for (char c : texto) {

        c = tolower(c);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            contador++;
    }

    cout << "Numero de vogais: " << contador;

    return 0;
}