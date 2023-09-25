#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Declare variables to store the two random numbers
    int num1, num2;

    // Generate two random numbers between 1 and 100
    srand(time(NULL));
    num1 = rand() % 101;
    num2 = rand() % 101;

    // Display the two random numbers
    cout << "Enter the sum of\n " << num1 << "\n+" << num2 << "\n-----\n";
    int answer;

    // Prompt the student to enter the answer
    cin >> answer;

    // Check if the answer is correct
    if (answer == num1 + num2) {
        // Congratulate the student for answering correctly
        cout << "You got it! The correct answer is " << num1 + num2 << "." << endl;
    }
    else {
        // Display a message showing the correct answer
        cout << "You are wrong! The correct answer is " << num1 + num2 << "." << endl;
    }

  return 0;
}