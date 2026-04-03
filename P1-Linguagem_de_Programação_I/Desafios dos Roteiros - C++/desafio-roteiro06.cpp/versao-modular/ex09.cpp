#include <iostream>
using namespace std;

int contar_vogais(string texto) {

    int contador = 0;

    for (char c : texto) {

        c = tolower(c);

        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            contador++;
    }

    return contador;
}

int main() {

    string texto;

    cout << "Digite uma frase: ";
    getline(cin, texto);

    cout << "Numero de vogais: " << contar_vogais(texto);

    return 0;
}