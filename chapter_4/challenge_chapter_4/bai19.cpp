#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double waveLength;
    cout << "Nhap do dai cua buc xa: "; cin >> waveLength;
    if(waveLength > pow(10,-2)) cout << "Radio waves";
    else if(waveLength > pow(10,-3)) cout << "Microwaves";
    else if(waveLength > 7*pow(10,-7)) cout << "infraed";
    else if(waveLength > 4*pow(10,-7))  cout << "Visible light";
    else if(waveLength > pow(10,-8)) cout << "Ultraviolet";
    else if(waveLength > pow(10,-11)) cout << "X Rays";
    else cout << "Gamma Rays";
    return 0;
}