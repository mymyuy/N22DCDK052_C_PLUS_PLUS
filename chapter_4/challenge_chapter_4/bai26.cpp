#include <iostream>
using namespace std;

int main() {
    char package;
    double total_amount_due = 0;
    int minutes_used;

    cout << "Select your package (A, B, or C): ";
    cin >> package;

    // Validate the package selection
    if (package != 'A' && package != 'B' && package != 'C') {
        cout << "Invalid package selection. Please choose A, B, or C." << endl;
        return 1;
    }

    cout << "Enter the number of minutes used: ";
    cin >> minutes_used;

    // Calculate the total amount due based on the selected package
    switch (package) {
        case 'A':{
            total_amount_due = 39.99;
            if (minutes_used > 450) {
                total_amount_due += (minutes_used - 450) * 0.45;
            }

            // Calculate potential savings for Package A customers
            double savingsB = 59.99 - total_amount_due;
            double savingsC = 69.99 - total_amount_due;

            // Display savings if any
            if (savingsB > 0) {
                cout << "You could save $" << savingsB << " with Package B." << endl;
            }
            if (savingsC > 0) {
                cout << "You could save $" << savingsC << " with Package C." << endl;
            }
            break;}
        case 'B':{
            total_amount_due = 59.99;
            if (minutes_used > 900) {
                total_amount_due += (minutes_used - 900) * 0.40;
            }

            // Calculate potential savings for Package B customers
            double savingsC = 69.99 - total_amount_due;

            // Display savings if any
            if (savingsC > 0) {
                cout << "You could save $" << savingsC << " with Package C." << endl;
            }
            break;}
        case 'C':{
            total_amount_due = 69.99;
            break;}
    }

    // Display the total amount due
    cout << "Total amount due: $" << total_amount_due << endl;

    return 0;
}
