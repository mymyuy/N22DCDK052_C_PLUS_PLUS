#include <iostream>
using namespace std;

int main() {
    double start_time, duration, charge_rate, total_charge;

    // Nhap thoi gian bat dau duoi dang HH.MM
    cout << "Nhap thoi gian bat dau (duoi dang HH.MM): ";
    cin >> start_time;

    // Kiem tra tinh hop le cua thoi gian
    int hours = static_cast<int>(start_time);
    int minutes = (start_time - hours) * 100;

    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        cout << "Thoi gian khong hop le." << endl;
        return 1;
    }

    // Nhap so phut goi
    cout << "Nhap so phut goi: ";
    cin >> duration;

    // Kiem tra tinh hop le cua so phut goi
    if (duration < 0 || duration > 59) {
        cout << "So phut goi khong hop le." << endl;
        return 1;
    }

    // Xac dinh ty le cuoc cuoc goi dua tren thoi gian bat dau
    if (hours >= 0 && hours < 7) {
        charge_rate = 0.05;
    } else if (hours >= 7 && hours < 19) {
        charge_rate = 0.45;
    } else {
        charge_rate = 0.20;
    }

    // Tinh toan cuoc cuoc goi
    total_charge = charge_rate * duration;

    // Hien thi tong cuoc cuoc goi
    cout << "Cuoc cuoc goi la: $" << total_charge << endl;

    return 0;
}
