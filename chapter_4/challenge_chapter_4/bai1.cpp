#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cout << "Enter two number: "; cin >> a >> b;
    if(a > b)
        cout << "The minimum is " << b << " and the maximum  is " << a;
    else
        cout << "The minimum is " << a << " and the maximum  is " << b;
    return 0;
}