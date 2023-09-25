#include <iostream>
using namespace std;

int main() {
    int number, largest, smallest;

    // Khoi tao bien largest va smallest voi gia tri ban dau
    largest = smallest = 0;

    cout << "Nhap mot day so nguyen (-99 de ket thuc):\n";

    while (true) {
        cout << "Nhap so: ";
        cin >> number;

        // Kiem tra neu nguoi dung muon ket thuc day so
        if (number == -99) {
            break;
        }

        // Cap nhat so lon nhat va nho nhat
        if (number > largest || smallest == 0) {
            largest = number;
        }
        if (number < smallest || smallest == 0) {
            smallest = number;
        }
    }

    // Hien thi so lon nhat va nho nhat
    cout << "So lon nhat trong day: " << largest << endl;
    cout << "So nho nhat trong day: " << smallest << endl;

    return 0;
}
