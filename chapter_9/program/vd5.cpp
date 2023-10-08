// This program shows an array name  being dereferenced with the *
// operator.
#include <iostream>
using namespace std;

int main()
{
    short number[] = {10, 20, 30, 40, 50};

    cout << "The first element of the array is ";
    cout << *number << endl;
    return 0;
}