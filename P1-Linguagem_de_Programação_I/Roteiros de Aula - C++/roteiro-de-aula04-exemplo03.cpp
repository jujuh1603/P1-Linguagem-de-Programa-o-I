#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> matrizA(10);

    std::cout << "--- Digite 10 nomes ---" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "Digite o " << i + 1 << "o nome: ";
        std::getline(std::cin, matrizA[i]);
    }

    std::cout << "\n--- Nomes Inseridos ---" << std::endl;
    for (const auto& nome : matrizA) {
        std::cout << nome << std::endl;
    }

    return 0;
}