#include <iostream>
using namespace std;

int main()
{
    double cd1 , cd2, cr1, cr2;
    // hcn = hinh chu nhat
    // nhap thong tin
    cout << "Nhap chieu dai va chieu rong cua hcn thu 1: "; cin >> cd1 >> cr1;
    cout << "Nhap chieu dai va chieu rong cua hcn thu 2: "; cin >> cd2 >> cr2;

    double ratio = (cd1*cr1)-(cd2*cr2); // tinh hieu giua 2 hcn

    if(ratio > 0) // neu hieu lon hon 0 thi hcn1 > hcn 2
        cout << "Dien hcn thu 1 lon hon";
    else if(ratio < 0) // neu hieu be hon 0 thi hcn2 > hcn1
        cout << "Dien hcn thu 2 lon hon";
    else // neu hieu = 0 -> 2 hcn co dt = nhau
        cout << "Hai hcn co dien tich bang nhau";
    return 0;
}