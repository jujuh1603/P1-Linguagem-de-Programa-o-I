#include <iostream>
using namespace std;

int main(){

    int A[15], B[15];

    for(int i = 0; i < 15; i++){
        cout << "Digite um numero: ";
        cin >> A[i];
    }

    for(int i = 0; i < 15; i++){
        B[i] = A[i] * A[i];
    }

    cout << "Matriz A:" << endl;

    for(int i = 0; i < 15; i++){
        cout << A[i] << endl;
    }

    cout << "Matriz B:" << endl;

    for(int i = 0; i < 15; i++){
        cout << B[i] << endl;
    }

    return 0;
}