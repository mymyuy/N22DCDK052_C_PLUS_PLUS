// Tập tin PhanSo.h
#ifndef _PhanSo_h
#define _PhanSo_h
#include <iostream>

class PhanSo {
private:
    int tu, mau;

public:
    PhanSo();  // Constructor mặc định
    PhanSo(int tu, int mau);  // Constructor có tham số
    PhanSo operator+(const PhanSo &other) const;  // Toán tử cộng giữa hai phân số
    PhanSo operator+(int value) const;  // Toán tử cộng với số nguyên
    PhanSo& operator++();  // Toán tử tăng prefix
    PhanSo& operator+=(const PhanSo &other);  // Toán tử cộng và gán
    operator int() const;  // Chuyển đổi phân số sang số nguyên
    friend std::ostream& operator<<(std::ostream &out, const PhanSo &ps);  // Toán tử xuất
};

#endif
