#include <iostream>
#include <cmath>
using namespace std;

double presentValue(double f, double r, int n)
{
    return f/pow(1+r/100, n);
}
int main()
{
    double f, r;
    int n;
    cout << "Nhap so tien ban muon co trong tuong lai: "; cin >> f;
    cout << "Nhap lai suat: "; cin >> r;
    cout << "Nhap so nam ban muon tiet kiem: "; cin >> n;
    cout << "So tien ban can gui tiet kiem " << presentValue(f,r,n) << endl;
    return 0;
}