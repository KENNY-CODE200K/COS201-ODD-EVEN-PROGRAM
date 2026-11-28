#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double celsius, fahrenheit;
    cout << "Enter temperature in celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    cout << "Teperature in Fahrenheit: "
        << std :: fixed << std :: setprecision(2) << fahrenheit;

        return 0;
}

