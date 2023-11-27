#include <iostream>
#include <PhanSo.h>

// Constructor mặc định
PhanSo::PhanSo() : tu(0), mau(1) {}

// Constructor có tham số
PhanSo::PhanSo(int tu, int mau) : tu(tu), mau(mau) {
    if (mau == 0) {
        std::cerr << "Error: Mau so khong duoc bang 0. Dung lai chuong trinh." << std::endl;
        exit(EXIT_FAILURE);
    }
}

// Toán tử cộng giữa hai phân số
PhanSo PhanSo::operator+(const PhanSo &other) const {
    return PhanSo(tu * other.mau + other.tu * mau, mau * other.mau);
}

// Toán tử cộng với số nguyên
PhanSo PhanSo::operator+(int value) const {
    return PhanSo(tu + value * mau, mau);
}

// Toán tử tăng prefix
PhanSo& PhanSo::operator++() {
    tu += mau;
    return *this;
}

// Toán tử cộng và gán
PhanSo& PhanSo::operator+=(const PhanSo &other) {
    tu = tu * other.mau + other.tu * mau;
    mau *= other.mau;
    return *this;
}

// Chuyển đổi phân số sang số nguyên
PhanSo::operator int() const {
    return tu / mau;
}


int main() {
    PhanSo a(1, 3), c;
    int b = 8;

    c = a + static_cast<PhanSo>(b);
    std::cout << "c = " << a << " + " << b << " = " << c << std::endl;

    std::cout << "++c: ";
    std::cout << "c = " << ++c << std::endl;

    std::cout << "a = " << a << " + " << c << std::endl;

    a += c;
    std::cout << "a = " << a << std::endl;

    b = static_cast<int>(a);
    std::cout << "b = " << b << std::endl;

    return 0;
}
