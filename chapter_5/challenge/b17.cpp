#include <iostream>
using namespace std;

int main() {
    const int numStores = 5;
    int sales[numStores];

    // Nhap doanh so ban hang cho 5 cua hang
    for (int i = 0; i < numStores; i++) {
        cout << "Nhap doanh so ban hang cua cua hang " << i + 1 << ": ";
        cin >> sales[i];
    }

    // Hien thi bieu do cot
    cout << "\nBIEU DO COT DOANH SO BAN HANG" << endl;
    cout << "(Moi * tuong duong $100)\n" << endl;

    for (int i = 0; i < numStores; i++) {
        cout << "Cua hang " << i + 1 << ": ";
        for (int j = 0; j < sales[i] / 100; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
