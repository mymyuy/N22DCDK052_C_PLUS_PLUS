// chuong trinh gia su toan
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Nhap so thu 1: "; cin >> num1;
    cout << "Nhap so thu 2: "; cin >> num2; cin.ignore();
    cout << endl;
    cout << "  " << num1 << endl;
    cout << "+ " << num2;
    cout << "\n  -----" << endl;
    cin.ignore(1); // bo qua 1 lan nhap tu ban phim (an phim bat ki de hien ket qua)
    cout << "  " << num1+num2;
    return 0;
}