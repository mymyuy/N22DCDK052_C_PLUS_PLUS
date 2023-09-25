#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the beginning balance and the number of checks written
    double balance, checks;

    // Prompt the user to enter the beginning balance
    cout << "Enter the beginning balance of your account: ";
    cin >> balance;

    // Check if the beginning balance is negative
    if (balance < 0) {
        // Display an error message if the beginning balance is negative
        cout << "Your account is overdrawn. Please enter a positive amount." << endl;
    }
    else {
        // Prompt the user to enter the number of checks written
        cout << "Enter the number of checks written: ";
        cin >> checks;

        // Check if the number of checks is negative
        if (checks < 0) {
        // Display an error message if the number of checks is negative
        cout << "Invalid input! The number of checks must be positive." << endl;
        }
        else {
        // Calculate and display the bank's service fees for the month
        double fees = (checks * 0.1) + (checks * 0.08) + (checks * 0.06) + (checks * 0.04) + (15);
        cout << "The bank's service fees for this month are $" << fees << "." << endl;
        }
    }

  return 0;
}
