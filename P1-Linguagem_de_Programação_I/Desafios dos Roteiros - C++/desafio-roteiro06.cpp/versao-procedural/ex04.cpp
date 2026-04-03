#include <iostream>
using namespace std;

int main() {

    string nome;
    int idade;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Bem-vindo(a) " << nome << "! Voce tem " << idade << " anos.";

    return 0;
}