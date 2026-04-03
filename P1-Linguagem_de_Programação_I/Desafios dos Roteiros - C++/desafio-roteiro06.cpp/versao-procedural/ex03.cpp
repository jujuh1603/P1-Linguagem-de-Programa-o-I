#include <iostream>
using namespace std;

int main() {

    string senha;

    while (true) {

        cout << "Digite a senha: ";
        cin >> senha;

        if (senha.length() >= 8) {
            cout << "Senha valida!";
            break;
        } else {
            cout << "Senha invalida. Deve ter pelo menos 8 caracteres.\n";
        }
    }

    return 0;
}