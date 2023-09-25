#include <iostream>
using namespace std;

int main()
{
    // display table
    cout << "Year\t\t\t\tThe ocean's level" << endl;
    for(int i = 0; i < 25; i++)
    {
        cout << 2023 + i << "\t\t\t\t" << 1.5 * (i + 1) << endl;
    }
    return 0;
}