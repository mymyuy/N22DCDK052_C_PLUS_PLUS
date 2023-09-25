#include <iostream>
using namespace std;

int main()
{
    int period[10][12];
    int nam;
    cout << "Chuong trinh tinh luong mua trung binh\nNhap vao so nam: ";
    do
    {
        cin >> nam;
        if(nam < 1) cout << "So nam khong hop le! Moi nhap lai: ";
    } while (nam < 1);
    
    double sum = 0;
    for(int i = 0; i < nam; i++)
    {
        cout << "Nam thu " << i+1 << endl;
        for(int j = 0; j < 12; j++)
        {
            cout << "Nhap vao luong mua thang " << j+1 << " : ";
            cin >> period[i][j];
            sum += period[i][j];
        }
    }
    cout << "So thang: " << nam*12 << "\nLuong mua trung binh 1 thang: " << sum/(nam*12);
    return 0;
}