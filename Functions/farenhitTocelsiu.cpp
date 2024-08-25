#include <iostream>
using namespace std;

void convertAndCheckTemperature(double fahrenheit) {

    double celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Temperature in Celsius: " << celsius << "°C" << endl;

    if (celsius <= 0) {
        cout << "The temperature is freezing." << endl;
    } 
    if (celsius >= 100) {
        cout << "The temperature is boiling." << endl;
    }
}

int main() {
    double fahrenheit;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    convertAndCheckTemperature(fahrenheit);

    return 0;
}
