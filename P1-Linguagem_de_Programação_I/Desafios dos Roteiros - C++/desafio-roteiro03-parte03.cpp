#include <iostream>
using namespace std;

int main() {

    double soma = 0;
    double nota;

    for(int i = 1; i <= 5; i++){
        cout << "Digite a nota " << i << ": ";
        cin >> nota;
        soma += nota;
    }

    double media = soma / 5;

    cout << "Media final: " << media << endl;

    return 0;
}