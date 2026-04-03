#include <iostream>
using namespace std;

int main() {

    cout << "Numeros de 1 a 10:" << endl;

    for(int i = 1; i <= 10; i++){
        cout << i << endl;
    }

    string nomes[5] = {"Ana", "Carlos", "Julia", "Pedro", "Marina"};

    cout << "\nLista de nomes:" << endl;

    for(int i = 0; i < 5; i++){
        cout << nomes[i] << endl;
    }

    return 0;
}