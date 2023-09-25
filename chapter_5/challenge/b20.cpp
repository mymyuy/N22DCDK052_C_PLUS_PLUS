#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Khoi tao seed dua tren thoi gian hien tai
    int soNgauNhien = rand() % 100 + 1; // tao so ngau nhien tu 1 - 100

    int doanSo;

    cout << "Chao mung den tro choi doan so!" << endl;

    do {
        cout << "Nhap mot so du doan (tu 1 den 100): ";
        cin >> doanSo;
        soLanDoan++;

        if (doanSo > soNgauNhien) {
            cout << "Cao qua, hay thu lai." << endl;
        } else if (doanSo < soNgauNhien) {
            cout << "Thap qua, hay thu lai." << endl;
        } else {
            cout << "Chuc mung! Ban da doan dung so " << soNgauNhien << endl;
        }
    } while (doanSo != soNgauNhien);

    return 0;
}
