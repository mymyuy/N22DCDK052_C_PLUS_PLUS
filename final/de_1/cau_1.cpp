#include <iostream>
using namespace std;

class MayLoc {
private:
    float m_tgian;

protected:
    virtual float congSuat();
    void setTgian(float t);

public:
    MayLoc();
    float tinhLuongNuoc();
    float getCongSuat(); // Public method to access congSuat indirectly
    virtual ~MayLoc();
};

MayLoc::MayLoc() {
    this->m_tgian = 0;
}

void MayLoc::setTgian(float t) {
    this->m_tgian = t;
}

float MayLoc::tinhLuongNuoc() {
    return congSuat() * m_tgian;
}

float MayLoc::getCongSuat() {
    return congSuat();
}

float MayLoc::congSuat() {
    return 0;
}

MayLoc::~MayLoc() {
    // Hàm hủy ảo để đảm bảo hủy đúng đối tượng khi delete con trỏ trỏ đến lớp cơ sở
}

class MayLyTam : public MayLoc {
private:
    float m_cs;

public:
    MayLyTam(float cs, float t);
    float congSuat() override;
};

MayLyTam::MayLyTam(float cs, float t) {
    this->m_cs = cs;
    this->setTgian(t);
}

float MayLyTam::congSuat() {
    return this->m_cs;
}

int main() {
    MayLoc *pm = new MayLoc();
    if (pm->getCongSuat() < 5) {
        MayLyTam ml(81.9, 10);
        pm = &ml;
        cout << "Luong nuoc = " << pm->tinhLuongNuoc() << endl;
    }
    delete pm;
    return 0;
}
