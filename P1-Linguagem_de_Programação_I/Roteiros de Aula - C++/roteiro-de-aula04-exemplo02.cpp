#include <iostream>
#include <vector>

int main() {
    std::vector<int> matrizA(15);
    std::vector<int> matrizB(15);

    std::cout << "--- Preenchendo a Matriz A ---" << std::endl;
    for (int i = 0; i < 15; i++) {
        while (true) {
            std::cout << "Digite o " << i + 1 << "o elemento para a matriz A: ";
            if (std::cin >> matrizA[i]) {
                break;
            } else {
                std::cout << "Entrada invalida. Por favor, digite um numero inteiro." << std::endl;
                std::cin.clear();
                std::cin.ignore(10000, '\n');
            }
        }
    }

    for (int i = 0; i < 15; i++) {
        matrizB[i] = matrizA[i] * matrizA[i];
    }
    std::cout << "\n--- Matriz A ---" << std::endl;
    for (int elemento : matrizA) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    std::cout << "\n--- Matriz B (Quadrados da Matriz A) ---" << std::endl;
    for (int elemento : matrizB) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    return 0;
}