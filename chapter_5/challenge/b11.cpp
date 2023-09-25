#include <iostream>
using namespace std;

int main() {
    int startingPopulation;
    double dailyIncreasePercentage;
    int numberOfDays;

    // Nhap so luong ban dau cua quan the va kiem tra dieu kien
    do {
        cout << "Nhap so luong ban dau cua quan the (it nhat 2): ";
        cin >> startingPopulation;
    } while (startingPopulation < 2);

    // Nhap ty le tang truong trung binh hang ngay va kiem tra dieu kien
    do {
        cout << "Nhap ty le tang truong hang ngay (phan tram, khong am): ";
        cin >> dailyIncreasePercentage;
    } while (dailyIncreasePercentage < 0);

    // Nhap so ngay va kiem tra dieu kien
    do {
        cout << "Nhap so ngay chung se nhan len (it nhat 1): ";
        cin >> numberOfDays;
    } while (numberOfDays < 1);

    // Hien thi kich thuoc quan the cho moi ngay
    cout << "\nKich thuoc quan the sau tung ngay:\n";
    for (int day = 1; day <= numberOfDays; day++) {
        cout << "Ngay " << day << ": " << startingPopulation << endl;
        startingPopulation += (startingPopulation * dailyIncreasePercentage / 100);
    }
    return 0;
}
