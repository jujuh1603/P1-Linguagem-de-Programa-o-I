#include <iostream>
using namespace std;

void exibirCabecalho() {
    cout << "=================================" << endl;
    cout << "      SORVETERIA DO DENER" << endl;
    cout << "    Sistema de Controle de Estoque" << endl;
    cout << "=================================" << endl;
}

string verificarEstoqueCritico(int quantidade) {

    if (quantidade < 5) {
        return "[REPOSICAO NECESSARIA]";
    } else {
        return "";
    }
}

int main() {

    exibirCabecalho();

    string nomes[3];
    int quantidades[3];

    int i = 0;

    while (i < 3) {

        cout << "Digite o nome do insumo: ";
        cin >> nomes[i];

        cout << "Digite a quantidade: ";
        cin >> quantidades[i];

        i++;
    }

    cout << "\nRelatorio de Estoque:" << endl;

    i = 0;

    while (i < 3) {

        string aviso = verificarEstoqueCritico(quantidades[i]);

        cout << "Produto: " << nomes[i]
             << " | Estoque: " << quantidades[i]
             << " unidades " << aviso << endl;

        i++;
    }

    return 0;
}