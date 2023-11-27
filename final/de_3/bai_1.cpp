#include <iostream>

using namespace std;

class MixedNumber {
public:
    int a, b;  // a: phần thực, b: phần nhân với căn bậc hai của 7

    MixedNumber(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void display() {
        cout << a << " + " << b << "√7" << endl;
    }
};

// Nhập số hỗn hợp
MixedNumber inputMixedNumber() {
    int a, b;
    cout << "Nhap phan thuc (a): ";
    cin >> a;
    cout << "Nhap phan nhan voi sqrt(7) (b): ";
    cin >> b;
    return MixedNumber(a, b);
}

// In số hỗn hợp
void printMixedNumber(MixedNumber num) {
    num.display();
}

// Cộng số hỗn hợp
MixedNumber addMixedNumbers(MixedNumber num1, MixedNumber num2) {
    int result_a = num1.a + num2.a;
    int result_b = num1.b + num2.b;
    return MixedNumber(result_a, result_b);
}

// Trừ số hỗn hợp
MixedNumber subtractMixedNumbers(MixedNumber num1, MixedNumber num2) {
    int result_a = num1.a - num2.a;
    int result_b = num1.b - num2.b;
    return MixedNumber(result_a, result_b);
}

// Đảo dấu số hỗn hợp
MixedNumber negateMixedNumber(MixedNumber num) {
    return MixedNumber(-num.a, -num.b);
}

// Nhân số hỗn hợp
MixedNumber multiplyMixedNumbers(MixedNumber num1, MixedNumber num2) {
    int result_a = num1.a * num2.a + 7 * num1.b * num2.b;
    int result_b = num1.a * num2.b + num1.b * num2.a;
    return MixedNumber(result_a, result_b);
}

int main() {
    // Nhập hai số hỗn hợp
    MixedNumber mixedNum1 = inputMixedNumber();
    MixedNumber mixedNum2 = inputMixedNumber();

    // Phép cộng
    MixedNumber resultAdd = addMixedNumbers(mixedNum1, mixedNum2);
    cout << "Tong:" << endl;
    printMixedNumber(resultAdd);

    // Phép trừ
    MixedNumber resultSubtract = subtractMixedNumbers(mixedNum1, mixedNum2);
    cout << "Hieu:" << endl;
    printMixedNumber(resultSubtract);

    // Phép đảo dấu
    MixedNumber negatedNum = negateMixedNumber(mixedNum1);
    cout << "Dao cua so thu nhat:" << endl;
    printMixedNumber(negatedNum);

    // Phép nhân
    MixedNumber resultMultiply = multiplyMixedNumbers(mixedNum1, mixedNum2);
    cout << "Tich:" << endl;
    printMixedNumber(resultMultiply);

    return 0;
}
