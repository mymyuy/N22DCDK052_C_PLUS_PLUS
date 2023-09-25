#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents;

    // Yeu cau nguoi dung nhap so luong hoc sinh trong lop
    cout << "Nhap so luong hoc sinh trong lop (tu 1 den 25): ";
    cin >> numStudents;

    // Kiem tra tinh hop le cua so luong hoc sinh
    if (numStudents < 1 || numStudents > 25) {
        cout << "So luong hoc sinh khong hop le. Vui long nhap lai tu 1 den 25." << endl;
        return 1; // Ket thuc chuong trinh voi ma loi 1
    }

    string firstName, firstStudent, lastStudent;

    // Yeu cau nguoi dung nhap ten cua tung hoc sinh
    for (int i = 0; i < numStudents; i++) {
        cout << "Nhap ten cua hoc sinh thu " << i + 1 << ": ";
        cin >> firstName;

        // Neu day la hoc sinh dau tien, gan ten vao ca firstStudent va lastStudent
        if (i == 0) {
            firstStudent = firstName;
            lastStudent = firstName;
        }

        // So sanh ten cua hoc sinh hien tai voi ten hoc sinh dau tien va cuoi cung
        if (firstName < firstStudent) {
            firstStudent = firstName;
        } else if (firstName > lastStudent) {
            lastStudent = firstName;
        }
    }

    // Hien thi hoc sinh dung dau va hoc sinh dung cuoi
    cout << "Hoc sinh dung dau hang: " << firstStudent << endl;
    cout << "Hoc sinh dung cuoi hang: " << lastStudent << endl;

    return 0;
}
