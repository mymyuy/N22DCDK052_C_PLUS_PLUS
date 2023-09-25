#include <iostream>
using namespace std;

int main()
{
    // khoi tao bien prev_money de luu so tien cong ngay hom truoc
    // khoi tao bien sum de tinh tong so tien nhan duoc
    int ngayLamViec, prev_money = 1, sum = 0;
    do
    {
        cout << "Nhap so ngay lam viec: "; cin >> ngayLamViec;
        if(ngayLamViec < 1)
            cout << "So ngay lam phai lon hon 0" << endl;
    } while (ngayLamViec < 1);
    
    cout << "Day\t\t\t\tWage" << endl;
    for (int i = 1; i <= ngayLamViec; i++)
    {
        cout << i << "\t\t\t\t" << "$" << prev_money << endl;
        sum += prev_money; // tinh tong so tien cong nhan duoc
        prev_money = prev_money*2; // tinh tien cong cho ngay hom sau
    }
    cout << "Tong cong tien cong nhan duoc: $" << sum; 
    return 0;
}