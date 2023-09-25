// chuong trinh tinh so lat pizza co the cat duoc
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double pi=3.14;
    double dt_1_lat_pizza = 14.125;
    double duongKinh;
    //nhap thong tin
    cout << "Moi nhap duong kinh pizza: "; cin >> duongKinh;
    // tinh va in ra ket qua
    cout << "So lat pizza co the cat duoc: " << (pow(duongKinh/2,2)*pi)/dt_1_lat_pizza;
    return 0;
}