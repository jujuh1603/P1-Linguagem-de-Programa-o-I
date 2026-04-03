#include <iostream>
using namespace std;

int main(){

    string nomes[3];
    int quantidades[3];

    for(int i = 0; i < 3; i++){

        cout << "Nome do produto: ";
        cin >> nomes[i];

        cout << "Quantidade: ";
        cin >> quantidades[i];
    }

    cout << "\nRelatorio Final:" << endl;

    for(int i = 0; i < 3; i++){

        if(quantidades[i] < 5){
            cout << "Produto: " << nomes[i]
                 << " | Estoque: " << quantidades[i]
                 << " unidades [REPOSICAO NECESSARIA]" << endl;
        } else {
            cout << "Produto: " << nomes[i]
                 << " | Estoque: " << quantidades[i]
                 << " unidades" << endl;
        }
    }

    return 0;
}