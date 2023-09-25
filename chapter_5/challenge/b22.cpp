#include <iostream>
using namespace std;

int main() {
    int kichThuoc; // Bien luu kich thuoc hinh vuong
    char kyTu = 'X'; // Ky tu de ve hinh vuong

    // Yeu cau nguoi dung nhap kich thuoc hinh vuong
    cout << "Nhap mot so nguyen duong nho hon hoac bang 15: ";
    cin >> kichThuoc;

    // Kiem tra dau vao
    if (kichThuoc <= 0 || kichThuoc > 15) {
        cout << "Kich thuoc khong hop le. Vui long nhap lai." << endl;
    } else {
        // Ve hinh vuong
        for (int i = 0; i < kichThuoc; i++) {
            for (int j = 0; j < kichThuoc; j++) {
                cout << kyTu;
            }
            cout << endl;
        }
    }

    return 0;
}
