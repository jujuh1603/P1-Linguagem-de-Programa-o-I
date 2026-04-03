#include <iostream>
#include <iomanip>

int main(){
    int numero1 = 0, numero2 = 0, soma, subtracao, multiplicacao;
    float divisao;

    cout << "Digite o primeiro numero: "; sin >> numero1;
    cout << "Digite o segundo numero: "; cin >> numero2;

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2
    divisao = numero1 / numero2;

    cout << fixed << setprecision(2);
    cout << "Soma: " << soma << endl;
    cout << "Multiplicação: " << multiplicacao << endl;
    cout << "Divisao: " << divisao << endl;

    return 0;
}