#include <iostream>
using namespace std;

int main(){

    int A[8] = {2,4,6,8,10,12,14,16};
    int B[8];

    for(int i = 0; i < 8; i++){
        B[i] = A[i] * 3;
    }

    cout << "Matriz B:" << endl;

    for(int i = 0; i < 8; i++){
        cout << B[i] << endl;
    }

    return 0;
}