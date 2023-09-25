// chuong trinh tinh tien tra khoan vay
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double soTienVay, laiSuat, soLanThanhToan, tienCanTra;
    //nhap thong tin
    cout << "Moi nhap so tien vay: "; cin >> soTienVay;
    cout << "Nhap lai suat: "; cin >> laiSuat;
    cout << "Nhap so lan thanh toan: "; cin >> soLanThanhToan;
    //tinh va in ket qua
    tienCanTra = ((laiSuat*pow(1+laiSuat,soLanThanhToan))/(pow(1+laiSuat,soLanThanhToan)-1))*soTienVay;
    cout << "So tien can phai thanh toan la: " << tienCanTra;
    return 0;
}