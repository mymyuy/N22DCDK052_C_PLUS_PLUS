#include <iostream>
using namespace std;

int main()
{
    int sachDaMua;
    cout << "Nhap vao so sach ban da mua trong thang: "; cin >> sachDaMua;
    if(sachDaMua > 4)
        cout << "Diem thuong: 60";
    else if(sachDaMua == 3)
        cout << "Diem thuong: 30";
    else if(sachDaMua == 2)
        cout << "Diem thuong: 15";
    else if(sachDaMua == 1)
        cout << "Diem thuong: 5";
    else 
        cout << "Diem thuong: 0";
    return 0;
}