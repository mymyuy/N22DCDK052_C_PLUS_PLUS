// Chuong trinh tinh tien bao hiem
#include <iostream>
using namespace std;

int main()
{
    double priceOfTheBuilding, percentInsurance = 0.8;
    cout << "Nhap gia tri toa nha: "; cin >> priceOfTheBuilding;
    // tinh va ket qua ra man hinh
    cout << "So tien bao hiem: "<< priceOfTheBuilding*percentInsurance;
    return 0;
}