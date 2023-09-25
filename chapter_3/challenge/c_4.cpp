// chuong trinh tinh luong mua trung binh cua 3 thang
#include <iostream>
using namespace std;

int main()
{
    int month[3]; // mang de luu ten thang
    double amountOfRain[3], sum = 0; // mang de luu luong mua va bien sum de giu gia tri tong cong luong mua
    for(int i=0; i<3; i++) // chay vong lap for de nhap thong tin
    {
        cout << "Nhap luong ten thang va luong mua trung binh cua thang do: ";
        cin >> month[i] >> amountOfRain[i];
        sum += amountOfRain[i];
    }
    cout << "Luong mua trung binh cua thang " << month[0] << ", " << month[1] << " va " << month[2] << " la: " << sum/3 << " inch";
    return 0;
}