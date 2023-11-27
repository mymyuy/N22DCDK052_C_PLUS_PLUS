#include <iostream>
using namespace std;

class MayLocXucTac {
private:
    float m_congSuat;
    float m_thoiGian;
    float m_luongHoaChat;

public:
    MayLocXucTac(float congSuat, float thoiGian, float luongHoaChat);
    float tinhCongSuatLoc();
    float tinhLuongNuoc();
    float tinhChiPhiThue(float donGiaThue);
    float tinhChiPhiSuDung(float donGiaHoaChat);
};

MayLocXucTac::MayLocXucTac(float congSuat, float thoiGian, float luongHoaChat) {
    this->m_congSuat = congSuat;
    this->m_thoiGian = thoiGian;
    this->m_luongHoaChat = luongHoaChat;
}

float MayLocXucTac::tinhCongSuatLoc() {
    if (m_thoiGian < 10) {
        return m_congSuat * (m_luongHoaChat / 100);
    } else {
        return m_congSuat * (m_luongHoaChat / 100) / (m_thoiGian / 10);
    }
}

float MayLocXucTac::tinhLuongNuoc() {
    return tinhCongSuatLoc() * m_thoiGian;
}

float MayLocXucTac::tinhChiPhiThue(float donGiaThue) {
    return donGiaThue * m_thoiGian;
}

float MayLocXucTac::tinhChiPhiSuDung(float donGiaHoaChat) {
    return tinhChiPhiThue(donGiaHoaChat) + (donGiaHoaChat * m_luongHoaChat);
}

int main() {
    MayLocXucTac mayLoc(10, 8, 50); // Thay đổi thông số máy lọc tại đây
    float donGiaThue = 80000;      // Đơn giá thuê máy/h
    float donGiaHoaChat = 10000;   // Đơn giá hóa chất/g

    cout << "Cong suat loc: " << mayLoc.tinhCongSuatLoc() << " m3/h" << endl;
    cout << "Luong nuoc loc duoc: " << mayLoc.tinhLuongNuoc() << " m3" << endl;
    cout << "Chi phi thue may: " << mayLoc.tinhChiPhiThue(donGiaThue) << " VND" << endl;
    cout << "Chi phi su dung may: " << mayLoc.tinhChiPhiSuDung(donGiaHoaChat) << " VND" << endl;

    return 0;
}
