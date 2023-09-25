// chuong trinh tinh muc tieu hao nhien lieu cua xe
#include <iostream>
using namespace std;

int main()
{
    double gallonsGas, miles; // so gallons gas va quang duong di duoc
    // nhap thong tin
    cout << "Enter the number of gallons of gas: "; cin >> gallonsGas;
    cout << "Enter the number of miles: "; cin >> miles;
    // tinh va in ket qua
    cout << "The car's gas mileage: " << miles/gallonsGas << " miles/gallon gas";
    return 0;
}