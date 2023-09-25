// tinh so luong pizza can mua
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int soNguoi, dk;
    double dt_1_lat_pizza = 14.125, pi = 3.14;
    // nhap thong tin
    cout << "Co bao nguoi trong bua tiec: "; cin >> soNguoi;
    cout << "Ban muon dat pizza co duong kinh bao nhieu: "; cin >> dk;
    // tinh va in ra ket qua
    double dt_pizza_mn_an = soNguoi*4*dt_1_lat_pizza;
    cout << "So luong pizza can dat: " << dt_pizza_mn_an/(pi*pow(dk,2));
    return 0;
}