#include <iostream>
using namespace std;

int main(){

    double A[20], B[20], C[20];

    cout << "Digite 20 numeros para A:" << endl;

    for(int i = 0; i < 20; i++){
        cin >> A[i];
    }

    cout << "Digite 20 numeros para B:" << endl;

    for(int i = 0; i < 20; i++){
        cin >> B[i];
    }

    for(int i = 0; i < 20; i++){
        C[i] = A[i] - B[i];
    }

    cout << "Resultado da matriz C:" << endl;

    for(int i = 0; i < 20; i++){
        cout << C[i] << endl;
    }

    return 0;
}