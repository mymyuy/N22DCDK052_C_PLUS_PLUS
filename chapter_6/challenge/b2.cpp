#include <iostream>
using namespace std;

double getLength()
{
    double cd;
    cout << "Nhap chieu dai: "; cin >> cd;
    return cd;
}
double getWidth()
{
    double cr;
    cout << "Nhap chieu rong: "; cin >> cr;
    return cr;
}
double getArea(double cd, double cr)
{
    return cd*cr;
}
void displayData(double cd, double cr, double dt)
{
    cout << "Chieu dai cua hcn: " << cd << endl;
    cout << "Chieu rong cua hcn: " << cr << endl;
    cout << "Dien tich hcn: " << dt << endl;
}
int main()
{
    double cd = getLength();
    double cr = getWidth();
    double dt = getArea(cd, cr);
    displayData(cd, cr, dt);
    return 0;
}