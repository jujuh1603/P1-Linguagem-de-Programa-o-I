#include <iostream>
#include <vector>
using namespace std;

struct Produto {
    string nome;
    int quantidade;
    float preco;
};

int main() {

    vector<Produto> produtos;
    int opcao;

    while (true) {

        cout << "\n====== SORVETERIA GELADA ======\n";
        cout << "1 - Adicionar novo produto\n";
        cout << "2 - Listar produtos em estoque\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {

            Produto p;

            cout << "Nome do produto: ";
            cin >> p.nome;

            do {
                cout << "Quantidade: ";
                cin >> p.quantidade;

                if (p.quantidade < 0) {
                    cout << "Quantidade nao pode ser negativa. Tente novamente.\n";
                }

            } while (p.quantidade < 0);

            cout << "Preco: R$ ";
            cin >> p.preco;

            produtos.push_back(p);

            cout << "Produto cadastrado com sucesso!\n";
        }

        else if (opcao == 2) {

            if (produtos.size() == 0) {
                cout << "Nenhum produto cadastrado.\n";
            }
            else {

                cout << "\n--- Produtos em Estoque ---\n";

                for (int i = 0; i < produtos.size(); i++) {

                    cout << "Nome: " << produtos[i].nome << endl;
                    cout << "Quantidade: " << produtos[i].quantidade << endl;
                    cout << "Preco: R$ " << produtos[i].preco << endl;
                    cout << "--------------------------\n";
                }
            }
        }

        else if (opcao == 3) {
            cout << "Encerrando o sistema...\n";
            break;
        }

        else {
            cout << "Opcao invalida. Tente novamente.\n";
        }
    }

    return 0;
}