#include <iostream>
#include <string>

using namespace std;

int main() {
    // Khai báo thông tin về các chất
    string substances[] = {
        "Ethyl alcohol",
        "Mercury",
        "Oxygen",
        "Water"
    };

    double freezing_points[] = {
        -173,
        -38,
        -362,
        32
    };

    double boiling_points[] = {
        172,
        676,
        -306,
        212
    };

    // Nhập nhiệt độ từ người dùng
    double temperature;
    cout << "Nhap nhiet do (do Fahrenheit): ";
    cin >> temperature;

    // Hien thi cac chat se dong tai nhiet do da nhap
    cout << "Cac chat se dong tai " << temperature << " do Fahrenheit:" << endl;
    for (int i = 0; i < sizeof(substances) / sizeof(substances[0]); i++) {
        if (temperature <= freezing_points[i]) {
            cout << substances[i] << endl;
        }
    }

    // Hien thi cac chat se soi o nhiet do da nhap
    cout << "Cac chat se soi o " << temperature << " do Fahrenheit:" << endl;
    for (int i = 0; i < sizeof(substances) / sizeof(substances[0]); i++) {
        if (temperature >= boiling_points[i]) {
            cout << substances[i] << endl;
        }
    }

    return 0;
}
