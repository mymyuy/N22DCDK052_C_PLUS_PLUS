#include <iostream>
using namespace std;

double Fahrenheit_to_Celsius(double f)
{
    return 5*(f-32)/9;
}
int main()
{
    for(int i = 0; i <= 20; i++)
    {
        cout << i << " do F = " << Fahrenheit_to_Celsius(i) << " do C" << endl;
    }
    return 0;
}