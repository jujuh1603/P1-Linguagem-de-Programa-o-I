#include <iostream>
using namespace std;

bool validar_senha(string senha) {
    return senha.length() >= 8;
}

int main() {

    string senha;

    while (true) {

        cout << "Digite a senha: ";
        cin >> senha;

        if (validar_senha(senha)) {
            cout << "Senha valida!";
            break;
        } else {
            cout << "Senha invalida.\n";
        }
    }

    return 0;
}