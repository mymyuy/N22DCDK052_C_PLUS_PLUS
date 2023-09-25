// chuong trinh in bao cao doanh thu hang thang
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int thang;
    const double thueQuocGia = 0.02, thueThanhPho = 0.04;
    double doanhThu;
    //nhap thong tin
    cout << "Nhap thang: "; cin >> thang;
    cout << "Nhap doanh thu bao gom thue: "; cin >> doanhThu;
    // tinh va in ket qua ra man hinh
    cout << "Bao cao tai chinh thang " << thang << endl;
    cout << left << setw(20) << "Tong doanh thu:" << doanhThu << endl;
    cout << left << setw(20) << "Doanh thu ban hang:" << doanhThu - (doanhThu*(thueQuocGia+thueThanhPho)) << endl;
    cout << left << setw(20) << "Thue quoc gia: " << doanhThu*thueQuocGia << endl;
    cout << left << setw(20) << "Thue thanh pho: " << doanhThu*thueThanhPho << endl;
    cout << left << setw(20) << "Tong tien thue: " << doanhThu*(thueQuocGia+thueThanhPho);
    return 0;
}