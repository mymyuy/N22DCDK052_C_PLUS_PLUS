//chuong trinh tinh tien lai;
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int tienGoc, soNam; // neu 1 nam thu duoc lai
    double laiSuat;
    // nhap thong tin
    cout << "Moi nhap tien gui tiet kiem: "; cin >> tienGoc;
    cout << "Nhap so nam gui tiet kiem: "; cin >> soNam;
    cout << "Moi nhap lai suat(%): "; cin >> laiSuat;
    // tinh va in ra ket qua
    cout << "Tien tiet kiem sau " << soNam << " : " << tienGoc*pow(1+(laiSuat/(soNam)),soNam);
    return 0;
}