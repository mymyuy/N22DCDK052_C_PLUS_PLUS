#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the number of pennies, nickels, dimes, and quarters
    int pennies, nickels, dimes, quarters;

    // Prompt the user to enter the number of coins required
    cout << "Enter the number of pennies: ";
    cin >> pennies;
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << "Enter the number of quarters: ";
    cin >> quarters;

    // Calculate the total value of the coins entered
    int total = pennies * 25 + nickels * 10 + dimes * 5 + quarters * 1;

    // Check if the total value is equal to one dollar
    if (total == 100) {
        // Congratulate the user for winning the game
        cout << "You win! You have exactly one dollar." << endl;
    }
    else {
        // Display a message indicating whether the amount entered was more or less than one dollar
        if (total > 100) {
        cout << "You lose! You entered more than one dollar." << endl;
        }
        else {
        cout << "You lose! You entered less than one dollar." << endl;
        }
    }
  return 0;
}