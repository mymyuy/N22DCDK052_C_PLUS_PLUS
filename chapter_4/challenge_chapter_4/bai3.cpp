#include <iostream>
using namespace std;

int main()
{
    int d, m, y;
    cout << "Nhap vao ngay, thang va 2 so cuoi cua nam: "; cin >> d >> m >> y;
    if(d*m==y) cout << "Day la ma thuat";
    else cout << "Day khong phai ngay ma thuat";
    return 0;
}