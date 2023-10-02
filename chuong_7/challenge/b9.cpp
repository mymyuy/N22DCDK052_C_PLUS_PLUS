#include <iostream>

using namespace std;

const int NUM_EMPLOYEES = 7;

int main() {
    // Khoi tao mang empId voi cac so nhan vien
    long empId[NUM_EMPLOYEES] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    // Khởi tạo các mảng khác
    int hours[NUM_EMPLOYEES];
    double payRate[NUM_EMPLOYEES];
    double wages[NUM_EMPLOYEES];

    // Nhap thang tin tu nguoi dung
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        cout << "Enter hours worked for employee " << empId[i] << ": ";
        cin >> hours[i];

        // Kiem tra gia tri nhap vao cho gio la hop le
        while (hours[i] < 0) {
            cout << "Please enter a non-negative value for hours: ";
            cin >> hours[i];
        }

        cout << "Enter pay rate for employee " << empId[i] << ": ";
        cin >> payRate[i];

        // Kiem tra gia tri nhap vao cho muc luong la hop le
        while (payRate[i] < 15.00) {
            cout << "Please enter a pay rate of 15.00 or greater: ";
            cin >> payRate[i];
        }

        // Tinh luong
        wages[i] = hours[i] * payRate[i];
    }

    // Hien thi thong tin
    cout << "\nEmployee Payroll Information:\n";
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        cout << "Employee ID: " << empId[i] << "\tGross Wages: $" << wages[i] << "\n";
    }

    return 0;
}
