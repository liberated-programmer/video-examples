#include <iostream>
using namespace std;

int main() {
    double tempF;
    cout << "Enter a temperature in degrees Fahrenheit: ";
    cin >> tempF;
    // °C = (°F - 32) * 5 / 9
    double tempC = (tempF - 32) * 5 / 9;
    cout << "The equivalent temperature in degrees Celsius is: " << tempC << endl;
    return 0;
}
