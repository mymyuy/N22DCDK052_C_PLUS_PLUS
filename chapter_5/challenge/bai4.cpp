#include <iostream>
using namespace std;

int main()
{
    // display table 
    cout << "Phut\t\t\t\tSo luong calories da dot" << endl;
    for(int i = 5 ; i <= 30; i+=5)
    {
        cout << i << "\t\t\t\t" << 3.6*i << endl;
    }
    return 0;
}