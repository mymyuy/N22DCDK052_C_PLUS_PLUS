#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile; // Doi tuong de doc du lieu tu tep
    double number; // Bien de luu tru cac so tu tep
    int count = 0; // Bien de dem so luong so trong tep
    double sum = 0; // Bien de tinh tong cac so tu tep

    // Mo tep de doc du lieu
    inputFile.open("numbers.txt");

    // Kiem tra xem tep co ton tai va mo thanh cong hay khong
    if (!inputFile) {
        cout << "Khong the mo duoc tep." << endl;
        return 1; // Thoat chuong trinh voi ma loi 1
    }

    // Doc va tinh toan du lieu tu tep
    while (inputFile >> number) {
        count++; // Tang so luong so
        sum += number; // Cong so doc vao tong
    }

    // Dong tep sau khi doc xong
    inputFile.close();

    // Kiem tra xem co so luong so nao hay khong
    if (count > 0) {
        double average = sum / count; // Tinh trung binh
        cout << "So luong so trong tep: " << count << endl;
        cout << "Tong cac so trong tep: " << sum << endl;
        cout << "Trung binh cac so trong tep: " << average << endl;
    } else {
        cout << "Khong co so nao trong tep." << endl;
    }

    return 0;
}
