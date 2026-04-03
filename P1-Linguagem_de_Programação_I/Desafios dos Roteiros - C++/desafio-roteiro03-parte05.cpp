#include <iostream>
using namespace std;

int main(){

    string senhaCorreta = "senha123";
    string senha;

    while(senha != senhaCorreta){
        cout << "Digite a senha: ";
        cin >> senha;
    }

    cout << "Bem-vindo ao sistema!" << endl;

    return 0;
}