#include <iostream>
using namespace std;
// chuong trinh chinh
int main()
{
    double regularWages, // de luu gia tri cua luong co ban
    basePayRate = 18.25, // he so luong co ban
    regularHour = 40, // so gio lam viec
    overtimeWages, // de luu gia tri cua luong tang ca
    overtimePayRate = 27.78, // he so luong tang ca
    overtimeHour = 10, // so gio tang ca
    totalWages; // de luu tong muc luong

    // tinh luong co ban
    regularWages = basePayRate*regularHour;

    // tinh luong tang ca
    overtimeWages = overtimePayRate*overtimeHour;

    // tong muc luong 
    totalWages = regularWages + overtimeWages;

    cout << "Wages for this week are $" << totalWages << endl;
    return 0;
}