#include <iostream>
using namespace std;

int main() {
    double ganho;
    double investimento;
    double roi;

    cout << "Digite o ganho obtido: ";
    cin >> ganho;

    cout << "Digite o valor investido: ";
    cin >> investimento;

    if (investimento == 0) {
        cout << "Erro: o investimento nao pode ser zero." << endl;
    } else {
        roi = (ganho - investimento) / investimento;
        cout << "ROI: " << roi << endl;
    }

    return 0;
}