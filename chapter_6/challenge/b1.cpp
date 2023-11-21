#include <iostream>
using namespace std;

double tinhGia(double gia, double tile)
{
    return gia + gia*(tile/100);
}
int main()
{
    double gia, tiLeTang;
    cout << "Nhap gia tri thuc cua mat hang: "; cin >> gia;
    cout << "Nhap ti le tang gia(%): "; cin >> tiLeTang;
    cout << "Gia ban cua mat hang: $" << tinhGia(gia, tiLeTang) << endl;
    return 0;
}