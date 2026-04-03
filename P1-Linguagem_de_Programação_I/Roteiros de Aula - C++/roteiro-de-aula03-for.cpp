#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main( {
    vector<string> nomes = {"Ana", "Bruno", "Carla"};
    cout << "\nIterando sobre um vetor em C++: " << endl;
    for (const string& nome : nomes){
        cout << nome << endl;
    }
    return 0;
})