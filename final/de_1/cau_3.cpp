#include <iostream>
#include <vector>
using namespace std;

// Lớp cơ sở đối tượng Máy Lọc
class MayLoc {
public:
    virtual float tinhCongSuatLocThucTe() = 0;
    virtual float tinhChiPhi() = 0;
    virtual ~MayLoc() {}
};

// Lớp Máy Ly Tâm kế thừa từ lớp MayLoc
class MayLyTam : public MayLoc {
private:
    float congSuat; // Công suất lọc máy (m3/h)
    float thoiGian; // Thời gian sử dụng máy (h)
    float chiPhiNhienLieu; // Chi phí nhiên liệu/vật liệu (đơn giá xăng * lượng xăng)

public:
    static const float DON_GIA_THUE; // Đơn giá thuê máy/h
    static const float DON_GIA_NHIEN_LIEU; // Đơn giá xăng (đồng/lít)

    MayLyTam(float congSuat, float thoiGian);
    float tinhCongSuatLocThucTe() override;
    float tinhChiPhi() override;
};

// Khởi tạo các hằng số
const float MayLyTam::DON_GIA_THUE = 50000;
const float MayLyTam::DON_GIA_NHIEN_LIEU = 20000;

// Định nghĩa các hàm thành viên của lớp MayLyTam
MayLyTam::MayLyTam(float congSuat, float thoiGian) {
    this->congSuat = congSuat;
    this->thoiGian = thoiGian;
    this->chiPhiNhienLieu = DON_GIA_NHIEN_LIEU * tinhCongSuatLocThucTe();
}

float MayLyTam::tinhCongSuatLocThucTe() {
    return congSuat;
}

float MayLyTam::tinhChiPhi() {
    return DON_GIA_THUE * thoiGian + chiPhiNhienLieu;
}

// Lớp Máy Xúc Tác kế thừa từ lớp MayLoc
class MayXucTac : public MayLoc {
private:
    float congSuat; // Công suất lọc máy (m3/h)
    float thoiGian; // Thời gian sử dụng máy (h)
    float luongHoaChat; // Lượng hóa chất sử dụng (g)

public:
    static const float DON_GIA_THUE; // Đơn giá thuê máy/h
    static const float DON_GIA_HOA_CHAT; // Đơn giá hóa chất đơn vị/g

    MayXucTac(float congSuat, float thoiGian, float luongHoaChat);
    float tinhCongSuatLocThucTe() override;
    float tinhChiPhi() override;
};

// Khởi tạo các hằng số
const float MayXucTac::DON_GIA_THUE = 80000;
const float MayXucTac::DON_GIA_HOA_CHAT = 10000;

// Định nghĩa các hàm thành viên của lớp MayXucTac
MayXucTac::MayXucTac(float congSuat, float thoiGian, float luongHoaChat) {
    this->congSuat = congSuat;
    this->thoiGian = thoiGian;
    this->luongHoaChat = luongHoaChat;
}

float MayXucTac::tinhCongSuatLocThucTe() {
    if (thoiGian < 10) {
        return congSuat * (luongHoaChat / 100);
    } else {
        return congSuat * (luongHoaChat / 100) / (thoiGian / 10);
    }
}

float MayXucTac::tinhChiPhi() {
    return DON_GIA_THUE * thoiGian + DON_GIA_HOA_CHAT * luongHoaChat;
}

// Hàm main
int main() {
    int soMayLoc;
    cout << "Nhap so luong may loc: ";
    cin >> soMayLoc;

    // Tạo vector chứa các máy lọc
    vector<MayLoc*> mayLocs;

    // Nhập thông tin và loại máy lọc
    for (int i = 0; i < soMayLoc; ++i) {
        int loaiMay;
        cout << "Chon loai may loc (1: May Ly Tam, 2: May Xuc Tac): ";
        cin >> loaiMay;

        if (loaiMay == 1) {
            float congSuat, thoiGian;
            cout << "Nhap cong suat (m3/h): ";
            cin >> congSuat;
            cout << "Nhap thoi gian su dung (h): ";
            cin >> thoiGian;

            MayLyTam* mayLyTam = new MayLyTam(congSuat, thoiGian);
            mayLocs.push_back(mayLyTam);
        } else if (loaiMay == 2) {
            float congSuat, thoiGian, luongHoaChat;
            cout << "Nhap cong suat (m3/h): ";
            cin >> congSuat;
            cout << "Nhap thoi gian su dung (h): ";
            cin >> thoiGian;
            cout << "Nhap luong hoa chat (g): ";
            cin >> luongHoaChat;

            MayXucTac* mayXucTac = new MayXucTac(congSuat, thoiGian, luongHoaChat);
            mayLocs.push_back(mayXucTac);
        }
    }

    float luongNuoc;
    cout << "Nhap luong nuoc trong ao (m3): ";
    cin >> luongNuoc;

    // Tính tổng chi phí và kiểm tra xem có lọc hết nước hay không
    float tongChiPhi = 0;
    float tongCongSuatLoc = 0;

    for (MayLoc* mayLoc : mayLocs) {
        tongChiPhi += mayLoc->tinhChiPhi();
        tongCongSuatLoc += mayLoc->tinhCongSuatLocThucTe();
    }

    cout << "Tong chi phi su dung cac may loc: " << tongChiPhi << " VND" << endl;
    cout << "Tong cong suat loc: " << tongCongSuatLoc << " m3/h" << endl;

    if (tongCongSuatLoc >= luongNuoc) {
        cout << "Ao duoc loc het nuoc." << endl;
    } else {
        cout << "Ao khong duoc loc het nuoc." << endl;
    }

    // Giải phóng bộ nhớ
    for (MayLoc* mayLoc : mayLocs) {
        delete mayLoc;
    }

    return 0;
}
