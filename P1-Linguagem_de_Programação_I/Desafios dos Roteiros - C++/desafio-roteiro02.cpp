#include <iostream>
using namespace std;

int main() {

    string nome;
    double preco;
    int qtd;

    cout << "Digite o nome do produto: ";
    getline(cin, nome);

    cout << "Digite o preco do produto: ";
    cin >> preco;

    cout << "Digite a quantidade em estoque: ";
    cin >> qtd;

    if (qtd < 0) {
        cout << "Erro: A quantidade nao pode ser um valor negativo. Por favor, tente novamente." << endl;
    } else {
        cout << "\nProduto cadastrado com sucesso!" << endl;
        cout << "Resumo do produto:" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Preco: R$ " << preco << endl;
        cout << "Quantidade em estoque: " << qtd << endl;
    }

    return 0;
}