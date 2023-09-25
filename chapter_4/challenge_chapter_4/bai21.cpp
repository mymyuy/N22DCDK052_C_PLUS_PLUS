#include <iostream>
#include <string>

using namespace std;

int main() {
    string gases[] = {"Carbon Dioxide", "Air", "Helium", "Hydrogen"};
    double speeds[] = {258.0, 331.5, 972.0, 1270.0};
    
    cout << "Chon mot loai khi:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << gases[i] << ": " << speeds[i] << " m/s" << endl;
    }

    int choice;
    while (true) {
        cout << "Nhap so tuong ung voi lua chon cua ban: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            break;
        } else {
            cout << "Lua chon khong hop le. Hay chon mot so tu 1 den 4." << endl;
        }
    }

    double selected_speed = speeds[choice - 1];

    double time;
    while (true) {
        cout << "Nhap thoi gian trong giay (0-30): ";
        cin >> time;
        if (time >= 0 && time <= 30) {
            break;
        } else {
            cout << "Gia tri khong hop le. Thoi gian phai nam trong khoang tu 0 den 30 giay." << endl;
        }
    }

    double distance = selected_speed * time;

    cout << "Nguon am thanh cach ban khoang " << distance << " met." << endl;

    return 0;
}
