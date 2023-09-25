// chuong trinh tinh thue tai san
#include <iostream>
using namespace std;

int main()
{
    double giaTriTaiSan;
    //nhap thong tin
    cout << "Nhap gia tri tai san: "; cin >> giaTriTaiSan;
    //tinh thue
    double assessedValue = giaTriTaiSan*0.6, propertytax = (assessedValue/100)*0.75;
    //in kq ra man hinh
    cout << "Gia tri danh gia tai san: " << assessedValue << endl;
    cout << "Thue tai san: " << propertytax << endl;
    return 0;
}