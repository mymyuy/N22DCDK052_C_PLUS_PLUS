// chi phi van hanh oto hang nam
#include <iostream>
using namespace std;

int main()
{
    double traGop, baoHiem, nhien_lieu, lopXe, baoTri, monthly_pay;
    // nhap thong tin
    cout << "Nhap tien tra gop oto hang thang: "; cin >> traGop;
    cout << "Nhap tien bao hiem oto hang thang: "; cin >> baoHiem;
    cout << "Nhap tien nhien lieu oto hang thang: "; cin >> nhien_lieu;
    cout << "Nhap tien lop xe oto hang thang: "; cin >>lopXe;
    cout << "Nhap tien bao tri oto hang thang: "; cin >> baoTri;

    monthly_pay = traGop+baoHiem+nhien_lieu+baoTri+lopXe;
    cout << "Chi phi hang thang: $" << monthly_pay << endl;
    cout << "Chi phi hang nam: $" << monthly_pay*12;
    return 0;
}