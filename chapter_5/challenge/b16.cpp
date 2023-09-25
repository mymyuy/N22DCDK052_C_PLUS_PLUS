#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    double annualInterestRate, startingBalance, totalDeposits = 0.0, totalWithdrawals = 0.0, totalInterest = 0.0;
    int monthsPassed;

    // Nhap lai suat hang nam, so du ban dau va so thang da troi qua
    cout << "Nhap lai suat hang nam (dang thap phan): ";
    cin >> annualInterestRate;
    cout << "Nhap so du ban dau (dang thap phan): ";
    cin >> startingBalance;
    cout << "Nhap so thang da troi qua: ";
    cin >> monthsPassed;

    // Tinh lai suat hang thang
    double monthlyInterestRate = annualInterestRate / 12.0;

    // Khoi tao so du cuoi ky
    double balance = startingBalance;

    // Vong lap cho tung thang
    for (int month = 1; month <= monthsPassed; month++) {
        double deposit, withdrawal;

        // Nhap so tien gui trong thang (khong am)
        cout << "Nhap so tien gui trong thang " << month << " (dang thap phan, khong am): ";
        cin >> deposit;
        while (deposit < 0) {
            cout << "So tien gui khong hop le. Nhap lai: ";
            cin >> deposit;
        }

        // Nhap so tien rut trong thang (khong am va khong vuot qua so du)
        cout << "Nhap so tien rut trong thang " << month << " (dang thap phan, khong am, khong vuot qua so du hien tai " << balance << "): ";
        cin >> withdrawal;
        while (withdrawal < 0 || withdrawal > balance) {
            cout << "So tien rut khong hop le hoac vuot qua so du hien tai. Nhap lai: ";
            cin >> withdrawal;
        }

        // Cap nhat so du, tong so tien gui va tong so tien rut
        balance += deposit - withdrawal;
        totalDeposits += deposit;
        totalWithdrawals += withdrawal;

        // Tinh lai suat hang thang va cong vao so du
        double interest = balance * monthlyInterestRate;
        balance += interest;
        totalInterest += interest;
    }

    // Hien thi so du cuoi ky, tong so tien gui, tong so tien rut va tong lai suat
    cout << "\nSo du cuoi ky: " << balance << endl;
    cout << "Tong so tien gui: " << totalDeposits << endl;
    cout << "Tong so tien rut: " << totalWithdrawals << endl;
    cout << "Tong lai suat kiem duoc: " << totalInterest << endl;

    string fileName = "data.txt";
    ofstream f(fileName);
    if (!f) {
        cout << "Không thể mở tệp để ghi dữ liệu cuối cùng." << endl;
        return 1; // Kết thúc chương trình với mã lỗi 1
    }
    f << "\nSo du cuoi ky: " << balance << endl;
    f << "Tong so tien gui: " << totalDeposits << endl;
    f << "Tong so tien rut: " << totalWithdrawals << endl;
    f << "Tong lai suat kiem duoc: " << totalInterest << endl;
    f.close();
    cout << "Du lieu da duoc ghi vao file " << fileName << endl;
    return 0;
}
