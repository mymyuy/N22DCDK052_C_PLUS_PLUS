#include <iostream>
using namespace std;

const double g = 9.8;

double fallingDistance(double time)
{
    return 0.5*g*time*time;
}
int main()
{
    for(int i = 0; i < 10; i++)
    {
        cout << "Khoang cach vat roi trong " << i+1 << "s: " << fallingDistance(i+1) << "m" << endl;  
    }
    return 0;
}