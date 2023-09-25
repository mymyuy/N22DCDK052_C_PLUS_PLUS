// chuong trinh tinh phan tram nam va nu trong lop
#include <iostream>
using namespace std;

int main()
{
    double nam, nu, siSo; // dung kieu du lieu double vi phep tinh se co thap phan
    cout << "Nhap so luong nam va nu cua lop: "; cin >> nam >> nu;
    siSo = nam + nu;
    // tinh va in ra phan tram nam va nu cua lop
    cout << "Phan tram nam: " << (nam/siSo)*100 << "%" << endl;
    cout << "Phan tram nu: " << (nu/siSo)*100 << "%" << endl;
    return 0;
}