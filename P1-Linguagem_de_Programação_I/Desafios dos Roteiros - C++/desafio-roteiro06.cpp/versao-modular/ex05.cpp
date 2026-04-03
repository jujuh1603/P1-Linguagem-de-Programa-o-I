#include <iostream>
using namespace std;

float celsius_para_fahrenheit(float c) {
    return (c * 9/5) + 32;
}

int main() {

    float celsius;

    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    cout << "Fahrenheit: " << celsius_para_fahrenheit(celsius);

    return 0;
}