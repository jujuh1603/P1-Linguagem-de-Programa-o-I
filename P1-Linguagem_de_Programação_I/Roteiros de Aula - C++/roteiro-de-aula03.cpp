#include <iostream>

int main() {
    std::cout << "\nAdvinhe o número com 'while' em C++!" << std::endl;
    int numero_secreto = 7;
    int numero_digitado = 0;

    while (numero_digitado != numero_secreto) {
        std::cout << "Digite um número: ";
        std::cin >> numero_digitado;
        if (numero_digitado != numero_secreto) {
            std::cout << "Número incorreto. Tente novamente." << std::endl;
        }
    }

    std::cout << "Parabéns! Você acertou!" << std::endl;
    return 0;
}