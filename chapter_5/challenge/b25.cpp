#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile;
    inputFile.open("LineUp.txt");

    if (!inputFile) //ko mo duoc file
    {
        cout << "Khong the mo duoc tep." << endl;
        return 1; // Thoat chuong trinh voi ma loi 1
    }

    string firstName, firstStudent, lastStudent;

    while (inputFile >> firstName) {
        if (firstStudent.empty()) {
            firstStudent = firstName;
            lastStudent = firstName;
        }

        if (firstName < firstStudent) {
            firstStudent = firstName;
        } else if (firstName > lastStudent) {
            lastStudent = firstName;
        }
    }

    inputFile.close();

    cout << "Hoc sinh dung dau hang: " << firstStudent << endl;
    cout << "Hoc sinh dung cuoi hang: " << lastStudent << endl;

    return 0;
}
