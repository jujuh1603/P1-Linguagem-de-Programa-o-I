#include <iostream>
#include <vector>

int main() {
    std::vector<int> quadrado;

    for (int i = 15; i <= 200; i++) {
        int quadrado = i * i;
        quadrados.push_back(quadrado);
    }

    std::cout << "Quadrados dos numeros de 15 a 200:" << std::endl;
    for (int i = 0; i < quadrados.size(); i++) {
        std::cout << "O quadrado do número " << i + 15 << "é " << quadrados[i] << std::endl;
    }

    return 0;
}