#include <iostream>
using namespace std;

int main(){

    int numeroSecreto = 7;
    int tentativa = 0;

    while(tentativa != numeroSecreto){

        cout << "Adivinhe o numero: ";
        cin >> tentativa;

        if(tentativa > numeroSecreto){
            cout << "Tente um numero menor!" << endl;
        }
        else if(tentativa < numeroSecreto){
            cout << "Tente um numero maior!" << endl;
        }
    }

    cout << "Parabens! Voce acertou!" << endl;

    return 0;
}