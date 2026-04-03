#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<string> nomes;
    vector<int> quantidades;
    vector<double> precos;

    int opcao = 0;

    while(opcao != 3){

        cout << "\n1 - Adicionar produto" << endl;
        cout << "2 - Listar produtos" << endl;
        cout << "3 - Sair" << endl;

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if(opcao == 1){

            string nome;
            int qtd;
            double preco;

            cout << "Nome do produto: ";
            cin >> nome;

            cout << "Quantidade: ";
            cin >> qtd;

            if(qtd < 0){
                cout << "Erro: quantidade nao pode ser negativa." << endl;
                continue;
            }

            cout << "Preco: ";
            cin >> preco;

            nomes.push_back(nome);
            quantidades.push_back(qtd);
            precos.push_back(preco);

        }

        else if(opcao == 2){

            for(int i = 0; i < nomes.size(); i++){
                cout << "\nProduto: " << nomes[i] << endl;
                cout << "Quantidade: " << quantidades[i] << endl;
                cout << "Preco: " << precos[i] << endl;
            }

        }
    }

    cout << "Sistema encerrado." << endl;

    return 0;
}