#include <iostream>
using namespace std;

int main() {
    double nganSach; // So tien da dinh ngan sach
    double tongChiPhi = 0.0; // Tong so tien da chi tieu

    // Nhap so tien da dinh ngan sach tu nguoi dung
    cout << "Nhap so tien ban da dinh ngan sach trong thang: ";
    cin >> nganSach;

    // Nhap va tinh toan tong so tien da chi tieu
    char tiepTuc;
    do {
        double chiPhi;
        cout << "Nhap so tien da chi tieu: ";
        cin >> chiPhi;
        
        tongChiPhi += chiPhi;

        cout << "Ban muon nhap them chi phi? (Y/N): ";
        cin >> tiepTuc;
    } while (tiepTuc == 'Y' || tiepTuc == 'y');

    // Tinh toan so tien du thua hoac thieu so voi ngan sach
    double soTienDuThua = nganSach - tongChiPhi;

    // Hien thi ket qua
    if (soTienDuThua >= 0) {
        cout << "Ban dang con du " << soTienDuThua << " dong so voi ngan sach da dinh." << endl;
    } else {
        cout << "Ban dang thieu " << -soTienDuThua << " dong so voi ngan sach da dinh." << endl;
    }

    return 0;
}
