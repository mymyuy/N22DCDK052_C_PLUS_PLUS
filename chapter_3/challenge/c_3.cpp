// chuong trinh tinh diem trung binh cua 5 bai kiem tra
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double testMark[5]; // dung mang de luu diem 5 bai kiem tra
    double sum =0; // khoi tao bien sum de luu diem tong cua 5 bai
    for(int i=0; i<5; i++) // dung vong lap for de nhap diem va tinh tong diem
    {
        cout << "Nhap diem bai kiem tra thu " << i+1 << " : ";
        cin >> testMark[i];
        sum += testMark[i];
    }
    // in ket qua ra man hinh
    cout << "Diem trung binh: " << setprecision(1) << fixed << sum/5;
    return 0;
}