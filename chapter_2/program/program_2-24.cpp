// This program extracts the rightmost digit of a number.

#include <iostream>
using namespace std;

int main()
{
    int number = 12345;

    int rightMost = number % 10; // chia lay phan du

    cout << "The rightmost digit in "

    << number << " is " << rightMost << endl;
    //output: The rightmost digit in 12345 is 5
    return 0;

}