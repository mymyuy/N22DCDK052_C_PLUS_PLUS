#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // In tieu de cua bang
    cout << "Celsius   |   Fahrenheit\n";
    cout << "-----------------------\n";

    // Su dung vong lap de hien thi bang
    for (int c = 0; c <= 20; c++) {
        celsius = c;
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        cout << celsius << "         |   " << fahrenheit << endl;
    }

    return 0;
}
