#include <iostream>
using namespace std;

double kineticEnergy(double v, double m)
{
    return 0.5*v*m;
}
int main()
{
    double m, v;
    cout << "Nhap khoi luong cua vat(kg): "; cin >> m;
    cout << "Nhap van toc cua vat(m/s): "; cin >> v;
    cout << "Dong nang cua vat la: " << kineticEnergy(v, m) << endl;
    return 0;
}